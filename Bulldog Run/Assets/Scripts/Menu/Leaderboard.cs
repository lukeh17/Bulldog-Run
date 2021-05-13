using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

namespace Menu
{
    public class Leaderboard : MonoBehaviour {
        private const string PRIVATE_CODE = "OSjpB7kYQE2jWc_HhvxQ-wl_kgID61fE6x6LgFt4IP5g";
        private const string PUBLIC_CODE = "6099f6108f40c30ca04a6455";
        private const string WEB_URL = "http://dreamlo.com/lb/";

        public Highscore[] highscoresList;
        private DisplayLeaderboard leaderboardDisplay;
        private bool created;

        private void Awake()
        {
            leaderboardDisplay = GetComponent<DisplayLeaderboard>();
        }

        public void AddHighScore()
        {
            var username = PlayerPrefs.GetString("Username");
            var score = PlayerPrefs.GetInt("HighScore", 0);
            StartCoroutine(UploadHighScore(username, score));
        }

        private IEnumerator UploadHighScore(string username, int score)
        {
            var www = UnityWebRequest.Get(WEB_URL + PRIVATE_CODE + "/add/" + username + "/" + score);
            yield return www.SendWebRequest();
            
            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log("Error uploading " + www.error);
            }
        }

        public void DownloadHighScores()
        {
            StartCoroutine(nameof(DownloadHighScoresFromDatabase));
        }

        private IEnumerator DownloadHighScoresFromDatabase()
        {
            //var www = new WWW(WEB_URL + PUBLIC_CODE + "/pipe/" + "9");
            var www = UnityWebRequest.Get(WEB_URL + PUBLIC_CODE + "/pipe/" + "9");
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log("Error uploading " + www.error);
            }
            else
            {
                FormatHighscores(www.downloadHandler.text);
                leaderboardDisplay.OnHighscoresDownloaded(highscoresList);
            }
        }

        private void FormatHighscores(string text)
        {
            var entry = text.Split(new[] { '\n' }, System.StringSplitOptions.RemoveEmptyEntries);
            highscoresList = new Highscore[entry.Length];

            for (var i = 0; i < entry.Length; i++)
            {
                var entryInfo = entry[i].Split('|');
                var username = entryInfo[0];
                var score = int.Parse(entryInfo[1]);
                highscoresList[i] = new Highscore(username, score);
            }
        }

        public struct Highscore
        {
            private string username;
            public readonly int Score;

            public Highscore(string username, int score)
            {
                this.username = username;
                Score = score;
            }
        }
    }
}
