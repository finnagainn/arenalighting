using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorClick : MonoBehaviour
{
    // Start is called before the first frame update
    public Renderer render;
    void Start()
    {
        render = GetComponent<Renderer>();
        render.enabled = true;
    }
    public bool clicked;
    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            if(!clicked)
            {
                render.material.color = Color.red;
                clicked = true;
            }
            else
            {
                render.material.color = Color.white;
                clicked = false;
            }
        }
    }
}
