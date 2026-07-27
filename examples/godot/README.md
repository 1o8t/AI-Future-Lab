# Godot Future City Visualization Reference

**English | [العربية](#الشرح-بالعربية)**

> **Current priority: Deferred.** You do not need to install or run Godot now.

This folder contains a small Godot 4 procedural city starter project. It is preserved as a future learning reference for visualizing approved city data. It is not the AI Future Lab platform and does not contain an AI planner.

---

# English Guide

## 1. What This Project Demonstrates

When the scene starts, the script creates:

- A dark ground block
- Horizontal roads
- Vertical roads
- Cube-shaped buildings
- Random building widths, depths, and heights
- A directional light
- A camera looking toward the city

The result is a simple abstract city grid.

---

## 2. What It Does Not Demonstrate

It does not include:

- AI understanding
- Voice input
- Text input
- City Brief generation
- GIS data
- Real roads
- Real buildings
- Land-use planning
- Schools or hospitals
- Population data
- Traffic
- Utilities
- Digital-twin synchronization
- Reports
- A user interface

---

## 3. Folder Contents

```text
examples/godot/
├── README.md
├── project.godot
├── main.tscn
└── city_generator.gd
```

### `project.godot`

The Godot project configuration file.

It tells Godot:

- The project name
- Which scene opens first
- Rendering configuration
- Other project-level settings

### `main.tscn`

The main scene file.

It contains the root `Node3D` and connects the city-generation script.

### `city_generator.gd`

The GDScript file that creates the city objects.

---

## 4. Script Architecture

The script follows this sequence:

```text
_ready()
→ set random seed
→ create environment
→ create ground
→ create roads
→ create buildings
```

---

## 5. Exported Settings

The script contains:

```gdscript
@export var grid_size: int = 8
@export var spacing: float = 4.0
@export var seed_value: int = 42
```

These values can appear in the Godot Inspector.

### `grid_size`

Controls the number of grid positions.

Examples:

```text
grid_size = 6   smaller city
grid_size = 8   default
grid_size = 15  larger city, more objects
```

A large grid creates more objects and may reduce performance.

### `spacing`

Controls the distance between grid positions.

Examples:

```text
spacing = 3.0   compact
spacing = 4.0   default
spacing = 7.0   spread out
```

### `seed_value`

Controls the random result.

The same seed should create the same building-height pattern.

Examples:

```text
seed_value = 42
seed_value = 100
seed_value = 2026
```

---

## 6. Building Colors

The script defines four colors:

```gdscript
var building_colors: Array[Color] = [
    Color(0.40, 0.35, 0.96),
    Color(0.20, 0.70, 0.88),
    Color(0.15, 0.82, 0.67),
    Color(0.95, 0.55, 0.25)
]
```

They represent visual variety only. They do not currently represent real land uses.

A future version could map colors to:

- Residential
- Commercial
- Public services
- Mixed use
- Utilities

---

## 7. `_ready()`

```gdscript
func _ready() -> void:
    seed(seed_value)
    _create_environment()
    _create_ground()
    _create_roads()
    _create_buildings()
```

Godot calls `_ready()` when the node enters the scene tree.

The function:

1. Sets the random seed.
2. Adds light and camera.
3. Creates the ground.
4. Creates roads.
5. Creates buildings.

---

## 8. Environment Creation

`_create_environment()` creates a light and a camera.

### Directional light

The light is rotated to shine diagonally across the scene.

It enables shadows and uses increased energy.

### Camera

The camera is placed above and away from the center:

```gdscript
camera.position = Vector3(25.0, 27.0, 25.0)
```

It then looks at the center:

```gdscript
camera.look_at(Vector3.ZERO, Vector3.UP)
```

The camera is fixed. There are no movement controls.

---

## 9. Ground Creation

`_create_ground()` creates one large `BoxMesh`.

The width is based on:

```text
grid size × spacing + margin
```

The ground is placed slightly below zero so the roads appear above it.

The ground color is dark blue-gray.

---

## 10. Road Creation

`_create_roads()` loops through grid positions.

A road is created when:

```gdscript
index % 3 == 0
```

This means every third grid position becomes a road line.

At each road position, the script creates:

- One horizontal road
- One vertical road

Roads are thin boxes, not real road meshes.

They do not include:

- Lanes
- Intersections
- Signals
- Sidewalks
- Vehicles
- Traffic logic

---

## 11. Building Creation

`_create_buildings()` loops through X and Z positions.

It skips road positions:

```gdscript
if x % 3 == 0 or z % 3 == 0:
    continue
```

For every remaining location, it creates a building with random:

- Height
- Width
- Depth
- Color

Default ranges:

```text
Height: 1.8 to 8.5
Width: 1.7 to 2.8
Depth: 1.7 to 2.8
```

The building is raised by half its height so it sits on the ground.

---

## 12. Box Creation Helper

`_create_box()` creates a `MeshInstance3D` and a `BoxMesh`.

It applies:

- Size
- Position
- Material
- Color

Then it adds the object as a child of the root node.

This helper is used for roads and buildings.

---

## 13. Material Creation

`_make_material()` creates a `StandardMaterial3D`.

It sets:

- Albedo color
- Low metallic value
- Rough surface

The materials are simple and optimized for a small demonstration.

---

## 14. Future Prerequisites

Only use these steps when you decide to test Godot later.

You would need:

- A computer capable of running Godot 4
- Godot 4.x installed
- The repository downloaded or cloned
- Enough storage for the editor
- Basic understanding of files and folders

Do not download Godot now only because the project contains this folder.

---

## 15. Very Detailed Future Opening Steps

When testing is approved later:

1. Download the repository as a ZIP or clone it.
2. Extract the ZIP completely.
3. Confirm this file exists:

   ```text
   AI-Future-Lab/examples/godot/project.godot
   ```

4. Install a supported Godot 4 version.
5. Open Godot Project Manager.
6. Click **Import**.
7. Browse to the `examples/godot` folder.
8. Select `project.godot`.
9. Confirm the project path.
10. Click **Import & Edit**.
11. Wait for Godot to load.
12. Check the FileSystem panel for:

    ```text
    project.godot
    main.tscn
    city_generator.gd
    ```

13. Open `main.tscn` if it is not already open.
14. Select the root node.
15. Confirm the script is attached.
16. View the Inspector.
17. Confirm `grid_size`, `spacing`, and `seed_value` appear.
18. Press **F6** to run the current scene or **F5** to run the project.
19. If Godot asks for a main scene, select `main.tscn`.
20. Wait for the scene window.

Expected output:

- Dark ground
- Dark road strips
- Colored building blocks
- Camera view from above
- Directional lighting

---

## 16. What to Do If the Scene Is Empty

Check:

1. Is `main.tscn` running?
2. Is `city_generator.gd` attached to the root?
3. Are errors shown in the Output panel?
4. Is the camera current?
5. Is `grid_size` at least 4?
6. Is `spacing` greater than zero?
7. Did the script fail to parse?

Open the Output and Debugger panels and read the first error.

---

## 17. Common Godot Problems

### Project created with another version

A newer or older Godot version may report compatibility warnings.

Record the exact version before changing files.

### Script parse error

Possible causes:

- Unsupported syntax
- Accidental edit
- Wrong indentation
- Missing character

### Camera not showing city

The camera position or look direction may have changed.

### Performance issue

Reduce:

```text
grid_size
```

Because each block is a separate node.

### Objects overlap

Increase `spacing` or reduce building width.

---

## 18. Safe Customization Experiments

Later, you can change one value at a time.

### Smaller city

```gdscript
@export var grid_size: int = 6
```

### Larger spacing

```gdscript
@export var spacing: float = 6.0
```

### Different building heights

Change:

```gdscript
var height := randf_range(3.0, 15.0)
```

### More frequent roads

Change the `% 3` logic carefully.

Example:

```gdscript
index % 2 == 0
```

This creates roads more frequently.

Always record what changed and what happened.

---

## 19. Future Improvements

Possible future steps:

1. Add camera controls.
2. Add labels.
3. Add land-use colors.
4. Add parks.
5. Add school and hospital markers.
6. Read a JSON file.
7. Create objects from data.
8. Add a version label.
9. Show warnings.
10. Compare two plans.

---

## 20. Future JSON Import Concept

A future script could read:

```text
res://city_data.json
```

Possible flow:

```text
Open file
→ parse JSON
→ validate fields
→ check units
→ loop through roads
→ create road objects
→ loop through buildings
→ create building objects
→ show validation errors
```

Example pseudocode:

```gdscript
var file = FileAccess.open("res://city_data.json", FileAccess.READ)
var data = JSON.parse_string(file.get_as_text())

for building in data["buildings"]:
    create_building_from_data(building)
```

This is a future concept and is not implemented in the current script.

---

## 21. Future Connection to AI Future Lab

The correct future relationship is:

```text
AI Future Lab web platform
→ approved digital-twin export
→ Godot importer
→ visual scene
```

Godot should not make the planning decision. It should visualize the approved data.

---

## 22. Future Test Checklist

When testing later, record:

```text
Godot version:
Operating system:
Project opens:
Script parses:
Scene runs:
Ground visible:
Roads visible:
Buildings visible:
Camera correct:
Errors:
Screenshot:
Known limitations:
```

---

## 23. Current Status

- Project files exist.
- Code has been reviewed as a starter structure.
- Runtime execution has not been verified here.
- Godot is not the current project priority.
- No screenshot should be added until the project is actually run.

---

# الشرح بالعربية

## 1. ما هو هذا المشروع؟

هذا مشروع صغير داخل Godot 4 ينشئ:

- أرضًا
- طرقًا
- مباني مكعبة
- كاميرا
- إضاءة

هو ليس منصة AI Future Lab الكاملة.

---

## 2. هل تحتاج إلى تشغيله الآن؟

لا.

استخدام Godot مؤجل للمستقبل.

لا تحتاج إلى تنزيل المحرك أو تعلمه الآن.

---

## 3. الملفات

```text
project.godot      إعدادات المشروع
main.tscn          المشهد الرئيسي
city_generator.gd  الكود الذي ينشئ المدينة
```

---

## 4. كيف يعمل الكود؟

عند تشغيل المشهد:

```text
يحدد الرقم العشوائي
→ ينشئ الإضاءة والكاميرا
→ ينشئ الأرض
→ ينشئ الطرق
→ ينشئ المباني
```

---

## 5. الإعدادات

### `grid_size`

عدد نقاط شبكة المدينة.

كلما زاد، زاد عدد المباني.

### `spacing`

المسافة بين العناصر.

### `seed_value`

يحدد شكل العشوائية. نفس الرقم يعطي ترتيبًا متشابهًا.

---

## 6. الطرق

الكود ينشئ طريقًا كل ثالث موقع في الشبكة.

الطرق مجرد مكعبات مسطحة، وليست طرقًا حقيقية.

لا توجد سيارات أو إشارات أو مسارات.

---

## 7. المباني

المباني مكعبات بارتفاع وعرض وعمق عشوائي.

الألوان للعرض فقط، ولا تمثل استخدامات أراضٍ حقيقية.

---

## 8. خطوات التشغيل المستقبلية

عندما تقرر استخدامه لاحقًا:

1. نزّل Godot 4.
2. نزّل ملفات المستودع.
3. افتح Godot Project Manager.
4. اختر Import.
5. اختر `project.godot`.
6. افتح المشروع.
7. افتح `main.tscn`.
8. اضغط F6 أو F5.
9. راقب نافذة الأخطاء.
10. سجل نسخة Godot والنتيجة.

---

## 9. المشاكل المحتملة

- إصدار Godot مختلف
- خطأ في الكود
- الكاميرا لا ترى المدينة
- `grid_size` كبير جدًا
- المباني متداخلة

ابدأ دائمًا بأول رسالة خطأ.

---

## 10. التطوير المستقبلي

يمكن لاحقًا إضافة:

- تحريك الكاميرا
- ألوان استخدامات الأراضي
- حدائق
- مدارس ومستشفيات
- قراءة JSON
- عرض نسخ مختلفة من الخطة

---

## 11. علاقته بالمشروع

```text
الذكاء الاصطناعي ينشئ بيانات معتمدة
→ Godot يقرأ البيانات
→ Godot يعرض المدينة
```

Godot وسيلة عرض، وليس العقل الذي يخطط المدينة.

---

## 12. الحالة الحالية

- الملفات موجودة.
- التشغيل غير مختبر هنا.
- لا تحتاج إلى استخدامها الآن.
- لا تضف صورة تشغيل إلا بعد تجربة حقيقية.
