using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainWord : MonoBehaviour
{
    public static MainWord instance;
    
    [HideInInspector] public Sounds sounds;

    [SerializeField] private TargetWordsContainer targetWordsContainer;
    
    [SerializeField] private Text currentWordText;
    [SerializeField] private Button[] letters;
    [SerializeField] private string mainWord;
    [SerializeField] private RectTransform panel;
    [SerializeField] private Animator uiAnim;
    [SerializeField] private GameObject winPopUp;
    [SerializeField] private GameObject watchAdPopUp;
    [SerializeField] private Animator watchAdAnimator;
    [SerializeField] private RectTransform watchadPanel;

    private string currentWord;
    System.Random random = new System.Random();
    public int currentSceneIndex;
    

    private void Awake()
    {
        if (instance == null) instance = this;
        currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
        
    }
    void Start()
    {
        GameData.scene = SceneManager.GetActiveScene().buildIndex + 1;
        PlayerPrefs.SetInt("scene", GameData.scene);
        sounds = Sounds.instance;
        SetLettersPositions();
        currentWord = string.Empty;
        currentWordText.text = currentWord;
    }

    public void UpdateCurrentWord(string letter)
    {
        currentWord += letter;
        currentWordText.text = currentWord;
    }



    private void SetLettersPositions()
    {
        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].GetComponent<Letter>().SetLetter(mainWord[i].ToString());
        }
    }

    private void ShuffleLettersPositions()
    {
        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].GetComponent<Letter>().SetShuffledLetter(mainWord[i].ToString());
        }
    }

    public void OkButton()
    {
        if (currentWord.Length > 0) targetWordsContainer.CheckTargetWord(currentWord);

        currentWord = string.Empty;
        currentWordText.text = currentWord;

        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].interactable = true;
        }
    }

    public void CancelButton()
    {
        sounds.click.Play();
        currentWord = string.Empty;
        currentWordText.text = currentWord;

        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].interactable = true;
        }
    }

    public void ShuffleLetters()
    {
        sounds.shuffle.Play();
        for (int i = letters.Length - 1; i >= 1; i--)
        {
            int j = random.Next(i + 1);

            var temp = letters[j];
            letters[j] = letters[i];
            letters[i] = temp;
        }

        ShuffleLettersPositions();
    }

    public void WrongWord()
    {
        sounds.error.Play();
        for (int i = 0; i < letters.Length; i++)
        {
            letters[i].GetComponent<Letter>().WrongWord();
        }
    }

    public void HomeButton()
    {
        sounds.click.Play();
        uiAnim.SetTrigger("endlevel");
        StartCoroutine(EndLevel(0));
    }

    IEnumerator EndLevel(int scene)
    {
        while (panel.anchoredPosition.x < 1490)
        {
            yield return new WaitForEndOfFrame();
        }
        if (panel.anchoredPosition.x >= 1490)
        {
            SceneManager.LoadScene(scene);
        }

    }

    IEnumerator CloseWatchAd()
    {
        while (watchadPanel.anchoredPosition.x < 1490)
        {
            yield return new WaitForEndOfFrame();
        }
        if (watchadPanel.anchoredPosition.x >= 1490)
        {
            watchAdPopUp.SetActive(false);
        }

    }

    public void LevelComplete()
    {
        winPopUp.SetActive(true);
    }

    public void NextLevelButton()
    {
        sounds.click.Play();
        winPopUp.SetActive(false);
        uiAnim.SetTrigger("endlevel");
        StartCoroutine(EndLevel(GameData.SetScene()));
    }


    public void ActivateWatchAdPopUp()
    {
        sounds.click.Play();
        watchAdPopUp.SetActive(true);
    }

    public void DeactivateWatchAdPopUp()
    {
        sounds.click.Play();
        watchAdAnimator.SetTrigger("close");
        StartCoroutine(CloseWatchAd());
    }
}
