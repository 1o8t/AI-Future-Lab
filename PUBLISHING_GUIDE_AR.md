# دليل نشر وإدارة AI Future Lab على GitHub

**[English Version](PUBLISHING_GUIDE.md) | العربية**

هذا الملف يشرح كيفية المحافظة على المستودع وتحديثه ونشر الصور والتوثيق بطريقة منظمة وآمنة وصادقة.

المستودع تم إنشاؤه ونشره بالفعل، لذلك يستخدم هذا الدليل لإدارة التحديثات المستقبلية وليس لإنشاء المستودع من البداية فقط.

---

## 1. معلومات المستودع

اسم المستودع:

```text
AI-Future-Lab
```

الرابط:

```text
https://github.com/1o8t/AI-Future-Lab
```

الوصف المقترح:

```text
AI-powered urban-planning concept that transforms human ideas into structured, explainable, and testable city plans.
```

---

## 2. ما الذي يمثل المشروع حاليًا؟

المستودع يمثل:

- فكرة المشروع
- الرؤية
- المشكلة والحل
- هندسة النظام
- الـworkflows
- مسارات AI وRAG وModelOps
- الأمان والحوكمة
- خارطة الطريق
- شرح عربي وإنجليزي
- أكواد عرض أولية للمستقبل

لا يمثل حاليًا:

- منصة حكومية مكتملة
- منتجًا تجاريًا جاهزًا
- مخطط مدن احترافيًا معتمدًا
- توأمًا رقميًا حيًا
- محاكاة هندسية احترافية

---

## 3. كيف تعدل ملفًا؟

من GitHub:

1. افتح الملف.
2. اضغط رمز القلم **Edit this file**.
3. عدل الجزء المطلوب فقط.
4. راجع التغيير في تبويب Preview.
5. اكتب رسالة Commit واضحة.
6. اختر Commit directly to main للتعديلات البسيطة، أو فرعًا جديدًا للتعديلات الكبيرة.
7. اضغط Commit changes.
8. افتح الصفحة وتأكد أن التنسيق صحيح.

مثال رسالة Commit:

```text
Expand Arabic explanation of digital twin
```

تجنب الرسائل غير الواضحة مثل:

```text
update
fix
new
```

---

## 4. كيف تضيف ملفًا؟

1. افتح المجلد المطلوب.
2. اختر **Add file**.
3. اختر **Create new file** أو **Upload files**.
4. استخدم اسمًا واضحًا.
5. أضف المحتوى أو ارفع الملف.
6. اكتب رسالة Commit.
7. راجع المسار قبل الحفظ.

مثال:

```text
assets/workflows/01-master-overview.png
```

---

## 5. تنظيم اللغتين

التوثيق الإنجليزي موجود في:

```text
docs/
```

والنسخ العربية في:

```text
docs/ar/
```

كل ملف إنجليزي يجب أن يربط بالعربي:

```markdown
**English | [العربية](ar/filename.md)**
```

وكل ملف عربي يربط بالإنجليزي:

```markdown
**[English](../filename.md) | العربية**
```

عند تعديل معلومة مهمة، راجع النسختين حتى لا تختلف الأرقام أو الحالة.

---

## 6. إضافة صور الـworkflows

الخطوات:

1. افتح Workflow في Whimsical.
2. راجع المخطط كاملًا.
3. تأكد من عدم وجود معلومات خاصة.
4. اختر Export.
5. اختر PNG بجودة عالية.
6. افتح الصورة وتأكد من وضوح النص.
7. غيّر الاسم حسب الترتيب.
8. ارفعها داخل:

```text
assets/workflows/
```

الأسماء:

```text
01-master-overview.png
02-human-input-ai-understanding.png
03-ai-core-architecture.png
04-urban-planning-digital-twin.png
05-city-generation-simulation.png
06-results-explainability.png
07-errors-recovery.png
08-security-apis-monitoring.png
09-learning-optimization.png
10-deployment-operations.png
11-final-integrated-architecture.png
```

---

## 7. إضافة Banner

اسم الملف:

```text
assets/branding/ai-future-lab-banner.png
```

المقاس المقترح:

```text
1600 × 600
```

المحتوى:

```text
AI FUTURE LAB
From Human Ideas to Intelligent Cities
AI-Powered Urban Planning Concept
```

لا تضع شعارات حكومية أو شركات بلا إذن، ولا تجعل الصورة توحي أن المنصة تعمل إذا كانت صورة مفاهيمية فقط.

---

## 8. إضافة صورة إلى Markdown

```markdown
![AI Future Lab Banner](assets/branding/ai-future-lab-banner.png)
```

أو داخل ملف في `docs` قد تحتاج مسارًا نسبيًا مختلفًا:

```markdown
![Master Overview](../assets/workflows/01-master-overview.png)
```

تأكد أن الملف موجود قبل إضافة الرابط.

---

## 9. GitHub Issues

المستودع يحتوي على نماذج لـ:

- طلب إذن
- طلب تعاون
- ملاحظة مهنية

عندما يصل طلب:

