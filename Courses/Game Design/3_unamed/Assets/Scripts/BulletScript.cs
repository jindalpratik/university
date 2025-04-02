using UnityEngine;

public class BulletScript : MonoBehaviour
{
    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("triangle"))
        {
            Destroy(collision.gameObject);
        }
    }
}
