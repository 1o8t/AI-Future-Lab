# Unreal Engine Future City Visualization Reference

**English | [العربية](#الشرح-بالعربية)**

> **Current priority: Deferred.** You do not need to install or compile Unreal Engine now.

This folder contains a small Unreal Engine 5 C++ procedural city starter project. It is a future educational reference for advanced city visualization. It is not the complete AI Future Lab platform.

---

# English Guide

## 1. What the Project Creates

The `ACityGenerator` Actor creates:

- Ground block
- Horizontal road blocks
- Vertical road blocks
- Cube-shaped building blocks
- Random building sizes and heights

The Actor rebuilds the city when editable properties change in the Unreal Editor through `OnConstruction()`.

---

## 2. What It Does Not Include

It does not include:

- AI model
- Text or voice input
- City Brief generation
- GIS or GeoJSON import
- Professional master planning
- Real road geometry
- Architectural models
- Traffic
- Population
- Schools or hospitals
- Utilities
- Digital-twin database
- Simulation platform
- Reports
- Complete user interface

---

## 3. Folder Structure

```text
examples/unreal/
├── README.md
└── AIFutureLab/
    ├── AIFutureLab.uproject
    ├── Config/
    │   └── DefaultEngine.ini
    └── Source/
        ├── AIFutureLab.Target.cs
        ├── AIFutureLabEditor.Target.cs
        └── AIFutureLab/
            ├── AIFutureLab.Build.cs
            ├── AIFutureLab.cpp
            ├── AIFutureLab.h
            ├── CityGenerator.cpp
            └── CityGenerator.h
```

---

## 4. Project File

```text
AIFutureLab/AIFutureLab.uproject
```

The file currently declares an Unreal Engine 5.5 association.

A different Unreal version may request conversion. Do not convert the only copy without creating a backup or branch first.

---

## 5. Module Structure

The project contains one C++ module:

```text
AIFutureLab
```

The module definition is stored in:

```text
Source/AIFutureLab/AIFutureLab.Build.cs
```

Target files define game and editor build targets.

---

## 6. `CityGenerator.h`

The header declares:

```cpp
UCLASS()
class AIFUTURELAB_API ACityGenerator : public AActor
```

This means `ACityGenerator` is an Unreal Actor that can be placed inside a level.

---

## 7. Editable Properties

### `GridSize`

```cpp
int32 GridSize = 8;
```

Controls the number of grid positions.

The metadata currently limits it between 4 and 30 in the editor.

### `Spacing`

```cpp
float Spacing = 400.0f;
```

Controls the distance between grid points.

Unreal commonly represents world distance in centimeters, so the default value represents a few meters between positions.

### `Seed`

```cpp
int32 Seed = 42;
```

Controls the random building pattern.

### `MinimumHeight`

```cpp
float MinimumHeight = 200.0f;
```

Minimum random building height.

### `MaximumHeight`

```cpp
float MaximumHeight = 900.0f;
```

Maximum random building height.

---

## 8. Generated Components

The Actor stores generated mesh components in:

```cpp
TArray<TObjectPtr<UStaticMeshComponent>> GeneratedComponents;
```

This array is used so the Actor can delete old generated objects before rebuilding the city.

---

## 9. Cube Mesh

The constructor loads Unreal’s default cube:

```cpp
/Engine/BasicShapes/Cube.Cube
```

That cube becomes the base mesh for:

- Ground
- Roads
- Buildings

No external 3D assets are required for the starter structure.

---

## 10. Actor Constructor

The constructor:

1. Disables Tick because the Actor does not update every frame.
2. Creates a root scene component.
3. Loads the default cube mesh.
4. Stores the mesh for later use.

Disabling Tick reduces unnecessary runtime work for this static generator.

---

## 11. `OnConstruction()`

Unreal calls `OnConstruction()` when:

- The Actor is added
- A property changes
- The level is loaded or reconstructed

The function performs:

```text
Clear previous components
→ confirm cube mesh exists
→ initialize random stream
→ create ground
→ create roads
→ create buildings
```

This allows the editor to show changes before running the game.

---

## 12. Random Stream

The code uses:

```cpp
FRandomStream RandomStream(Seed);
```

This creates repeatable random results.

The same seed should generate the same building pattern.

---

## 13. Ground Creation

The city width is calculated from:

```text
GridSize × Spacing + margin
```

The ground is created below the zero height so other objects sit above it.

The current code uses the default cube without custom materials.

---

## 14. Road Creation

Roads are created every third grid position:

```cpp
if (Index % 3 != 0)
{
    continue;
}
```

At each selected position, the code creates:

- Horizontal road block
- Vertical road block

These are simple boxes and do not include:

- Lanes
- Signals
- Vehicles
- Intersections
- Sidewalks
- Road-engineering standards

---

## 15. Building Creation

The code loops through X and Y grid positions.

It skips positions used by roads.

Each remaining building receives random:

- Height
- Width
- Depth

The building is placed at:

```text
Z = Height / 2
```

so it sits on the ground.

---

## 16. `CreateBlock()` Helper

The helper:

1. Creates a `UStaticMeshComponent`.
2. Assigns the cube mesh.
3. Attaches it to the root.
4. Sets location.
5. Converts desired world size into cube scale.
6. Registers the component.
7. Stores it in `GeneratedComponents`.

The default cube is treated as 100 cm on each side, so:

```cpp
WorldSize / 100.0f
```

converts world dimensions to scale.

---

## 17. `ClearGeneratedComponents()`

Before rebuilding, the function:

- Loops through generated components
- Checks whether each component is valid
- Destroys it
- Empties the array

This prevents multiple old cities from remaining after a property change.

---

## 18. Why Unreal Is Deferred

Unreal Engine can provide impressive visuals, but it is not the current project requirement.

It may require:

- Large storage
- Strong hardware
- Compatible C++ toolchain
- Long installation time
- Compilation knowledge
- Engine-specific debugging

The main AI Future Lab priority is structured planning logic and a browser-based platform.

---

## 19. Future Prerequisites

Only follow these steps when Unreal work becomes approved later.

Possible requirements:

- Epic Games Launcher or another approved engine installation method
- Compatible Unreal Engine 5 version
- Supported C++ development environment for the selected Unreal version
- Required compiler and SDK
- Enough free storage
- A capable computer
- Repository downloaded or cloned

Use the official Unreal documentation for the exact toolchain required by the engine version selected at that future time.

---

## 20. Very Detailed Future Opening Steps

When engine testing is approved:

1. Create a backup of the repository.
2. Confirm the project folder exists:

   ```text
   examples/unreal/AIFutureLab/
   ```

3. Confirm `AIFutureLab.uproject` exists.
4. Install a compatible Unreal Engine version.
5. Install the supported C++ development tools for that version.
6. Restart the computer if the installers require it.
7. Open the project folder.
8. If supported on the system, use the project-file generation action for the `.uproject` file.
9. Generate IDE project files.
10. Open the generated solution or workspace.
11. Select the editor target.
12. Select a development editor configuration.
13. Compile the project.
14. Read the first compiler error if compilation fails.
15. Do not randomly change many files at once.
16. When compilation succeeds, open the `.uproject` file.
17. Allow Unreal to load shaders and assets.
18. Create or open a level.
19. Open the Place Actors panel.
20. Search for:

    ```text
    CityGenerator
    ```

21. Drag the Actor into the level.
22. Select the Actor.
23. Find the City category in Details.
24. Adjust:

    - Grid Size
    - Spacing
    - Seed
    - Minimum Height
    - Maximum Height

25. Confirm the blocks rebuild.
26. Save the level.
27. Add a camera or use the editor viewport.
28. Add lighting if the level requires it.
29. Record the engine version and result.
30. Capture a screenshot only after a real successful run.

---

## 21. Expected Editor Result

After placing the Actor:

- A large ground cube appears.
- Flat road blocks cross the scene.
- Building cubes fill other grid positions.
- Changing the seed changes building dimensions.
- Changing grid size changes the generated area.

Materials and colors are minimal because the current code focuses on structure.

---

## 22. Common Problems

### Project requests conversion

The installed engine version differs from the project association.

Safe response:

- Back up first.
- Record the original version.
- Convert a copy, not the only copy.

### Project files do not generate

Possible causes:

- Required C++ tools missing
- Engine integration missing
- Project path problem
- Unsupported engine version

### Compiler cannot find headers

Possible causes:

- Project files not regenerated
- Wrong target
- Missing toolchain
- Module configuration problem

### `CityGenerator` does not appear

Check:

- Project compiled successfully
- Editor restarted after compile
- Actor class is included in the module
- No Unreal Header Tool errors

### No generated blocks

Check:

- Cube mesh loaded
- Actor exists in level
- Grid Size is valid
- Output Log contains errors

### Performance problem

Reduce `GridSize`.

The starter creates a separate `UStaticMeshComponent` for each generated block.

---

## 23. Safe Future Experiments

### Smaller city

```text
Grid Size = 6
```

### Larger spacing

```text
Spacing = 600
```

### Taller buildings

```text
Minimum Height = 400
Maximum Height = 1800
```

### Different random pattern

```text
Seed = 100
```

Change one property at a time.

---

## 24. Future Visual Improvements

Possible order:

1. Add materials.
2. Use different colors for object categories.
3. Add parks.
4. Add road hierarchy.
5. Add service markers.
6. Add camera controls.
7. Add labels.
8. Import JSON.
9. Import GeoJSON.
10. Support plan-version comparison.
11. Replace separate components with a more efficient method.

---

## 25. Future JSON Import Architecture

Possible Unreal classes:

```text
FCityData
FRoadData
FBuildingData
FServiceData
```

Possible flow:

```text
Load JSON
→ deserialize into structs
→ validate version and units
→ convert coordinates
→ create meshes or actors
→ report invalid objects
```

A future importer should reject:

- Missing IDs
- Unsupported units
- Invalid coordinates
- Negative dimensions
- Unknown project version

This importer does not exist in the current starter.

---

## 26. Future Digital-Twin Connection

Correct relationship:

```text
AI Future Lab platform
→ approved digital-twin export
→ Unreal importer
→ high-quality visual scene
```

Unreal should display the approved data. It should not silently modify the official planning version.

---

## 27. Future Performance Strategy

For larger cities, possible improvements include:

- Instanced Static Mesh Components
- Hierarchical Instanced Static Mesh Components
- Combined meshes
- Level streaming
- World Partition
- Level of detail
- Data layers
- District-based loading

These are advanced future topics and are unnecessary for the current small starter.

---

## 28. Future Test Checklist

```text
Unreal Engine version:
Operating system:
Compiler and IDE:
Project files generated:
Project compiles:
Editor opens:
CityGenerator appears:
Actor creates ground:
Actor creates roads:
Actor creates buildings:
Properties rebuild scene:
Output Log errors:
Screenshot:
Known limitations:
```

---

## 29. Current Status

- C++ project files exist.
- Code has been reviewed as starter structure.
- Compilation has not been verified here.
- Editor execution has not been verified here.
- Unreal Engine is not the current project priority.
- No real Unreal screenshot should be published until testing occurs.

---

# الشرح بالعربية

## 1. ما هو هذا المشروع؟

مشروع C++ صغير داخل Unreal Engine 5 ينشئ:

- أرضًا
- طرقًا بسيطة
- مباني مكعبة

يتم إنشاؤها من خلال Actor اسمه:

```text
CityGenerator
```

---

## 2. هل هو AI Future Lab الكامل؟

لا.

لا يحتوي على:

- ذكاء اصطناعي
- City Brief
- GIS
- توأم رقمي حقيقي
- محاكاة مرور
- تطبيق كامل

---

## 3. هل تستخدم Unreal الآن؟

لا.

Unreal مؤجل، لأنه يحتاج مساحة كبيرة وجهازًا مناسبًا وأدوات C++ ووقتًا للتجميع.

---

## 4. الإعدادات

### Grid Size

عدد نقاط شبكة المدينة.

### Spacing

المسافة بين العناصر.

### Seed

شكل العشوائية.

### Minimum Height وMaximum Height

نطاق ارتفاع المباني.

---

## 5. كيف يعمل الكود؟

```text
يحذف العناصر القديمة
→ يحمل المكعب الأساسي
→ ينشئ الأرض
→ ينشئ الطرق
→ ينشئ المباني
```

عند تعديل الإعدادات في المحرر، يتم إعادة إنشاء العناصر.

---

## 6. خطوات التشغيل المستقبلية

عندما يصبح Unreal أولوية:

1. أنشئ نسخة احتياطية.
2. نزّل إصدار Unreal مناسبًا.
3. نزّل أدوات C++ المتوافقة معه.
4. أنشئ ملفات المشروع.
5. افتح الحل البرمجي.
6. اجمع المشروع.
7. افتح `.uproject`.
8. أنشئ Level.
9. ابحث عن CityGenerator.
10. ضعه في المشهد.
11. عدل الإعدادات.
12. سجل الأخطاء والنتيجة.

استخدم التوثيق الرسمي للإصدار الذي ستختاره مستقبلًا لمعرفة أدوات C++ المطلوبة.

---

## 7. المشاكل المحتملة

- اختلاف إصدار المحرك
- أدوات C++ غير مثبتة
- فشل التجميع
- CityGenerator لا يظهر
- المكعب الأساسي لا يُحمّل
- Grid Size كبير

ابدأ بأول خطأ في Output Log أو أداة التجميع.

---

## 8. التطوير المستقبلي

يمكن لاحقًا:

- إضافة مواد وألوان
- إضافة حدائق وخدمات
- قراءة JSON
- استيراد GeoJSON
- مقارنة الخطط
- تحسين الأداء

---

## 9. علاقته بالمشروع

```text
منصة AI Future Lab
→ تصدر بيانات توأم رقمي معتمدة
→ Unreal يقرأ البيانات
→ يعرض المدينة بجودة عالية
```

Unreal وسيلة عرض فقط.

---

## 10. الحالة الحالية

- ملفات C++ موجودة.
- التجميع غير مختبر هنا.
- التشغيل غير مختبر هنا.
- لا تحتاج إلى استخدامه الآن.
- لا تضع صورة تشغيل قبل تجربة حقيقية.
