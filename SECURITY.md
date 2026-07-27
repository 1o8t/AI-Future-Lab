# Security Policy | سياسة الأمان

**English | [العربية](#السياسة-بالعربية)**

AI Future Lab is currently a public concept, architecture, documentation, and future-development repository. It is not a deployed production platform and does not currently process real city, government, company, or personal data.

Even at the concept stage, the repository should follow safe habits so future work does not accidentally expose private information or create unsafe development practices.

---

# English Policy

## 1. Security Scope

This policy applies to:

- Repository files
- Documentation
- Starter engine code
- Future web applications
- Future APIs
- Future AI integrations
- Future databases
- Uploaded project assets
- GitHub Issues and Pull Requests

The current repository does not claim production-grade security. Any future live platform would require professional security review, testing, monitoring, privacy controls, and incident-response procedures.

---

## 2. Information That Must Never Be Committed

Never upload or commit:

- Passwords
- API keys
- Access tokens
- Database passwords
- Private encryption keys
- Authentication cookies
- Cloud credentials
- Government credentials
- Company credentials
- Personal identification documents
- Home address
- Phone number
- School information
- Private family information
- Confidential government data
- Confidential company data
- Security-sensitive infrastructure details
- Private project links
- Unapproved datasets

Example unsafe content:

```text
OPENAI_API_KEY=real-secret-key
DATABASE_URL=postgres://user:password@server/database
PRIVATE_TOKEN=real-token
```

These values must never appear in a public repository.

---

## 3. Environment Variables

Future applications should use environment variables for secrets.

Example safe repository file:

```text
.env.example
```

Example contents:

```text
AI_PROVIDER_API_KEY=replace-with-your-own-key
DATABASE_URL=replace-with-your-database-url
```

The real `.env` file must remain outside Git tracking. The existing `.gitignore` should continue to block `.env` files.

Important rules:

- Never place a real secret inside `.env.example`.
- Never include a secret in a screenshot.
- Never paste a secret into a GitHub Issue.
- Never send a secret to an AI model unnecessarily.
- Rotate a secret immediately when accidental exposure occurs.

---

## 4. Personal Safety and Privacy

The public repository should not contain:

- Exact age
- School name or class
- Home or daily location
- Personal phone number
- Private email address intended for family or school use
- Identity documents
- Personal schedules
- Family names or contact details

For professional interest, use public GitHub Issues or a future project-only contact method approved by a parent or guardian. Sensitive discussions should move to an approved private channel.

---

## 5. Data Classification

Future information should be classified before use.

### Public

Information approved for public release.

Examples:

- Public README files
- Public diagrams
- Open datasets with clear licenses

### Internal

Information intended for an authorized project team.

Examples:

- Draft planning notes
- Internal comments
- Non-public prototype results

### Confidential

Information requiring strong access control.

Examples:

- Commercial project documents
- Private development information
- Non-public infrastructure information

### Restricted

Information requiring the highest protection.

Examples:

- Personal identification
- Credentials
- Critical security information
- Legally protected information

Confidential or restricted information should not enter an early public prototype.

---

## 6. Safe Use of AI Services

Before sending information to an AI provider, a future system should check:

- Is the user authorized to use the information?
- Is the provider approved?
- Is the information necessary for the task?
- Can personal or sensitive fields be removed?
- Is retention behavior understood?
- Is the data allowed to leave the organization?

The model should receive the minimum necessary context.

Do not send:

- Credentials
- Private identity data
- Confidential project files without authorization
- Restricted infrastructure data
- Data from another project

---

## 7. Secure File Uploads

A future upload system should:

- Allow only approved file types.
- Enforce size limits.
- Scan files for malware.
- Validate file content, not only extension.
- Store files outside public directories.
- Generate safe internal filenames.
- Check user permission.
- Record the uploader and date.
- Remove unnecessary metadata where appropriate.

A filename such as `map.png` does not guarantee that a file is a safe image.

---

## 8. Authentication and Authorization

A future platform should distinguish:

- Authentication: Who is the user?
- Authorization: What is the user allowed to do?

Possible roles:

- Viewer
- Editor
- Planner
- Engineer
- Reviewer
- Approver
- Administrator

Every protected action should check permission on the server. Hiding a button in the browser is not sufficient security.

---

## 9. API Security

Future APIs should use:

- Authentication
- Role and project authorization
- Input validation
- Output filtering
- Rate limiting
- Versioning
- Request size limits
- Logging
- Timeout controls
- Safe error messages

Avoid returning:

- Stack traces
- Database details
- Internal paths
- Secret configuration
- Information from another user’s project

---

## 10. Database Security

Future database rules:

- Use separate development, staging, and production environments.
- Use least-privilege accounts.
- Encrypt sensitive connections.
- Back up approved project versions.
- Test backup restoration.
- Use migrations with rollback plans.
- Record important changes.
- Prevent one project from reading another project’s private data.

---

## 11. Geospatial and City Data Security

Not all city information is harmless.

Potentially sensitive information may include:

- Critical infrastructure
- Security facilities
- Emergency systems
- Detailed private development plans
- Restricted property information
- High-resolution operational data

Future data integrations require:

- Clear ownership
- Permission
- Classification
- Access limits
- Export controls
- Audit history

---

## 12. AI Output Security

AI output should be treated as untrusted until validated.

Checks may include:

- Structured schema validation
- Maximum length
- Allowed values
- Number ranges
- Source requirements
- Unsafe instruction filtering
- Project ID validation
- Human review for important actions

An AI model should never directly:

- Approve a plan
- Change permissions
- Reveal secrets
- Delete approved project data
- Execute unrestricted code
- Publish private documents

---

## 13. Dependency Security

Future software should:

- Use supported package versions.
- Review dependency licenses.
- Remove unused packages.
- Run dependency-security checks.
- Update carefully.
- Test before release.
- Avoid copying unknown code from random sources.

A popular package can still contain vulnerabilities or become abandoned.

---

## 14. Branch and Review Protection

Recommended future practices:

- Use a development branch for large changes.
- Review pull requests before merging.
- Require tests for production code.
- Avoid direct unreviewed changes to stable releases.
- Use clear commit messages.
- Keep important releases tagged and documented.

For the current early repository, direct documentation changes are acceptable, but future production work should use stronger review controls.

---

## 15. Logging and Monitoring

Future monitoring should record:

- Authentication events
- Permission changes
- File uploads
- AI model failures
- API errors
- Validation failures
- Project approvals
- Security alerts
- Software releases
- Rollbacks

Logs should not store unnecessary secrets or complete private prompts.

---

## 16. Backup and Recovery

A future system should back up:

- Approved city briefs
- Digital-twin versions
- Decision evidence
- Audit records
- Configuration

A backup is useful only when restoration has been tested.

---

## 17. Incident Response

When a security problem occurs:

```text
Detect
→ contain
→ protect users and approved data
→ classify severity
→ collect evidence
→ revoke exposed access
→ repair
→ validate recovery
→ document lessons
```

Examples:

- Exposed API key
- Unauthorized project access
- Malicious upload
- Data corruption
- Leaked private screenshot
- Incorrect permission

### Exposed secret response

1. Revoke or rotate the secret immediately.
2. Remove the secret from the current file.
3. Treat Git history as exposed; deleting one line is not enough.
4. Review logs for misuse.
5. Replace affected credentials.
6. Document the incident without republishing the secret.

---

## 18. Reporting a Security Concern

Do not publish passwords, tokens, private data, or full exploit instructions in a public Issue.

Until a dedicated private reporting channel is configured:

1. Open a minimal GitHub Issue titled **Security Contact Request**.
2. Do not include sensitive technical details.
3. State only that a private security discussion is required.
4. Wait for an approved private contact method.

Ordinary documentation mistakes that are not security-sensitive can be reported through a normal GitHub Issue.

---

## 19. Current Security Status

Current repository status:

- Public documentation repository
- No live production backend
- No production database
- No real AI service key
- No user accounts
- No government integration
- No confidential dataset should be present

Therefore, the most important current security tasks are:

- Keep secrets out.
- Keep personal information out.
- Upload only approved public images and documents.
- Review screenshots before publishing.
- Describe future security honestly.

---

# السياسة بالعربية

## 1. نطاق الأمان

ينطبق هذا الملف على:

- ملفات المستودع
- التوثيق
- الأكواد التجريبية
- التطبيقات المستقبلية
- واجهات API المستقبلية
- قواعد البيانات المستقبلية
- خدمات الذكاء الاصطناعي
- الصور والملفات المرفوعة
- Issues وPull Requests

المشروع حاليًا ليس منصة إنتاجية، لذلك لا ندّعي وجود حماية إنتاجية كاملة. أي منصة حقيقية مستقبلًا تحتاج إلى مراجعة أمنية احترافية واختبارات ومراقبة وخطة استجابة للحوادث.

---

## 2. معلومات ممنوع رفعها

لا ترفع أبدًا:

- كلمات المرور
- مفاتيح API
- رموز الدخول
- كلمات مرور قواعد البيانات
- المفاتيح الخاصة
- بيانات تسجيل الدخول
- معلومات الهوية
- عنوان المنزل
- رقم الهاتف
- معلومات المدرسة
- بيانات حكومية سرية
- بيانات شركات سرية
- تفاصيل حساسة عن البنية التحتية
- روابط مشاريع خاصة
- ملفات لا تملك إذنًا لنشرها

---

## 3. المتغيرات السرية

في التطبيقات المستقبلية، يتم حفظ الأسرار في متغيرات البيئة وليس داخل الكود.

ملف المثال يمكن أن يحتوي:

```text
AI_PROVIDER_API_KEY=ضع-مفتاحك-هنا
DATABASE_URL=ضع-رابط-قاعدة-البيانات-هنا
```

لكن لا يوضع المفتاح الحقيقي داخل GitHub.

قواعد مهمة:

- لا تضع السر في صورة.
- لا تضعه داخل Issue.
- لا ترسله إلى نموذج ذكاء اصطناعي بلا حاجة.
- إذا انكشف، ألغِه وغيّره فورًا.

---

## 4. الخصوصية الشخصية

لا تنشر:

- عمرك الدقيق
- اسم المدرسة أو الصف
- عنوان المنزل
- موقعك اليومي
- رقم الهاتف الشخصي
- وثائق الهوية
- معلومات العائلة

للتواصل المهني، استخدم GitHub Issues أو وسيلة مشروع مستقلة يوافق عليها ولي الأمر.

---

## 5. تصنيف البيانات

### عامة

مسموح نشرها للجميع.

### داخلية

مخصصة لفريق مصرح له.

### سرية

تحتاج صلاحيات قوية.

### مقيدة

مثل كلمات المرور والهوية والمعلومات الأمنية الحساسة.

لا تستخدم البيانات السرية أو المقيدة في نموذج أولي عام.

---

## 6. استخدام خدمات الذكاء الاصطناعي بأمان

قبل إرسال أي معلومات إلى نموذج خارجي، يجب التأكد من:

- وجود إذن لاستخدامها.
- أن الخدمة معتمدة.
- أن المعلومات ضرورية.
- إمكانية إزالة البيانات الشخصية.
- فهم طريقة حفظ الخدمة للبيانات.

لا ترسل كلمات مرور أو وثائق خاصة أو بيانات مشروع سري دون إذن واضح.

---

## 7. رفع الملفات

النظام المستقبلي يجب أن:

- يسمح بأنواع ملفات محددة.
- يحدد الحجم.
- يفحص الملفات.
- يتحقق من المحتوى.
- يتحقق من صلاحية المستخدم.
- يسجل مصدر الملف.
- يمنع الوصول العام غير المقصود.

---

## 8. الهوية والصلاحيات

التحقق من الهوية يجيب: من هو المستخدم؟

الصلاحيات تجيب: ماذا يسمح له أن يفعل؟

إخفاء زر في الشاشة لا يكفي؛ الخادم نفسه يجب أن يتحقق من الصلاحية.

---

## 9. أمان واجهات API

يجب أن تشمل:

- تسجيل الدخول
- الصلاحيات
- التحقق من المدخلات
- تحديد عدد الطلبات
- تسجيل الأحداث
- إخفاء تفاصيل الأخطاء الداخلية
- منع الوصول إلى مشاريع الآخرين

---

## 10. حماية بيانات المدن

بعض بيانات المدن والبنية التحتية قد تكون حساسة. لذلك يلزم:

- تحديد المالك
- الحصول على الإذن
- تحديد مستوى السرية
- تقييد التصدير
- تسجيل من استخدم البيانات

---

## 11. مخرجات الذكاء الاصطناعي

يتم التعامل معها كمخرجات غير موثوقة حتى تمر بالتحقق.

لا يسمح للنموذج مباشرةً بأن:

- يعتمد خطة
- يغير صلاحيات
- يكشف أسرارًا
- يحذف نسخة معتمدة
- ينشر ملفًا سريًا
- يشغّل كودًا غير محدود

---

## 12. الحوادث الأمنية

المسار الصحيح:

```text
اكتشاف المشكلة
→ إيقاف الضرر
→ حماية المستخدمين والبيانات
→ تصنيف الخطورة
→ إلغاء الوصول المكشوف
→ الإصلاح
→ اختبار الاستعادة
→ توثيق الدروس
```

---

## 13. الإبلاغ عن مشكلة أمنية

لا تنشر تفاصيل حساسة في Issue عام.

إلى أن يتم إنشاء قناة خاصة:

1. افتح Issue بسيط بعنوان `Security Contact Request`.
2. لا تضع تفاصيل الاستغلال أو الأسرار.
3. اذكر فقط أنك تحتاج وسيلة تواصل خاصة.
4. انتظر تحديد قناة آمنة.

---

## 14. الحالة الحالية

المستودع حاليًا للتوثيق والمفهوم، ولا يحتوي على نظام إنتاجي أو قاعدة بيانات حقيقية أو تكامل حكومي.

أهم قواعد الأمان الآن:

- لا ترفع أسرارًا.
- لا ترفع معلومات شخصية.
- راجع الصور قبل نشرها.
- لا تستخدم ملفات لا تملك إذنًا لنشرها.
- وضّح أن أنظمة الأمان المستقبلية ما زالت ضمن التصميم.
