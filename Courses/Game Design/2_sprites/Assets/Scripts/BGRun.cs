using UnityEngine;

public class BGRun : MonoBehaviour
{
    float speed = 0.5f;
    Renderer rend;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rend = GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {
        rend.material.mainTextureOffset += new Vector2(speed * Time.deltaTime, 0);
    }
}
