using UnityEngine;

public class MusicPlayManager : MonoBehaviour
{
    [SerializeField] private AudioSource _audio;

    public void PlayMusic()
    {
        _audio.Play();
    }
}
