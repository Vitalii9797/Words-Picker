using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public static class GameData
{
    public static int hintsAmount = SetHintsAmount();

    public static int scene = SetScene();

    public static int SetScene()
    {
        if(PlayerPrefs.GetInt("scene") == 0)
        {
            return 1;
        }
        else
        {
            if(PlayerPrefs.GetInt("scene") > 20)
            {
                return 1;
            }
            else
            {
                return PlayerPrefs.GetInt("scene");
            }
        }
    }

    public static int SetHintsAmount()
    {
        if (PlayerPrefs.GetInt("hintsAmount") == 0)
        {
            return 5;
        }
        else
        {
            return PlayerPrefs.GetInt("hintsAmount");
        }
    }

}
