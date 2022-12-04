using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TargetWord : MonoBehaviour
{

    public string targetWord;
    [SerializeField] private Text targetWordText;
    private Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    public void RevealWord()
    {
        animator.SetTrigger("reveal");
        targetWordText.text = targetWord;
    }

   
}
