using System.Collections;
using UnityEngine;

namespace Game
{
    public class PowerUp : MonoBehaviour
    {
        public GameObject plus20;
        public float FastSpeed = 12.5f;
        private GameObject marks;
        //private GameObject fire;

        public static PowerUp _PU;

        private void Awake()
        {
            _PU = this;
        }

        public void SetPowerup(string n)
        {
            switch (n)
            {
                case "Bone(Clone)":
                    ShowPlus20();
                    break;
                case "Food(Clone)":
                    ShowSpeedMarks();
                    break;
                default:
                    ShowPlus20();
                    break;
            }    
        }
    
        public void SetObjects(GameObject m)
        {
            marks = m;
            //fire = f;
        }

        // public void HideFire()
        // {
        //     fire.SetActive(false);
        // }

        // public void ShowFire()
        // {
        //     fire.SetActive(true);
        //     AudioManager._AM.Play("Sizzle");
        // }

        #region +20

        private void ShowPlus20()
        {
            StartCoroutine(Plus20());
            InGame._IG.score += 20;
            InGame._IG.UpdateText();
        }

        private IEnumerator Plus20()
        {
            plus20.SetActive(true);
            yield return new WaitForSeconds(1);
            plus20.SetActive(false);
        }
        #endregion

        #region speed

        private void ShowSpeedMarks()
        {
            StartCoroutine(SpeedMarks());
        }

        private IEnumerator SpeedMarks()
        {
            marks.SetActive(true);
            Player.moveSpeed = FastSpeed;
            yield return new WaitForSeconds(2);
            Player.moveSpeed = 11;
            marks.SetActive(false);
        }
        #endregion

        //#region pickles
        //
        // private void Pickles()
        // {
        //     int p = PlayerPrefs.GetInt("Pickles", 0);
        //     p += 1;
        //     PlayerPrefs.SetInt("Pickles", p);
        //     InGame._IG.UpdateText();
        // }
        //
        // #endregion
    }
}
