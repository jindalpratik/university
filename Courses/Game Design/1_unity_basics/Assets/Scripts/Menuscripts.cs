using UnityEngine;
using TMPro; //TextMeshPro
using UnityEngine.SceneManagement;


public class Menuscripts : MonoBehaviour
{
    [SerializeField] TMP_Text label;

    public void StartCLicked()
    {
        label.text = "First button working";
        SceneManager.LoadScene("Level1");
    }
}