1. اقرأه كاملًا.
2. تحقق من هوية الشخص أو الجهة.
3. لا تنتقل مباشرة إلى بريد أو هاتف خاص.
4. لا ترسل ملفات سرية.
5. لا تعتبر الطلب شراكة.
6. اطلب معلومات إضافية عند الحاجة.
7. استخدم موافقة مكتوبة وواضحة.
8. شارك شخصًا بالغًا أو ولي أمر في التعاون الرسمي أو التجاري المهم.

---

## 10. إدارة طلبات الإذن

قبل الموافقة، افحص:

- المادة المطلوبة
- الغرض
- نوع الاستخدام
- الجمهور
- التعديل
- ذكر المصدر
- وجود مال أو تمويل
- الجهات المشاركة
- المدة

لا تكتب فقط:

```text
Yes, okay
```

اكتب موافقة محددة مثل:

```text
Permission is granted only to use Workflow 1 in the named educational presentation, with attribution and a link to the official repository. Commercial use, modification, redistribution, and transfer to another organization are not included.
```

التعاون الكبير قد يحتاج اتفاقًا رسميًا.

---

## 11. حماية الخصوصية

لا تنشر:

- العمر الدقيق
- المدرسة
- المنزل
- الهاتف
- الهوية
- الموقع اليومي
- كلمات المرور
- API Keys
- ملفات حكومية أو شركات سرية

راجع الصور ولقطات الشاشة قبل رفعها.

---

## 12. تحديث حالة المشروع

عند إنجاز شيء جديد، لا تغير الحالة إلى مكتمل مباشرة.

استخدم مراحل مثل:

```text
Concept
Documented
Designed
Starter code
Prototype
Tested prototype
Pilot
Production
```

مثال:

- كتابة الكود فقط: Starter code
- تشغيله مرة واحدة: Prototype test
- اختبارات متعددة: Tested prototype
- استخدام محدود مع جهة: Pilot
- تشغيل حقيقي ومراقبة: Production

---

## 13. تحديثات التقدم

يمكن إنشاء مجلد مستقبلًا:

```text
updates/
```

وملفات مثل:

```text
2026-08-project-update.md
```

النموذج:

```markdown
# Project Update — Date

## Completed
- ...

## Learned
- ...

## Changed
- ...

## Current challenge
- ...

## Next milestone
- ...

## Honest status
- ...
```

---

## 14. إدارة الأكواد

عند إضافة كود حقيقي:

- اشرح طريقة التشغيل.
- حدد النسخة المطلوبة.
- أضف `.env.example` بلا أسرار.
- أضف معالجة أخطاء.
- أضف اختبارات.
- سجل الحدود.
- لا تضع نتائج اختبار لم تحدث.
- لا تدّع دقة تخطيطية بلا تقييم مهني.

---

## 15. الفروع وPull Requests

للتعديلات الكبيرة:

1. أنشئ Branch.
2. عدل الملفات.
3. افتح Pull Request.
4. راجع الفرق.
5. تأكد من اللغتين.
6. راجع الأمان.
7. ادمج بعد الموافقة.

أسماء فروع مقترحة:

```text
feature/city-brief-schema
docs/add-workflow-images
fix/arabic-navigation
```

---

## 16. Releases المستقبلية

لا تنشئ Release على أنه منتج كامل الآن.

يمكن لاحقًا إنشاء إصدارات مثل:

```text
v0.1 — Public Architecture Documentation
v0.2 — Bilingual Documentation and Permission Forms
v0.3 — City Brief Schema
v0.4 — First AI Brief Prototype
```

كل Release يوضح:

- المنجز
- غير المنجز
- طريقة الاختبار
- الحدود
- الملفات

---

## 17. Topics المقترحة

```text
artificial-intelligence
smart-cities
urban-planning
digital-twin
system-architecture
explainable-ai
responsible-ai
geospatial
uae
student-project
```

لا تضف كلمات توحي باعتماد حكومي أو منصة إنتاجية إذا لم يكن ذلك صحيحًا.

---

## 18. Social Preview

يمكن رفع صورة مناسبة من إعدادات المستودع.

اسم مقترح:

```text
assets/social/github-social-preview.png
```

مقاس مقترح:

```text
1280 × 640
```

راجع الصورة قبل استخدامها.

---

## 19. مراجعة شهرية للمستودع

راجع:

- الروابط
- الأخطاء الإملائية
- تطابق العربية والإنجليزية
- معلومات قديمة
- الصور
- Issues المفتوحة
- طلبات الإذن
- الأسرار أو المعلومات الخاصة
- حالة الميزات
- الخطوة التالية

---

## 20. أهم قاعدة

لا تجعل شكل GitHub الاحترافي يدفعك إلى ادعاء شيء غير موجود.

قوة المشروع في:

- الفكرة
- التنظيم
- الرؤية
- التوثيق
- الصراحة
- الاستعداد للتعلم
- المراجعة المهنية

الوصف الصحيح حاليًا:

> AI Future Lab هو مفهوم موثق وهندسة نظام ورؤية منتج مستقبلي مدعومة بمخططات وأكواد عرض أولية.
