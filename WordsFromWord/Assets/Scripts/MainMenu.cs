using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public class MainMenu : MonoBehaviour, IUnityAdsInitializationListener
{
    private Animator animator;
    private Sounds sounds;

    [SerializeField] private string _gameId;
    [SerializeField] private RectTransform title;

    private void Awake()
    {
        InitializeAds();
    }

    private void Start()
    {
        sounds = Sounds.instance;
        animator = GetComponent<Animator>();    
    }
    public void Play()
    {
        sounds.click.Play();
        animator.SetTrigger("fade");
        StartCoroutine(StartGame());
    }

    public void Exit()
    {
        sounds.click.Play();
        Application.Quit();
    }

    public void RateButton()
    {
        sounds.click.Play();
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.CockStar.WordsPicker");
    }
    IEnumerator StartGame()
    {
        while(title.anchoredPosition.y < 1490)
        {
            yield return new WaitForEndOfFrame();
        }
        if(title.anchoredPosition.y >= 1490)
        {
            SceneManager.LoadScene(GameData.SetScene());
        }

    }


    public void InitializeAds()
    {
        Advertisement.Initialize(_gameId, true, this);
    }

    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }
}
