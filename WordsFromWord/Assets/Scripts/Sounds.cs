using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sounds : MonoBehaviour
{
   public static Sounds instance;

    private void Awake()
    {
        if(instance == null) instance = this;
    }

    public AudioSource click;
    public AudioSource error;
    public AudioSource correct;
    public AudioSource shuffle;
}
