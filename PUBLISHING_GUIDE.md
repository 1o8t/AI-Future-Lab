# AI Future Lab — GitHub Publishing and Maintenance Guide

**English | [العربية](PUBLISHING_GUIDE_AR.md)**

This guide explains how to maintain the existing public AI Future Lab repository safely, clearly, and honestly.

Repository:

```text
https://github.com/1o8t/AI-Future-Lab
```

The repository already exists. Do not create another repository unless a separate approved version is required.

---

## 1. Current Project Stage

AI Future Lab currently includes:

- Project vision and problem definition
- Proposed system architecture
- English and Arabic documentation
- Eleven Whimsical workflow boards
- Eleven exported workflow PNG images
- AI model, RAG, guardrail, and ModelOps specifications
- Security, governance, permission, and collaboration policies
- Deferred educational visualization references for Godot, Unity, and Unreal Engine

It is not currently:

- A completed government platform
- A production commercial product
- A professionally approved urban-planning system
- A live GIS or digital-twin platform
- A verified professional simulation system

Use the label **concept architecture** unless a real tested implementation is added later.

---

## 2. Current Assets Structure

The visual-assets area is intentionally simple:

```text
assets/
├── README.md
└── workflows/
    ├── README.md
    ├── 01-master-overview.png
    ├── 02-human-input-ai-understanding.png
    ├── 03-ai-core-architecture.png
    ├── 04-urban-planning-digital-twin.png
    ├── 05-city-generation-simulation.png
    ├── 06-results-explainability.png
    ├── 07-errors-recovery.png
    ├── 08-security-apis-monitoring.png
    ├── 09-learning-optimization.png
    ├── 10-deployment-operations.png
    └── 11-final-integrated-architecture.png
```

No branding, banner, logo, social-media, screenshot, or extra diagram folders are currently required.

Do not recreate removed folders unless the project creator makes a new decision later.

---

## 3. Updating a File on GitHub

For a small documentation change:

1. Open the file.
2. Select **Edit this file**.
3. Change only the required section.
4. Review the Preview tab.
5. Write a clear commit message.
6. Commit the change.
7. Reopen the file and confirm the formatting.

Good commit message:

```text
Clarify digital-twin limitations
```

Avoid unclear messages such as:

```text
update
fix
new
```

For a large or risky change, use a branch and Pull Request instead of changing the stable version immediately.

---

## 4. English and Arabic Documentation

English documentation is stored in:

```text
docs/
```

Arabic documentation is stored in:

```text
docs/ar/
```

When changing an important fact, status, number, workflow name, or limitation, review both language versions.

Useful indexes:

- [English Documentation Index](docs/README.md)
- [Arabic Documentation Index](docs/ar/README.md)
- [Complete Arabic Documentation](docs/ar/COMPLETE_DOCUMENTATION.md)

Do not allow one language to claim that a feature works while the other describes it as conceptual.

---

## 5. Workflow Images

All workflow images belong only inside:

```text
assets/workflows/
```

Required names:

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

Before replacing an image:

1. Open the source Whimsical board.
2. Confirm the complete workflow is visible.
3. Remove private comments, account details, and notifications.
4. Export a high-quality PNG.
5. Confirm all text and connectors are readable.
6. Use the exact approved filename.
7. Upload it inside `assets/workflows/`.
8. Open the related documentation and confirm the image displays.

The workflow images are embedded in:

- `docs/05-workflow-library.md`
- `docs/ar/05-workflow-library.md`

---

## 6. Adding Images to Markdown

From a file inside `docs/`:

```markdown
![Master Overview](../assets/workflows/01-master-overview.png)
```

From a file inside `docs/ar/`:

```markdown
![النظرة العامة](../../assets/workflows/01-master-overview.png)
```

Before committing, confirm that the target file actually exists and that capitalization matches exactly.

---

## 7. GitHub Issues and Collaboration

The repository includes public forms for:

- Permission requests
- Collaboration proposals
- Professional feedback

When reviewing a request:

1. Check the public identity or organization.
2. Read the proposed purpose carefully.
3. Do not treat a request as an approved partnership.
4. Do not move immediately to a private phone number or personal email.
5. Do not share confidential files.
6. Use clear written approval when permission is granted.
7. Include a trusted adult or guardian in important official, legal, financial, or commercial discussions when appropriate.

Read:

- [Permission Policy](PERMISSION.md)
- [Contribution Guide](CONTRIBUTING.md)
- [Security Policy](SECURITY.md)

---

## 8. Privacy and Personal Safety

Do not publish:

- Exact age
- School name or class
- Home address
- Phone number
- Private email
- Daily location
- Personal schedule
- Identification documents
- Passwords
- API keys or access tokens
- Confidential company or government files

Use a public GitHub identity and project Issues for initial professional contact.

Review every uploaded image for personal information before committing it.

---

## 9. Honest Project Status

Use clear status labels:

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

Examples:

- A written idea is **Concept**.
- A completed architecture document is **Documented** or **Designed**.
- Code that has not been run is **Starter code**.
- Code run once is not automatically production-ready.
- A professional product requires repeated testing, security review, monitoring, and approved users.

Never present a concept image as a working application.

---

## 10. Engine Examples

Godot, Unity, and Unreal Engine files are deferred educational references.

Current rules:

- The engines do not need to be installed now.
- The examples have not been verified in their editors here.
- They are not the AI Future Lab platform.
- They must not be used as evidence that the complete system works.
- Select only one engine later if a real visualization requirement appears.

See [TEST_STATUS.md](TEST_STATUS.md) for the exact test status.

---

## 11. Adding Future Software

When real application code is added:

- Document the required software versions.
- Add safe setup instructions.
- Use `.env.example` without real secrets.
- Keep real `.env` files outside Git.
- Add input validation and error handling.
- Add tests.
- Record known limitations.
- Separate development, staging, and production.
- Do not claim professional planning accuracy without expert evaluation.

---

## 12. Final Check Before Every Public Update

Confirm:

- The file is in the correct folder.
- Internal links open.
- Arabic and English status statements agree.
- Workflow image paths are correct.
- No private information is visible.
- No secret or credential is included.
- No government or organization endorsement is implied.
- Conceptual work is not described as tested software.
- The commit message clearly explains the change.

The repository should remain simple, truthful, safe, and easy for a professional visitor to understand.
