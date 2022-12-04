using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Letter : MonoBehaviour
{
    [SerializeField] private Text buttonText;

    private Button letterButton;
    private MainWord mainWord;
    private string letterValue;
    private Animator animator;


    private void Start()
    {
        mainWord = MainWord.instance;
        animator = GetComponent<Animator>();
        letterButton = GetComponent<Button>();
    }

    public void PressButton()
    {
        mainWord.sounds.click.Play();
        mainWord.UpdateCurrentWord(letterValue);
        letterButton.interactable = false;
    }

    public void SetLetter(string letter)
    {
        letterValue = letter;
        buttonText.text = letterValue;
    }

    public void SetShuffledLetter(string letter)
    {
        animator.SetTrigger("shuffle");
        letterValue = letter;
        buttonText.text = letterValue;
    }

    public void WrongWord()
    {
        animator.SetTrigger("wrong");
    }

}
