# Project and Test Status | حالة المشروع والاختبارات

**English | [العربية](#الحالة-بالعربية)**

This file explains what has been reviewed, what remains conceptual, what starter code exists, and why Godot, Unity, and Unreal Engine testing is intentionally deferred.

---

# English Status

## 1. Current Project Stage

AI Future Lab is currently a:

- Public concept
- System architecture
- Workflow-design project
- Product specification
- Responsible-AI design
- Future development roadmap
- Small starter-code repository

It is **not currently** a completed AI urban-planning platform.

---

## 2. What Is Currently Approved by the Project Creator

Approved as public project material:

- `README.md`
- `README_AR.md`
- Project vision
- Problem and solution
- End-to-end workflow explanation
- System architecture
- Workflow library
- Feature specification
- Roadmap
- Safety and governance direction
- Future scope
- Public project pitch

“Approved” here means approved by the project creator for the public repository. It does not mean government, engineering, legal, academic, or commercial approval.

---

## 3. Documentation Review Status

The documentation has been expanded to provide:

- Clear project purpose
- Detailed system stages
- Inputs and outputs
- Failure cases
- Human approval requirements
- Current-versus-future distinction
- Arabic and English guidance

Future professional review is still valuable in:

- Urban planning
- Transport
- Infrastructure
- GIS
- Digital twins
- AI evaluation
- Safety and governance
- Cybersecurity
- Arabic technical terminology

---

## 4. Current Code Status

The repository includes small procedural visualization code for:

- Godot 4
- Unity
- Unreal Engine 5

The code creates simple ground, road, and building blocks.

It does not include:

- AI planning
- GIS data import
- Digital-twin synchronization
- Traffic simulation
- Utility simulation
- Professional urban analysis
- A complete application interface

The starter code should be understood as a future learning reference.

---

## 5. Why Engine Testing Is Deferred

The project creator does not currently plan to use the game engines.

This is a reasonable decision because the project’s main value is not the engine. The priority should be:

```text
Understand the project
→ improve documentation
→ add workflow images
→ define the city brief
→ build a small AI brief generator later
→ add a web map later
→ consider advanced visualization much later
```

Testing three engines now would require time, large software installations, storage, hardware resources, and engine-specific learning without proving the core AI concept.

---

## 6. Current Engine Test Result

### Godot

- Intended version: Godot 4.x
- Code review: starter structure present
- Editor execution: not performed here
- Current priority: deferred

### Unity

- Intended version: Unity 6 or a recent compatible version
- Code review: starter `MonoBehaviour` script present
- Editor execution: not performed here
- Current priority: deferred

### Unreal Engine

- Intended version: Unreal Engine 5.x C++
- Project association: 5.5 in the project file
- Code review: starter actor code present
- Compilation and editor execution: not performed here
- Current priority: deferred

No claim is made that these examples compile or run correctly on every engine version or operating system.

---

## 7. What “Deferred” Means

Deferred does not mean failed or deleted.

It means:

- The files remain as future references.
- They are not part of the current milestone.
- The project creator does not need to install the engines now.
- The repository does not use engine screenshots as proof of a working AI platform.
- Engine work can return later when there is approved city data to visualize.

---

## 8. Conditions for Returning to Engine Work

Engine work becomes useful when:

- A structured city-data format exists.
- The digital-twin object model is defined.
- A real city brief can be saved.
- A map or planning candidate can export JSON or GeoJSON.
- There is a clear reason for 3D visualization.
- The required computer can run the selected engine.
- One engine is selected instead of trying to maintain three immediately.

---

## 9. Recommended Future Engine Strategy

When the time comes:

1. Choose one engine.
2. Define the exact purpose.
3. Import approved city data.
4. Test one small scene.
5. Record the engine version.
6. Add a screenshot.
7. Document errors and fixes.
8. Do not call it a complete platform.

Possible purposes:

- Educational city viewer
- Visual plan comparison
- Presentation mode
- Immersive review

---

## 10. Future Engine Validation Checklist

When testing begins later, record:

- Engine name
- Engine version
- Operating system
- Hardware
- Project-opening result
- Compilation result
- Run result
- Expected output
- Actual output
- Error messages
- Fixes
- Screenshot
- Known limitations

Example:

```text
Engine: Godot
Version: 4.x.x
Operating system: Windows
Project opens: Yes/No
Scene runs: Yes/No
Ground visible: Yes/No
Roads visible: Yes/No
Buildings visible: Yes/No
Errors: ...
```

---

## 11. Main Platform Test Status

The complete platform cannot be tested because it has not been implemented.

Future test areas:

### AI brief generator

- Requirement extraction
- Missing-information detection
- Arabic understanding
- English understanding
- Structured JSON
- User correction

### Web platform

- Login
- Project creation
- Saving
- Versioning
- Permissions

### Map

- Site boundary
- Geometry
- Layer display
- GeoJSON export

### Planning and simulation

- Model inputs
- Calculations
- Assumptions
- Failure handling
- Professional validation

### Security

- Authentication
- Authorization
- Upload safety
- Secret management
- Backup and recovery

---

## 12. Honest Public Status Statement

Use this statement when explaining the repository:

> AI Future Lab is currently a documented AI-powered urban-planning concept and system architecture. It includes detailed workflows and small future visualization starter files. The complete AI planner, GIS platform, digital twin, and simulations have not yet been implemented.

---

## 13. Current Next Step

The correct next step is not engine testing.

The current next step is:

- Finish large bilingual documentation
- Add approved visual assets
- Improve safe contact and permission process
- Understand and explain the project
- Define the first AI City Brief data format

---

# الحالة بالعربية

## 1. مرحلة المشروع الحالية

AI Future Lab حاليًا عبارة عن:

- فكرة عامة موثقة
- هندسة نظام
- مسارات عمل
- مواصفات منتج مستقبلي
- تصميم للذكاء الاصطناعي المسؤول
- خارطة طريق
- أكواد أولية صغيرة

المشروع ليس منصة تخطيط مدن مكتملة حاليًا.

---

## 2. ما الذي تمت الموافقة عليه؟

صاحب المشروع وافق على:

- الصفحتين الإنجليزية والعربية
- رؤية المشروع
- المشكلة والحل
- شرح طريقة العمل
- هيكل النظام
- الـworkflows
- الميزات
- خارطة الطريق
- الأمان والحوكمة
- النطاق المستقبلي
- عرض المشروع

المقصود بالموافقة هنا هو موافقة صاحب المشروع على نشر المحتوى، وليس اعتمادًا حكوميًا أو هندسيًا أو قانونيًا.

---

## 3. حالة المحركات

يوجد كود بسيط لـ:

- Godot
- Unity
- Unreal Engine

الكود ينشئ أرضًا وطرقًا ومباني بسيطة فقط.

لا يحتوي على:

- ذكاء اصطناعي للتخطيط
- بيانات GIS
- توأم رقمي حقيقي
- محاكاة مرور
- محاكاة مياه أو طاقة
- تطبيق كامل

---

## 4. لماذا تم تأجيل المحركات؟

لأنها ليست أولوية المشروع الآن.

الترتيب الأفضل:

```text
فهم الفكرة
→ تحسين التوثيق
→ إضافة الصور
→ تعريف City Brief
→ بناء ميزة AI صغيرة مستقبلًا
→ خريطة ويب مستقبلًا
→ محركات ثلاثية الأبعاد لاحقًا جدًا
```

تنزيل ثلاثة محركات وتعلمها الآن قد يستهلك وقتًا كبيرًا دون إثبات فكرة الذكاء الاصطناعي الأساسية.

---

## 5. معنى كلمة مؤجل

مؤجل لا يعني فاشل.

يعني:

- الملفات تبقى للمستقبل.
- لا تحتاج إلى تشغيلها الآن.
- لا تعتبر جزءًا من المرحلة الحالية.
- يمكن العودة إليها عندما توجد بيانات مدينة منظمة.

---

## 6. متى نعود للمحركات؟

عندما يكون لدينا:

- صيغة بيانات مدينة واضحة
- نموذج للتوأم الرقمي
- City Brief محفوظ
- JSON أو GeoJSON للتصدير
- سبب واضح للعرض ثلاثي الأبعاد
- جهاز مناسب
- اختيار محرك واحد فقط في البداية

---

## 7. ماذا نقول للناس؟

> المشروع حاليًا فكرة وهندسة نظام موثقة بالتفصيل. توجد ملفات أولية للعرض المستقبلي، لكن المنصة الكاملة والذكاء الاصطناعي والتوأم الرقمي والمحاكاة لم يتم تنفيذها بعد.

---

## 8. الخطوة الحالية

الخطوة الحالية هي:

- تكبير وتوضيح جميع الملفات
- إضافة الصور المعتمدة
- تنظيم التواصل وطلب الإذن
- فهم المشروع جيدًا
- تجهيز شكل البيانات لأول ميزة AI

ولا تحتاج إلى استخدام Godot أو Unity أو Unreal الآن.
