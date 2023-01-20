using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Scroll : MonoBehaviour
{
    public int multiplayer = 2;
    public TextMeshProUGUI text;
    // Start is called before the first frame update

    private void Update()
    {
        var scroll = Input.GetAxis("Mouse ScrollWheel");
        if (transform.childCount == 1) return;
      
        if (scroll > 0f) // forward
        {
            if (transform.position.y - multiplayer * scroll < -0.5f) return;
            transform.position -= new Vector3(0, multiplayer*scroll, 0);
            return;
        }
        else if (scroll < 0f) // backwards
        {
         
            transform.position -= new Vector3(0, multiplayer*scroll, 0);
            return;
        }
        if (Input.GetKey(KeyCode.UpArrow))
        {
            if (transform.position.y-0.5f < 0) return;
            transform.position += new Vector3(0, -0.2f, 0);
        }

        if (Input.GetKey(KeyCode.DownArrow))
        {
            transform.position += new Vector3(0, 0.2f, 0);
        }
        text.text = ((int)transform.position.y).ToString();
    }

}
