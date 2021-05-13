using UnityEngine;
using UnityEngine.UI;

public class InGame : MonoBehaviour
{
    #region variables
    public GameObject[] UI;
    public Text scoreText;
    //public Text pickleText;
    
    [HideInInspector]
    public int score = 0;
    #endregion
    
    #region instance
    public static InGame _IG;

    private void Awake()
    {
        _IG = this;
    }
    #endregion

    public void GameOver()
    {
        for (var i = 0; i < 3; i++)
        {
            UI[i].SetActive(true);
        }
        UI[4].SetActive(false);
        Destroy(gameObject.GetComponent<ObjectSpawn>());
        
        if (score > PlayerPrefs.GetInt ("HighScore", 0)) 
        {
            PlayerPrefs.SetInt ("HighScore", score);
            UI[3].SetActive (true);
        }
        
        Player.moveSpeed = 0f;
        BackgroundMove.Enabled = false;
    }
    
    public void PlayerScored()
    {
        score++;
        UpdateText();
    }
    

    public void UpdateText()
    {
        //var p = PlayerPrefs.GetInt("Pickles", 0); For costumes if I add it
        //pickleText.text = p.ToString();
        scoreText.text = "Score: " + score;
        
    }

}
