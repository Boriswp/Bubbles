using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{

	public string Scene = "Level";

	public void LoadScene()
	{
		SceneManager.LoadScene(Scene);
	}
}
