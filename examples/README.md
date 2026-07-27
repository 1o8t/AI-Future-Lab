# Future Visualization References | مراجع العرض المستقبلي

**English | [العربية](#الشرح-بالعربية)**

The `examples` folder contains small procedural city-generation starter files for Godot, Unity, and Unreal Engine.

These files are **not the AI Future Lab application**, and they are not the current project priority. They are preserved as future educational references showing how structured city data might eventually be displayed in a 3D engine.

---

# English Guide

## 1. Why This Folder Exists

AI Future Lab has several different parts:

```text
Human idea
→ AI understanding
→ planning logic
→ digital-twin data
→ visualization
```

The files in `examples` relate only to the last part: **visualization**.

They do not understand a user request, create a professional city plan, retrieve GIS data, or run a real urban simulation.

---

## 2. What the Current Starter Code Does

The existing starter code creates a very simple scene containing:

- A flat ground block
- Horizontal and vertical road strips
- Cube-shaped buildings
- Random building heights
- A fixed random seed
- Basic lighting and camera setup where applicable

This is procedural generation because the program creates objects through code instead of requiring every building to be placed manually.

---

## 3. What the Current Starter Code Does Not Do

It does not include:

- AI model connection
- Voice or text understanding
- City brief generation
- GIS import
- GeoJSON import
- Real road engineering
- Real buildings
- Population data
- School or hospital planning
- Traffic simulation
- Utility simulation
- Digital-twin database
- Arabic or English interface
- User accounts
- Reports
- Professional validation

---

## 4. Why the Engines Are Deferred

The project creator does not currently need to install or use these engines.

The correct priority is:

```text
Understand the project
→ complete the documentation
→ add workflow images
→ define the City Brief
→ build a small AI feature later
→ build a web map later
→ consider 3D visualization much later
```

Maintaining three engines now would create unnecessary work and distract from the core AI planning idea.

---

## 5. Engine Comparison

### Godot

Good for:

- Smaller installation
- Beginner learning
- Open-source projects
- Fast procedural experiments

Current folder:

```text
examples/godot/
```

### Unity

Good for:

- Large learning community
- C# scripting
- Interactive applications
- Many visualization resources

Current folder:

```text
examples/unity/
```

### Unreal Engine

Good for:

- High-quality advanced visuals
- Large-scale scenes
- Professional presentation
- C++ or Blueprint workflows

Current folder:

```text
examples/unreal/
```

Unreal Engine generally requires more storage and stronger hardware.

---

## 6. Recommended Future Decision

Do not try to maintain all three engines at the same time.

When engine work becomes useful:

1. Define the exact purpose.
2. Choose one engine.
3. Confirm hardware requirements.
4. Create one small tested scene.
5. Import approved city data.
6. Record results and limitations.
7. Decide whether the engine adds real project value.

---

## 7. Future Data Flow

A future engine should not generate the official plan independently.

Recommended flow:

```text
User idea
→ AI City Brief
→ human approval
→ planning candidate
→ human approval
→ digital-twin JSON or GeoJSON
→ engine importer
→ visual city scene
```

The engine becomes a viewer of approved structured data.

---

## 8. Example Future City Data

A future export might look like:

```json
{
  "project": "Example District",
  "version": "twin-v0.1",
  "units": "meters",
  "roads": [
    {
      "id": "road-01",
      "start": [0, 0],
      "end": [100, 0],
      "width": 12
    }
  ],
  "buildings": [
    {
      "id": "building-01",
      "position": [20, 30],
      "width": 18,
      "depth": 20,
      "height": 45,
      "use": "residential"
    }
  ],
  "services": [
    {
      "id": "school-01",
      "type": "school",
      "position": [50, 70],
      "capacity": 1200
    }
  ]
}
```

The engine could read this file and create visual objects.

---

## 9. Future Engine Importer Responsibilities

A future importer would:

1. Open the approved JSON or GeoJSON file.
2. Validate the project version.
3. Check units.
4. Check coordinates.
5. Create roads.
6. Create buildings.
7. Create service markers.
8. Apply colors by land use.
9. Add labels.
10. Show warnings when data is missing.

It should not silently modify the source data.

---

## 10. Future Visual Features

Possible later features:

- Camera movement
- District selection
- Building information panel
- Land-use colors
- Day and night
- Development phases
- Population scenario display
- Public-transport animation
- Service-access overlays
- Comparison between two plan versions
- Virtual-reality review

These are future ideas, not current features.

---

## 11. Current Folder Structure

```text
examples/
├── README.md
├── godot/
│   ├── README.md
│   ├── project.godot
│   ├── main.tscn
│   └── city_generator.gd
├── unity/
│   ├── README.md
│   └── Assets/
│       └── Scripts/
│           └── CityGenerator.cs
└── unreal/
    ├── README.md
    └── AIFutureLab/
        ├── AIFutureLab.uproject
        ├── Config/
        └── Source/
```

---

## 12. Current Code Relationship

The three versions follow the same simple idea:

```text
Set random seed
→ create environment
→ create ground
→ create roads every third grid position
→ create buildings in remaining cells
```

The implementation language changes:

- Godot: GDScript
- Unity: C#
- Unreal: C++

---

## 13. What to Learn Before Using an Engine

Recommended knowledge:

- Files and folders
- Variables
- Loops
- Functions
- Coordinates: X, Y, Z
- Object position
- Object scale
- JSON
- Basic debugging

Later knowledge:

- Materials
- Lighting
- Cameras
- Performance optimization
- Geospatial coordinate conversion
- Data import

---

## 14. Current Approval Status

```text
Purpose of folder: Approved as a future reference
Current engine priority: Deferred
Godot execution: Not verified here
Unity execution: Not verified here
Unreal compilation: Not verified here
Use in current project milestone: No
```

---

## 15. What You Need to Do Now

Nothing inside this folder is required now.

Do not install three engines only because the files exist.

Current useful work:

- Read the documentation.
- Add the workflow images.
- Improve the public project presentation.
- Learn the five main project ideas.
- Define the first AI City Brief feature.

---

# الشرح بالعربية

## 1. لماذا يوجد مجلد `examples`؟

هذا المجلد خاص بأكواد صغيرة لعرض مدينة بسيطة داخل:

- Godot
- Unity
- Unreal Engine

هو ليس التطبيق الأساسي، ولا يحتوي على الذكاء الاصطناعي الكامل.

---

## 2. ماذا تفعل الأكواد؟

تنشئ:

- أرضًا بسيطة
- خطوط طرق
- مباني على شكل مكعبات
- ارتفاعات عشوائية
- كاميرا وإضاءة في بعض المحركات

هذا فقط يوضح فكرة إنشاء عناصر المدينة بالكود.

---

## 3. ماذا لا تفعل؟

لا تقوم بـ:

- فهم كلام المستخدم
- إنشاء City Brief
- تخطيط مدينة احترافي
- قراءة GIS
- تشغيل محاكاة مرور
- إنشاء توأم رقمي حقيقي
- إنشاء تطبيق كامل

---

## 4. هل يجب عليك استخدامها الآن؟

لا.

المحركات مؤجلة للمستقبل.

ترتيب المشروع الأفضل:

```text
فهم المشروع
→ التوثيق
→ صور الـworkflows
→ City Brief
→ ميزة AI صغيرة
→ خريطة ويب
→ عرض ثلاثي الأبعاد لاحقًا
```

---

## 5. عندما نحتاج محركًا مستقبلًا

لا نستخدم الثلاثة معًا.

نقوم بـ:

1. تحديد الهدف.
2. اختيار محرك واحد.
3. التأكد من الجهاز.
4. تجربة مشهد صغير.
5. استيراد بيانات مدينة معتمدة.
6. تسجيل النتيجة والأخطاء.
7. تحديد هل المحرك مفيد فعلًا.

---

## 6. العلاقة الصحيحة مع الذكاء الاصطناعي

```text
فكرة المستخدم
→ الذكاء الاصطناعي يفهم
→ الإنسان يعتمد
→ النظام ينشئ بيانات المدينة
→ المحرك يعرض البيانات
```

الذكاء الاصطناعي هو العقل، وبيانات التوأم الرقمي هي معلومات المدينة، والمحرك هو وسيلة العرض.

---

## 7. ماذا تفعل الآن؟

لا تحتاج إلى فتح أي محرك.

ركز الآن على:

- فهم الفكرة
- إضافة صور الـworkflows
- تنظيم `assets`
- قراءة الملفات الكبيرة
- الاستعداد لأول ميزة AI مستقبلًا
