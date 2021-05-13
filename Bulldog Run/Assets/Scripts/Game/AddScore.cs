using UnityEngine;

public class AddScore : MonoBehaviour
{
   private void OnTriggerEnter2D(Collider2D other)
   {
      if (!other.CompareTag("Player")) return;
      InGame._IG.PlayerScored();
      //PowerUp._PU.ShowFire();
   }
}
