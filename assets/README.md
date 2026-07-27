# Assets Guide | دليل ملفات الصور والتصميم

**English | [العربية](#الدليل-بالعربية)**

The `assets` folder is the visual library for AI Future Lab. It is not a software feature and it does not require programming knowledge.

Use this folder for approved public images that help visitors understand the project quickly.

---

# English Guide

## 1. What Belongs in `assets`?

The folder may contain:

- Project banner
- Project logo
- Workflow images
- Architecture diagrams
- Safe screenshots
- Presentation images
- Social-sharing images
- Future prototype screenshots
- Icons created for the project

Do not add random files only to make the repository look larger. Every asset should have a clear purpose.

---

## 2. Recommended Folder Structure

```text
assets/
├── README.md
├── branding/
│   ├── ai-future-lab-banner.png
│   ├── ai-future-lab-logo.png
│   ├── ai-future-lab-logo-light.png
│   └── ai-future-lab-logo-dark.png
├── workflows/
│   ├── 01-master-overview.png
│   ├── 02-human-input-ai-understanding.png
│   ├── 03-ai-core-architecture.png
│   ├── 04-urban-planning-digital-twin.png
│   ├── 05-city-generation-simulation.png
│   ├── 06-results-explainability.png
│   ├── 07-errors-recovery.png
│   ├── 08-security-apis-monitoring.png
│   ├── 09-learning-optimization.png
│   ├── 10-deployment-operations.png
│   └── 11-final-integrated-architecture.png
├── diagrams/
│   ├── ai-lifecycle.png
│   ├── system-architecture.png
│   └── roadmap.png
├── screenshots/
│   ├── github-homepage.png
│   └── future-prototype-placeholder.png
└── social/
    ├── github-social-preview.png
    └── project-presentation-cover.png
```

You do not need to create every folder immediately. Begin with the priority assets below.

---

## 3. Priority 1 — Main Project Banner

Create one wide image for the top of the GitHub page.

Suggested content:

```text
AI FUTURE LAB
From Human Ideas to Intelligent Cities
AI-Powered Urban Planning Concept
```

Suggested visual direction:

- Futuristic but realistic UAE-inspired city
- Clean dark or light background
- Subtle AI network or planning grid
- No fake government logos
- No claim that the image is a working application
- No private information

Suggested filename:

```text
assets/branding/ai-future-lab-banner.png
```

Suggested size:

```text
1600 × 600 pixels
```

A different wide size is acceptable as long as text remains readable on desktop and mobile.

---

## 4. Priority 2 — Project Logo

A logo is optional but useful.

The logo should be:

- Simple
- Recognizable at small size
- Suitable for dark and light backgrounds
- Connected to AI, future cities, or planning
- Original

Suggested files:

```text
assets/branding/ai-future-lab-logo.png
assets/branding/ai-future-lab-logo-light.png
assets/branding/ai-future-lab-logo-dark.png
```

Do not use official UAE government marks or organization logos without permission.

---

## 5. Priority 3 — Whimsical Workflow Images

The workflow images are the most important educational assets.

### Export process

For each Whimsical board:

1. Open the board.
2. Review the complete diagram.
3. Remove any private comments, email addresses, or account details.
4. Use Whimsical export.
5. Choose PNG.
6. Select a high-quality resolution.
7. Open the exported image.
8. Confirm the text is readable.
9. Rename it using the approved naming format.
10. Upload it into `assets/workflows/`.

### Required filenames

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

### Image review checklist

- Full workflow visible
- Text readable
- No cropped boxes
- No missing connectors
- Correct board title
- No private project links shown inside the image
- No browser tabs
- No notification popups
- No personal account information

---

## 6. Priority 4 — Architecture Diagrams

These may be exported from Mermaid, Whimsical, Figma, or another approved design tool.

Useful diagrams:

- Human idea to city brief
- Complete AI lifecycle
- System layers
- Digital-twin flow
- Security and recovery flow
- Development roadmap

Suggested filenames:

```text
assets/diagrams/ai-lifecycle.png
assets/diagrams/system-architecture.png
assets/diagrams/roadmap.png
```

Every diagram should include a short explanation in the related documentation.

---

## 7. Priority 5 — Safe Screenshots

Screenshots are useful only when they show something real.

Current acceptable screenshots:

- GitHub repository homepage
- Whimsical workflow overview
- A future prototype after it actually works

Do not upload a generated interface and call it a working product when it is only a concept image.

Suggested filename:

```text
assets/screenshots/github-homepage.png
```

Before publishing a screenshot, crop out:

- Browser tabs
- Email addresses
- Account names you do not want public
- Notifications
- Personal bookmarks
- Home or school information
- Private URLs
- File paths containing a personal name

---

## 8. Social Preview Image

GitHub can display a social preview when the repository link is shared.

Suggested content:

```text
AI Future Lab
AI-Powered Urban Planning Concept
From Human Ideas to Intelligent Cities
```

Suggested filename:

```text
assets/social/github-social-preview.png
```

Suggested size:

```text
1280 × 640 pixels
```

Keep important text away from the outer edges.

---

## 9. What Not to Upload

Do not upload:

- Personal photos unless there is a clear approved reason
- Exact age
- School images or school ID
- Home location
- Phone number
- Private email
- Identification documents
- Password screenshots
- API keys
- Internal organization files
- Confidential maps
- Restricted infrastructure data
- Copyrighted images copied without permission
- Stock images without a valid license
- Logos of companies or government organizations without permission
- Fake screenshots presented as working software

---

## 10. Copyright and Image Ownership

Before adding an image, confirm one of these is true:

- You created it.
- It was created specifically for the project and you have permission.
- It has a license that allows this use.
- It is an approved screenshot of your own work.

Record the source and license when the image is not fully original.

Possible record:

```text
File: example-image.png
Creator: ...
Source: ...
License or permission: ...
Date added: ...
```

---

## 11. Image Quality Rules

Use:

- PNG for diagrams and screenshots
- SVG for simple logos only when the SVG is safe and original
- JPG or WebP for photographic banner images

Avoid:

- Very blurry images
- Tiny text
- Huge files without need
- Cropped diagrams
- Different naming styles
- Spaces and random symbols in filenames

Recommended naming style:

```text
lowercase-words-separated-by-hyphens.png
```

---

## 12. Asset Approval Status

Each asset can be tracked as:

```text
Draft
Needs review
Approved for GitHub
Replace later
Archived
```

Only approved public assets should be linked from the main README.

---

## 13. Recommended Upload Order

Start with only these files:

1. `ai-future-lab-banner.png`
2. `01-master-overview.png`
3. `02-human-input-ai-understanding.png`
4. `03-ai-core-architecture.png`
5. `11-final-integrated-architecture.png`
6. The remaining workflow images
7. Project logo
8. Social preview

This order gives visitors the highest-value visual explanation first.

---

## 14. How the Images Will Be Used

Example Markdown:

```markdown
![AI Future Lab Banner](assets/branding/ai-future-lab-banner.png)
```

Workflow example:

```markdown
![Master Overview](assets/workflows/01-master-overview.png)
```

Do not add the link to the main README until the image has actually been uploaded under the correct path.

---

## 15. Asset Review Questions

Before approving an asset, ask:

- Does it help someone understand the project?
- Is it original or properly licensed?
- Is the text readable?
- Is the content true?
- Does it reveal anything private?
- Does it falsely suggest that the complete platform works?
- Does it match the project’s visual identity?
- Is the filename organized?

---

## 16. What You Should Add Now

Your current asset task is simple:

1. Export the **Master Overview** workflow as PNG.
2. Rename it `01-master-overview.png`.
3. Check it for private information.
4. Upload it to `assets/workflows/`.
5. Export the next workflows one by one.
6. Create the banner after the workflow exports.

You do not need to add engine screenshots now because the engines are deferred.

---

# الدليل بالعربية

## 1. ما هو مجلد `assets`؟

هو مجلد الصور والتصاميم الخاصة بالمشروع.

ليس برنامجًا ولا يحتاج إلى برمجة.

ضع بداخله:

- صورة رئيسية للمشروع
- الشعار
- صور الـworkflows
- مخططات النظام
- لقطات شاشة آمنة
- صورة مشاركة للمشروع

---

## 2. ترتيب المجلدات المقترح

```text
assets/
├── branding/     الشعار والصورة الرئيسية
├── workflows/    صور مسارات العمل
├── diagrams/     مخططات إضافية
├── screenshots/  لقطات شاشة حقيقية وآمنة
└── social/       صور مشاركة المشروع
```

لا تحتاج إلى إنشاء كل شيء الآن.

---

## 3. أول شيء تضيفه

صدّر صورة **Master Overview** من Whimsical.

الخطوات:

1. افتح الـworkflow.
2. تأكد أن كل العناصر ظاهرة.
3. احذف أي معلومات خاصة.
4. اختر Export.
5. اختر PNG بجودة عالية.
6. افتح الصورة وتأكد أن الكلام واضح.
7. غيّر الاسم إلى:

```text
01-master-overview.png
```

8. ارفعها داخل:

```text
assets/workflows/
```

---

## 4. أسماء صور الـworkflows

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

لا تغير الأسماء عشوائيًا، لأن الترتيب يساعد الناس على فهم المشروع.

---

## 5. الصورة الرئيسية

بعد صور الـworkflows، أنشئ صورة عريضة مكتوب فيها:

```text
AI FUTURE LAB
From Human Ideas to Intelligent Cities
```

اسم الملف:

```text
assets/branding/ai-future-lab-banner.png
```

لا تضع شعارات حكومية أو شعارات شركات بدون إذن.

---

## 6. ماذا لا ترفع؟

لا ترفع:

- رقم الهاتف
- البريد الخاص
- عنوان المنزل
- معلومات المدرسة
- عمرك الدقيق
- صور الهوية
- كلمات المرور
- مفاتيح API
- خرائط سرية
- روابط خاصة
- صورًا من الإنترنت بلا ترخيص
- صورة واجهة مزيفة وتقول إنها منصة تعمل

---

## 7. راجع كل صورة

اسأل نفسك:

- هل الصورة مفيدة؟
- هل الكلام واضح؟
- هل أملك حق استخدامها؟
- هل فيها معلومات خاصة؟
- هل توحي بشكل غير صحيح أن المشروع مكتمل؟
- هل اسم الملف مرتب؟

---

## 8. مهمتك الحالية

مهمتك الآن ليست ملء المجلد بكل شيء.

المطلوب فقط:

1. صورة Master Overview.
2. بقية صور الـworkflows.
3. صورة رئيسية للمشروع.
4. شعار لاحقًا إن رغبت.

لا تحتاج إلى صور Godot أو Unity أو Unreal الآن، لأن استخدام المحركات مؤجل.
