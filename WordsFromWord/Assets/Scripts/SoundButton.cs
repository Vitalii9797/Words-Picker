using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundButton : MonoBehaviour
{
    [SerializeField] private Sprite onSprite;
    [SerializeField] private Sprite offSprite;

    private Sounds sounds;
    private Image image;
    void Start()
    {
        sounds = Sounds.instance;
        image = GetComponent<Image>();

        if(AudioListener.volume == 1)
        {
            image.sprite = onSprite;
        }
        else
        {
            image.sprite = offSprite;
        }

    }

    public void SwitchSound()
    {
        if(AudioListener.volume == 1)
        {
            AudioListener.volume = 0;
            image.sprite = offSprite;
        }
        else
        {
            AudioListener.volume = 1;
            image.sprite = onSprite;
            sounds.click.Play();
        }
    }

   
}
