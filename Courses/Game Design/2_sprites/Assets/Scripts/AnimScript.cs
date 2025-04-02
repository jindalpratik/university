using UnityEngine;

public class AnimScript : MonoBehaviour
{
    Animator animator;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {

        animator = GetComponent<Animator>();
        animator.SetInteger("player", 0);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.R))
        {
            animator.SetInteger("player", 1);
        }
        else
        {
            animator.SetInteger("player", 0);
        }
    }
}
