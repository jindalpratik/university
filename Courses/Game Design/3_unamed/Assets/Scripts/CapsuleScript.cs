using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CapsuleScript : MonoBehaviour
{

    public GameObject bulletPrefab;
    GameObject bulletClone;
    [SerializeField] float bulletSpeed = 2;
    // Start is called before the first frame update


    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < Input.touchCount; ++i)
        {
            if (Input.GetTouch(i).phase == TouchPhase.Began)
            {
                bulletClone = Instantiate(bulletPrefab, transform.position, Quaternion.identity) as GameObject;
                Vector2 touchPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
                Vector2 dir = touchPos - (new Vector2(transform.position.x, transform.position.y));
                dir.Normalize();
                bulletClone.GetComponent<Rigidbody2D>().linearVelocity = dir * bulletSpeed;
                Destroy(bulletClone, 5);
            }
        }

        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            bulletClone = GameObject.Instantiate(bulletPrefab, transform.position, transform.rotation);
            Vector2 screenPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            Vector2 dir = screenPoint - (new Vector2(transform.position.x, transform.position.y));
            dir.Normalize();
            bulletClone.GetComponent<Rigidbody2D>().linearVelocity = dir * bulletSpeed;
            Destroy(bulletClone, 5);
        }
    }
}