using UnityEngine;

public class BackgroundMove : MonoBehaviour
{
    [SerializeField] private float speed;
    private Transform _spriteRenderer;
    private float _size;
    
    private void Start()
    {
        _spriteRenderer = GetComponent<Transform>();
        _size = GetComponent<SpriteRenderer>().bounds.size.y;
    }

    private void Update()
    {
        var x = Time.time * speed;
        x = Mathf.Repeat(x, _size);
        _spriteRenderer.position = new Vector2(0, x);
    }
}