using UnityEngine;

/// <summary>
/// Small procedural city demonstration for the AI Future Lab public repository.
/// Attach this component to an empty GameObject and press Play.
/// </summary>
public sealed class CityGenerator : MonoBehaviour
{
    [Header("City")]
    [Min(4)] public int gridSize = 8;
    [Min(2f)] public float spacing = 4f;
    public int seed = 42;

    [Header("Building Height")]
    [Min(1f)] public float minimumHeight = 2f;
    [Min(2f)] public float maximumHeight = 9f;

    private readonly Color[] buildingColors =
    {
        new Color(0.40f, 0.35f, 0.96f),
        new Color(0.20f, 0.70f, 0.88f),
        new Color(0.15f, 0.82f, 0.67f),
        new Color(0.95f, 0.55f, 0.25f)
    };

    private void Start()
    {
        Random.InitState(seed);
        CreateEnvironment();
        CreateGround();
        CreateRoads();
        CreateBuildings();
    }

    private void CreateEnvironment()
    {
        if (Camera.main == null)
        {
            GameObject cameraObject = new GameObject("Main Camera");
            Camera camera = cameraObject.AddComponent<Camera>();
            cameraObject.tag = "MainCamera";
            cameraObject.transform.position = new Vector3(25f, 27f, 25f);
            cameraObject.transform.LookAt(Vector3.zero);
            camera.backgroundColor = new Color(0.025f, 0.045f, 0.08f);
        }

        if (FindFirstObjectByType<Light>() == null)
        {
            GameObject lightObject = new GameObject("Directional Light");
            Light light = lightObject.AddComponent<Light>();
            light.type = LightType.Directional;
            light.intensity = 1.25f;
            lightObject.transform.rotation = Quaternion.Euler(50f, -30f, 0f);
        }
    }

    private void CreateGround()
    {
        float cityWidth = gridSize * spacing + 10f;
        CreateCube(
            "Ground",
            new Vector3(cityWidth, 0.5f, cityWidth),
            new Vector3(0f, -0.25f, 0f),
            new Color(0.05f, 0.10f, 0.16f)
        );
    }

    private void CreateRoads()
    {
        float cityWidth = gridSize * spacing + 4f;

        for (int index = 0; index <= gridSize; index++)
        {
            if (index % 3 != 0)
            {
                continue;
            }

            float offset = (index - gridSize / 2f) * spacing;
            Color roadColor = new Color(0.12f, 0.16f, 0.22f);

            CreateCube(
                $"Road-H-{index}",
                new Vector3(cityWidth, 0.08f, 1.1f),
                new Vector3(0f, 0.04f, offset),
                roadColor
            );

            CreateCube(
                $"Road-V-{index}",
                new Vector3(1.1f, 0.08f, cityWidth),
                new Vector3(offset, 0.04f, 0f),
                roadColor
            );
        }
    }

    private void CreateBuildings()
    {
        for (int x = 0; x < gridSize; x++)
        {
            for (int z = 0; z < gridSize; z++)
            {
                if (x % 3 == 0 || z % 3 == 0)
                {
                    continue;
                }

                float height = Random.Range(minimumHeight, maximumHeight);
                float width = Random.Range(1.7f, 2.8f);
                float depth = Random.Range(1.7f, 2.8f);

                float xPosition = (x - (gridSize - 1) / 2f) * spacing;
                float zPosition = (z - (gridSize - 1) / 2f) * spacing;

                CreateCube(
                    $"Building-{x}-{z}",
                    new Vector3(width, height, depth),
                    new Vector3(xPosition, height / 2f, zPosition),
                    buildingColors[Random.Range(0, buildingColors.Length)]
                );
            }
        }
    }

    private GameObject CreateCube(string objectName, Vector3 scale, Vector3 position, Color color)
    {
        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cube.name = objectName;
        cube.transform.SetParent(transform);
        cube.transform.position = position;
        cube.transform.localScale = scale;

        Renderer renderer = cube.GetComponent<Renderer>();
        renderer.material.color = color;

        return cube;
    }
}
