using UnityEngine;

public class circleScript : MonoBehaviour
{
    public Rigidbody2D rig;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        rig.linearVelocity = Vector2.right * 2;
    }

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "obs")
        {
            Time.timeScale = 0;
        }
    }
}