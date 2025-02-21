using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseScript : MonoBehaviour
{
    [SerializeField] GameObject PausePanel;
    [SerializeField] GameObject Text;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        PausePanel.SetActive(false);
    }

    // Update is called once per frame
    public void PauseCLicked()
    {
        PausePanel.SetActive(true);
        Text.SetActive(false);
    }

    public void ResumeClicked()
    {
        PausePanel.SetActive(false);
        Text.SetActive(true);
    }

    public void RestartClicked()
    {
        SceneManager.LoadScene("Level1");
    }

    public void MenuCLicked()
    {
        SceneManager.LoadScene("Menu");
    }
}
