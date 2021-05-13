using Game;
using UnityEngine;

public class PowerupTrigger : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (!other.CompareTag("Player")) return;
        gameObject.SetActive(false);
        PowerUp._PU.SetPowerup(name);
    }
}
