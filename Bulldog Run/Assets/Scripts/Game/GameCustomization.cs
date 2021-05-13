using UnityEngine;

namespace Game
{
    public class GameCustomization : MonoBehaviour
    {
        #region Bulldogs
        public Object RegularBulldog;
        #endregion
    
        public Vector3 startPos;
        private void Start()
        {
            InGame._IG.UpdateText();            
            var character = PlayerPrefs.GetInt("Bulldog", 0);

            switch (character)
            {
                case 0:
                    Instantiate(RegularBulldog, startPos, Quaternion.Euler(0, 0, 0)); 
                    break;
            }  
        }
    }
}