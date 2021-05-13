using UnityEngine;

public class ObjectSpawn : MonoBehaviour
{
    #region Variables
    public float spawnMinG = 1f;
    public float spawnMaxG = 2f;
    public float spawnMinC = 2f;
    public float spawnMaxC = 4f;
    public Transform groundSpawn;
    public Transform powerupSpawn;
    #endregion

    private void Start()
    {
        Invoke(nameof(SpawnGround), Random.Range(1, 2));
        Invoke(nameof(SpawnPowerup), Random.Range(1, 3));
    }

    private void SpawnGround()
    {
        ObjectPooler.pool_instance.SpawnFromPool("Ground", groundSpawn.position, Quaternion.identity);
        Invoke(nameof(SpawnGround), Random.Range(spawnMinG, spawnMaxG));
    }

    private void SpawnPowerup()
    {
        ObjectPooler.pool_instance.SpawnFromPool(GetPowerup(), powerupSpawn.position, Quaternion.identity);
        Invoke(nameof(SpawnPowerup), Random.Range(spawnMinC, spawnMaxC));
    }
    
    private static string GetPowerup()
    {
        var i = Random.Range(0, 5);
        return i switch
        {
            0 => "Bone",
            1 => "Bone",
            4 => "Bone",
            2 => "Food",
            3 => "Food",
            _ => "Food"
        };
    }
    
}
