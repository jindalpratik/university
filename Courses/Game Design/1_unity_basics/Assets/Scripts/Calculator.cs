using UnityEngine;
using TMPro;

public class Calculator : MonoBehaviour
{
    [SerializeField] TMP_InputField A_Input;
    [SerializeField] TMP_InputField B_Input;
    [SerializeField] TMP_InputField Result_Input;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AdditionButton()
    {
        if(A_Input.text != null && B_Input.text != null)
        {
            float a = float.Parse("" + A_Input.text);
            float b = float.Parse("" + B_Input.text);
            Result_Input.text = (a + b).ToString();
        }
    }

    public void SubtractButton()
    {
        if (A_Input.text != null && B_Input.text != null)
        {
            float a = float.Parse("" + A_Input.text);
            float b = float.Parse("" + B_Input.text);
            Result_Input.text = (a-b).ToString();
        }
    }

    public void MultiplyButton()
    {
        if (A_Input.text != null && B_Input.text != null)
        {
            float a = float.Parse("" + A_Input.text);
            float b = float.Parse("" + B_Input.text);
            Result_Input.text = (a * b).ToString();
        }
    }

    public void DivisionButton()
    {
        if (A_Input.text != null && B_Input.text != null)
        {
            float a = float.Parse("" + A_Input.text);
            float b = float.Parse("" + B_Input.text);
            Result_Input.text = (a / b).ToString();
        }
    }
}
