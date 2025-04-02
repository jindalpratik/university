using UnityEngine;

public class EnemySpawnerScript : MonoBehaviour
{
    public GameObject Enemy;
    GameObject EnemyClone;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        InvokeRepeating("SpawnEnemy", 4.0f, 3f);
    }

    // Update is called once per frame
    void Update()
    {
        float rand = Random.Range(transform.position.x - 2, transform.position.x + 2);
        EnemyClone = Instantiate(Enemy, new Vector2(rand, transform.position.y), Quaternion.identity);
    }
}
