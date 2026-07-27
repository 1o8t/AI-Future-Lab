# Unity Future City Visualization Reference

**English | [العربية](#الشرح-بالعربية)**

> **Current priority: Deferred.** You do not need to install or run Unity now.

This folder contains a small Unity C# procedural city-generation script. It is a future educational reference showing how code can create a simple city scene. It is not the complete AI Future Lab platform.

---

# English Guide

## 1. What the Script Creates

When attached to an empty GameObject and run, the script creates:

- Ground
- Horizontal road blocks
- Vertical road blocks
- Cube-shaped buildings
- Random building sizes and heights
- A camera when the scene has no main camera
- A directional light when the scene has no light

---

## 2. What It Does Not Create

It does not include:

- AI understanding
- City Brief generation
- GIS or GeoJSON import
- Real land-use planning
- Real roads
- Real architecture
- Population
- Schools or hospitals
- Traffic simulation
- Utilities
- Digital twin
- User interface
- Reports
- Professional validation

---

## 3. Folder Structure

```text
examples/unity/
├── README.md
└── Assets/
    └── Scripts/
        └── CityGenerator.cs
```

This is not a full Unity project. It contains the script and folder structure that can be copied into a future Unity project.

---

## 4. Main Script

File:

```text
Assets/Scripts/CityGenerator.cs
```

The class is:

```csharp
public sealed class CityGenerator : MonoBehaviour
```

Because it inherits from `MonoBehaviour`, Unity can attach it to a GameObject.

---

## 5. Inspector Settings

### Grid settings

```csharp
[Min(4)] public int gridSize = 8;
[Min(2f)] public float spacing = 4f;
public int seed = 42;
```

#### `gridSize`

Controls the number of grid positions.

#### `spacing`

Controls the distance between positions.

#### `seed`

Controls the random building pattern.

### Building-height settings

```csharp
[Min(1f)] public float minimumHeight = 2f;
[Min(2f)] public float maximumHeight = 9f;
```

They define the random height range.

Important:

```text
maximumHeight should be greater than minimumHeight
```

---

## 6. Building Colors

The script defines four colors.

They create visual variety only.

They do not currently mean:

- Residential
- Commercial
- School
- Healthcare

A future version could connect each color to a real land-use field.

---

## 7. Start Sequence

Unity calls `Start()` when the GameObject becomes active.

```csharp
private void Start()
{
    Random.InitState(seed);
    CreateEnvironment();
    CreateGround();
    CreateRoads();
    CreateBuildings();
}
```

Sequence:

1. Initialize random seed.
2. Create camera and light if missing.
3. Create ground.
4. Create roads.
5. Create buildings.

---

## 8. Environment Creation

`CreateEnvironment()` checks:

```csharp
if (Camera.main == null)
```

If no main camera exists, it creates one.

The camera:

- Is tagged `MainCamera`
- Is placed above the city
- Looks at the center
- Receives a dark background color

The method also checks:

```csharp
FindFirstObjectByType<Light>() == null
```

If no light exists, it creates a directional light.

---

## 9. Ground Creation

`CreateGround()` calculates city width using:

```text
gridSize × spacing + margin
```

It calls `CreateCube()` with:

- Name: Ground
- Wide scale
- Slightly lowered position
- Dark color

---

## 10. Road Creation

`CreateRoads()` loops through the grid.

It creates roads when:

```csharp
index % 3 == 0
```

At every selected index, it creates:

- Horizontal road
- Vertical road

Roads are flattened cubes.

They do not include:

- Lanes
- Vehicles
- Signals
- Junction logic
- Sidewalks
- Traffic rules

---

## 11. Building Creation

`CreateBuildings()` loops through X and Z.

It skips road positions:

```csharp
if (x % 3 == 0 || z % 3 == 0)
{
    continue;
}
```

For every remaining cell, it selects random:

- Height
- Width
- Depth
- Color

Then it creates a cube named:

```text
Building-X-Z
```

The position uses half the building height so the cube sits above the ground.

---

## 12. `CreateCube()` Helper

The helper uses:

```csharp
GameObject.CreatePrimitive(PrimitiveType.Cube)
```

It then:

1. Names the cube.
2. Places it under the generator GameObject.
3. Sets position.
4. Sets scale.
5. Gets the Renderer.
6. Changes the material color.

Unity primitive cubes also include colliders by default. The current demonstration does not use them.

---

## 13. Future Requirements

Only follow these steps later when engine work becomes a project priority.

Possible requirements:

- Unity Hub
- Unity 6 or a recent compatible editor
- A 3D project template
- Enough disk space
- A computer capable of running Unity
- Basic understanding of the Unity Editor

Do not install Unity now only because the repository contains this script.

---

## 14. Very Detailed Future Setup Steps

When approved later:

1. Install Unity Hub.
2. Open Unity Hub.
3. Install one supported Unity Editor version.
4. Include the required platform modules only if needed.
5. Create a new project.
6. Choose a standard 3D template.
7. Name the project, for example:

   ```text
   AI-Future-Lab-Unity-Viewer
   ```

8. Choose a safe project folder.
9. Wait for Unity to create and import the project.
10. Close Unity before replacing large folders if required.
11. Copy this folder:

    ```text
    examples/unity/Assets/Scripts/
    ```

12. Paste it inside the Unity project’s `Assets` folder.
13. Reopen Unity.
14. Wait for script compilation.
15. Open the Console window.
16. Confirm there are no compiler errors.
17. Create an empty GameObject:

    ```text
    Hierarchy → right-click → Create Empty
    ```

18. Rename it:

    ```text
    AI Future Lab City Generator
    ```

19. Select the GameObject.
20. In the Inspector, click **Add Component**.
21. Search for:

    ```text
    CityGenerator
    ```

22. Add the component.
23. Confirm the fields appear:

    - Grid Size
    - Spacing
    - Seed
    - Minimum Height
    - Maximum Height

24. Save the scene.
25. Press **Play**.
26. Wait for the city objects to appear.
27. Review the Console for errors.
28. Stop Play mode before editing generated runtime objects.

---

## 15. Expected Output

The Game view should show:

- Dark background
- Ground block
- Road grid
- Colored cube buildings
- View from above and to the side

The generated objects should appear under the generator in the Hierarchy during Play mode.

Because they are created at runtime, they disappear when Play mode stops.

---

## 16. Common Problems

### Script does not appear in Add Component

Check:

- File name is `CityGenerator.cs`.
- Class name is `CityGenerator`.
- Console has no compilation errors.
- File is inside `Assets`.

### `FindFirstObjectByType` error

An older Unity version may not support the same API.

Possible future response:

- Use a newer compatible Unity version.
- Or replace it carefully with an older supported object-search method.

Record the version and the exact error before editing.

### Pink or missing materials

The rendering pipeline may differ. The current script only changes the primitive material color.

### Empty Game view

Check:

- The component is attached.
- The GameObject is active.
- Play mode is running.
- A camera exists.
- Console has no errors.

### Too many objects

Reduce `gridSize`.

The script creates a separate GameObject for every road and building.

### Buildings overlap

Increase `spacing` or reduce width/depth ranges.

---

## 17. Safe Future Experiments

### Smaller grid

Set:

```text
Grid Size = 6
```

### Larger blocks

Set:

```text
Spacing = 6
```

### Taller city

Set:

```text
Minimum Height = 4
Maximum Height = 18
```

### Change seed

Change:

```text
Seed = 100
```

Change one value at a time and record the result.

---

## 18. Future Improvement Plan

Possible improvement order:

1. Add Clear and Regenerate buttons.
2. Generate in Edit mode safely.
3. Add camera controls.
4. Add land-use categories.
5. Add road hierarchy.
6. Add parks.
7. Add service markers.
8. Read JSON.
9. Import GeoJSON.
10. Compare plan versions.

---

## 19. Future JSON Import

Future flow:

```text
Read JSON file
→ deserialize
→ validate version and units
→ create roads
→ create buildings
→ create services
→ display errors
```

Possible C# data class:

```csharp
[System.Serializable]
public class BuildingData
{
    public string id;
    public float x;
    public float z;
    public float width;
    public float depth;
    public float height;
    public string use;
}
```

Possible future load method:

```csharp
string json = File.ReadAllText(path);
CityData city = JsonUtility.FromJson<CityData>(json);
```

This is not implemented in the current script.

---

## 20. Correct Future AI Connection

```text
AI Future Lab web system
→ approved digital-twin JSON
→ Unity importer
→ create visual scene
```

Unity should not become the authority for planning requirements or approvals.

---

## 21. Performance Improvements for Later

The current script creates many separate objects.

Possible future optimization:

- Combine meshes
- Use GPU instancing
- Use object pooling
- Use one material per category
- Load only visible districts
- Use level of detail
- Use data streaming for large cities

These are unnecessary for the current small starter.

---

## 22. Future Test Checklist

```text
Unity Hub version:
Unity Editor version:
Template:
Operating system:
Script compiles:
Component appears:
Scene runs:
Ground visible:
Roads visible:
Buildings visible:
Camera visible:
Light visible:
Console errors:
Screenshot:
Known limitations:
```

---

## 23. Current Status

- The C# starter script exists.
- It has not been executed in Unity here.
- Compatibility across Unity versions is not guaranteed.
- Unity is not the current project priority.
- No runtime screenshot should be published until a real test is completed.

---

# الشرح بالعربية

## 1. ماذا يفعل الكود؟

عند تشغيله داخل Unity، ينشئ:

- أرضًا
- طرقًا بسيطة
- مباني مكعبة
- كاميرا إذا لم توجد
- إضاءة إذا لم توجد

---

## 2. ماذا لا يفعل؟

لا يحتوي على:

- ذكاء اصطناعي
- City Brief
- GIS
- تخطيط مدينة حقيقي
- محاكاة مرور
- توأم رقمي
- تطبيق كامل

---

## 3. هل تستخدم Unity الآن؟

لا.

Unity مؤجل للمستقبل، ولا تحتاج إلى تنزيله الآن.

---

## 4. الملف الرئيسي

```text
Assets/Scripts/CityGenerator.cs
```

يتم ربطه بـGameObject فارغ مستقبلًا.

---

## 5. الإعدادات

### Grid Size

حجم شبكة المدينة.

### Spacing

المسافة بين العناصر.

### Seed

شكل العشوائية.

### Minimum Height وMaximum Height

أقل وأعلى ارتفاع للمباني.

---

## 6. كيف يعمل؟

```text
Start
→ إنشاء الكاميرا والإضاءة
→ إنشاء الأرض
→ إنشاء الطرق
→ إنشاء المباني
```

---

## 7. خطوات التشغيل المستقبلية

عندما يصبح Unity أولوية:

1. نزّل Unity Hub.
2. نزّل إصدار Unity مناسبًا.
3. أنشئ مشروع 3D.
4. انسخ مجلد Scripts إلى Assets.
5. انتظر انتهاء التجميع.
6. راجع Console.
7. أنشئ Empty GameObject.
8. أضف CityGenerator.
9. اضغط Play.
10. سجل النتيجة والأخطاء.

---

## 8. المشاكل المحتملة

- إصدار Unity غير متوافق
- خطأ C#
- الكود لا يظهر كـComponent
- الكاميرا غير موجودة
- عدد العناصر كبير
- المباني متداخلة

ابدأ دائمًا من أول خطأ في Console.

---

## 9. التطوير المستقبلي

يمكن لاحقًا:

- قراءة JSON
- إضافة استخدامات أراضٍ
- إضافة مدارس وحدائق
- إضافة تحريك الكاميرا
- مقارنة نسختين
- تحسين الأداء

---

## 10. علاقته بالمشروع

```text
منصة AI Future Lab تعتمد بيانات المدينة
→ تصدر JSON
→ Unity يقرأ البيانات
→ يعرض المدينة
```

Unity للعرض، وليس لاتخاذ القرار.

---

## 11. الحالة

- الملف موجود.
- التشغيل غير مختبر هنا.
- لا تحتاج إلى استخدامه الآن.
- لا تدّعي أن Unity جزء مكتمل من المشروع.
