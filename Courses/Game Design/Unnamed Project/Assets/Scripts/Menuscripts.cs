using UnityEngine;
using TMPro; //TextMeshPro

public class Menuscripts : MonoBehaviour
{
    [SerializeField] TMP_Text label;

    public void StartCLicked()
    {
        label.text = "First button working";
    }
}
