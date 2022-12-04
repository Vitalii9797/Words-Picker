using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TargetWordsContainer : MonoBehaviour
{
    public static TargetWordsContainer instance;

    public MainWord mainWord;

    [SerializeField] private List<TargetWord> targetWords;
    [SerializeField] private Text progressText;
    [SerializeField] private Text hintsAmountText;    
    [SerializeField] private Text wordsSolvedText;
    private List<string> words = new List<string>();

    private int startWordsCount;
    private int wordsCount;

    private void Awake()
    {
        if(instance == null) instance = this;
    }

    private void Start()
    {
        mainWord = MainWord.instance;
        hintsAmountText.text = GameData.hintsAmount.ToString();
        wordsCount = 0;
        startWordsCount = targetWords.Count;
        progressText.text = "SOLVED: " + wordsCount.ToString() + "/" + startWordsCount.ToString();
        wordsSolvedText.text = targetWords.Count.ToString();
        for (int i = 0; i < targetWords.Count; i++)
        {
            words.Add(targetWords[i].targetWord);
        }
    }

    
    public void UpdateHintsAmount()
    {
        PlayerPrefs.SetInt("hintsAmount", GameData.hintsAmount);
        hintsAmountText.text = GameData.hintsAmount.ToString();
    }
    public void CheckTargetWord(string currentWord)
    {
        if(targetWords.Count > 0)
        {
            if(!words.Contains(currentWord))
            {
                mainWord.WrongWord();
                return;
            }
            for (int i = 0; i < targetWords.Count; i++)
            {
                if(targetWords[i].targetWord == currentWord)
                {
                    mainWord.sounds.correct.Play(); 
                    targetWords[i].RevealWord();
                    targetWords.RemoveAt(i);
                    words.Remove(currentWord);
                    wordsCount++;
                    progressText.text = "SOLVED: " + wordsCount.ToString() + "/" + startWordsCount.ToString();
                    if(AllWordsSolved())
                    {
                        mainWord.LevelComplete();
                        return;
                    }
                    else
                    {
                        return;
                    }
                }
            }


        }
    }

    public void Hint()
    {
       if(GameData.hintsAmount > 0)
        {
            if (targetWords.Count > 0)
            {
                mainWord.sounds.correct.Play();
                int randomIndex = Random.Range(0, targetWords.Count);
                targetWords[randomIndex].RevealWord();
                targetWords.RemoveAt(randomIndex);
                words.RemoveAt(randomIndex);
                wordsCount++;
                progressText.text = "SOLVED: " + wordsCount.ToString() + "/" + startWordsCount.ToString();
                GameData.hintsAmount -= 1;
                UpdateHintsAmount();
                if (AllWordsSolved())
                {
                    mainWord.LevelComplete();
                    return;
                }
                else
                {
                    return;
                }
            }
        }
       else
        {
            mainWord.ActivateWatchAdPopUp();
        }


    }

    public bool AllWordsSolved()
    {
        if(targetWords.Count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
