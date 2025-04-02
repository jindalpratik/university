using UnityEngine;

public class EnemyScript : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // TO create a script which moves an object towards another object
        float step = speed * Time.deltaTime;

        transform.position = Vector2.MoveTowards(transform.position,
            new Vector2(transform.position.x, surfaceTarget.transform.position.y + 2), step);
        

    }
}
