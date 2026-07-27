# 08 — Safety and Governance

**English | [العربية](ar/08-safety-and-governance.md)**

AI Future Lab is intended as a decision-support concept. It should help people organize information, compare options, test scenarios, and explain recommendations. It must not replace qualified planners, engineers, architects, legal reviewers, emergency specialists, or responsible government authorities.

This document explains the proposed safety rules, approval structure, data responsibilities, fairness checks, AI controls, incident handling, and governance principles for a future implementation.

---

## 1. Human Responsibility

The central governance principle is:

> **AI may support a decision, but responsible humans remain accountable for important planning, engineering, legal, financial, environmental, and public-safety decisions.**

The system should clearly distinguish between:

- User idea
- AI interpretation
- Unverified assumption
- AI-generated candidate
- Model or simulation result
- Professional review
- Human-approved plan version
- Government or legal approval

These labels must never be treated as interchangeable.

---

## 2. Decision Classification

A future platform should classify actions by impact.

### Low-impact actions

Examples:

- Reformatting text
- Summarizing an approved brief
- Translating an explanation
- Changing map display settings

These may require normal validation but not special approval.

### Medium-impact actions

Examples:

- Adding a draft requirement
- Generating a candidate land-use strategy
- Creating a basic accessibility comparison
- Suggesting an alternative service location

These should remain drafts and require user review.

### High-impact actions

Examples:

- Recommendations affecting emergency access
- Critical infrastructure
- Public safety
- Protected land
- Housing access
- Environmental harm
- Major financial commitments
- Legal or policy compliance

These require specialist review and responsible authority approval. The AI must not present them as automatically approved.

---

## 3. Required Safeguards

A production system should include:

- Clear AI labels
- Draft and approved status
- Human approval gates
- Assumption register
- Source and evidence links
- Uncertainty notices
- Version history
- Audit trail
- Role-based access
- Data minimization
- Secret management
- Input and file validation
- Safe retry limits
- Protected approved state
- Rollback
- Monitoring and alerting
- Incident response
- Model and prompt version records

---

## 4. Governance Roles

A future project may use roles such as:

### Viewer

Can read approved information but cannot change it.

### Contributor

Can suggest edits, upload authorized documents, or create draft comments.

### Planner

Can review planning assumptions and candidates.

### Engineer

Can review discipline-specific assumptions and model limitations.

### Data steward

Controls data quality, source metadata, permissions, and freshness.

### Reviewer

Checks a version and records comments or requested changes.

### Approver

Accepts or rejects an important project version.

### Security administrator

Manages access, security events, secrets, and incident actions.

### Model administrator

Manages approved AI models, prompts, evaluations, and rollback targets.

One user should not automatically receive every permission.

---

## 5. Approval Gates

Important stages should have explicit approval gates.

### Gate 1 — City brief approval

The user confirms that goals, constraints, priorities, and assumptions are correct.

### Gate 2 — Data approval

A data steward confirms that important sources are authorized and suitable.

### Gate 3 — Candidate review

A planner reviews generated planning alternatives.

### Gate 4 — Specialist validation

Engineers or domain specialists review calculations that affect their disciplines.

### Gate 5 — Scenario acceptance

A reviewer confirms that the scenario model and assumptions are appropriate.

### Gate 6 — Plan-version approval

An authorized human approves a new digital-twin version.

### Gate 7 — Release approval

Security, quality, and model checks are completed before a software update reaches users.

---

## 6. Data Classification

The platform should classify information before storing or sharing it.

### Public

Information intended for public viewing.

Examples:

- Public project documentation
- Open data
- Published policies

### Internal

Information intended for an authorized team.

Examples:

- Draft planning notes
- Internal comments
- Non-public calculations

### Confidential

Sensitive organization or project information.

Examples:

- Commercial agreements
- Detailed infrastructure information
- Private project documents

### Restricted

Information requiring the highest level of control.

Examples may include:

- Personal identification
- Security-sensitive infrastructure details
- Legally protected information
- Credentials or secret keys

The system should not send confidential or restricted information to an external AI service unless the use is authorized, secured, and governed.

---

## 7. Data-Minimization Rules

- Collect only data required for the current task.
- Avoid asking for personal information when it is unnecessary.
- Do not place passwords, API keys, or credentials in prompts or repositories.
- Remove unnecessary identifiers from datasets.
- Limit how long temporary data is retained.
- Restrict access by role and project.
- Record why sensitive data is needed.
- Support secure deletion where required.

---

## 8. Source and Evidence Governance

Every important source should record:

- Title
- Publisher or owner
- Date
- Version
- Geographic coverage
- Access permission
- Reliability
- Known limitations
- Update schedule

The system should distinguish:

```text
Confirmed source data
≠ user statement
≠ AI assumption
≠ model estimate
≠ approved decision
```

A recommendation must not hide the type of information it used.

---

## 9. AI Hallucination Controls

AI models can produce incorrect but convincing text. Proposed controls include:

- Retrieval from approved sources
- Structured output schemas
- Required source fields
- Numerical range checks
- Policy-rule validation
- Cross-checking with specialist tools
- Consistency checks across revisions
- Human review
- Rejection when grounding is insufficient

The system should say:

> “The available data is insufficient to produce a dependable recommendation.”

instead of inventing an answer.

---

## 10. Assumption Governance

Every assumption should include:

- Assumption statement
- Reason
- Source if available
- Confidence
- Owner
- Date
- Affected calculations
- Approval status
- Expiration or review date

Example:

```text
Assumption: Average household size is 3.5 people.
Status: Draft
Reason: No approved population profile was provided.
Affected outputs: Dwelling count, school demand, water demand.
Required reviewer: Demographic or planning specialist.
```

If an assumption changes, affected results should be recalculated.

---

## 11. Uncertainty Communication

The platform should show uncertainty using understandable language.

Possible labels:

- Confirmed
- High confidence
- Moderate confidence
- Low confidence
- Assumption
- Missing data
- Requires specialist review
- Not calculated

The system should avoid false precision. A result such as `37.428%` may look accurate even when its inputs are rough estimates.

---

## 12. Fairness and Inclusion

Optimization should not silently improve outcomes for one group while increasing burden for another.

Plans should be reviewed for:

- Access to schools
- Access to healthcare
- Access to public transport
- Walking distance
- Travel time
- Housing variety
- Accessibility for people of determination
- Public-space distribution
- Heat and environmental exposure
- Infrastructure reliability
- Emergency access

## Fairness questions

- Are some neighborhoods consistently farther from services?
- Does one option depend heavily on car ownership?
- Are parks concentrated in only part of the city?
- Are vulnerable communities exposed to more risk?
- Does the plan provide accessible routes and facilities?
- Are benefits and burdens distributed transparently?

Fairness does not mean every area must be identical. It means differences should be visible, justified, and reviewed.

---

## 13. High-Risk Planning Areas

Extra caution is required when recommendations affect:

- Emergency access
- Fire and rescue routes
- Hospitals and healthcare capacity
- Schools and child safety
- Critical roads and transport
- Water, energy, and communications
- Flood, heat, or climate risk
- Protected land
- Housing access and displacement
- Environmental impact
- Personal or population data
- Legal and regulatory compliance

For these areas, early AI outputs should be treated as questions or candidate ideas, not final instructions.

---

## 14. Explainability Requirements

Every major recommendation should include:

1. What is recommended?
2. Why is it recommended?
3. Which requirement does it support?
4. What data was used?
5. What assumptions were used?
6. Which model or tool produced the result?
7. Which alternatives were considered?
8. What trade-offs exist?
9. What uncertainty remains?
10. Who must approve it?

A recommendation without these elements should not pass a high-impact approval gate.

---

## 15. Model Governance

Every approved model should have a registry record containing:

- Model name
- Version
- Provider
- Intended tasks
- Prohibited tasks
- Input restrictions
- Prompt version
- Evaluation results
- Known limitations
- Cost and latency profile
- Approval status
- Release date
- Rollback version

## Model change process

```text
New model or prompt
→ offline test
→ evaluation dataset
→ safety review
→ comparison with current version
→ human approval
→ limited release
→ monitoring
→ full approval or rollback
```

No model should automatically replace the approved production model.

---

## 16. Evaluation Requirements

AI and planning outputs should be tested for:

- Requirement coverage
- Factual grounding
- Correct structured format
- Numerical consistency
- Spatial validity
- Policy compliance
- Safety
- Fairness
- Explainability
- Consistency across versions
- Reliability during failure
- Cost and latency

Evaluation should include Arabic and English examples.

---

## 17. Security Governance

Security should cover:

- Authentication
- Authorization
- Session protection
- Encryption
- Secret management
- Secure file upload
- API validation
- Rate limiting
- Dependency updates
- Audit logs
- Monitoring
- Backup and recovery
- Incident response

Security events should be classified by severity and handled through documented procedures.

---

## 18. Incident Response

Example incident categories:

- Exposed credential
- Unauthorized data access
- Incorrect permission
- Malicious file upload
- Data corruption
- Major AI error
- Unavailable service
- Failed deployment

## Response flow

```text
Detect incident
→ protect users and approved data
→ stop affected operation
→ classify severity
→ collect evidence
→ notify responsible people
→ repair or contain
→ validate recovery
→ document lessons
→ update controls
```

The priority is protection and recovery, not hiding the incident.

---

## 19. Rollback Policy

Rollback should be available for:

- Project versions
- Model versions
- Prompt versions
- Policy-rule versions
- Software releases
- Database migrations

A rollback record should include:

- Previous version
- Failed version
- Reason
- Time
- Responsible approver
- Data impact
- Validation result

---

## 20. Audit Trail

Important events should be recorded:

- Login and access changes
- Data upload
- Requirement change
- Assumption approval
- Candidate generation
- Simulation run
- Model and prompt version
- Human review
- Approval or rejection
- Export
- Security event
- Rollback

Audit logs should be protected from normal editing.

---

## 21. Public Communication Rules

Public project pages should:

- State the current project stage.
- Avoid claiming government approval.
- Avoid claiming professional accuracy before testing.
- Explain that engine code is optional future visualization work.
- Avoid publishing private contact details.
- Avoid exposing confidential project documents.
- Use “proposed,” “planned,” or “future” for unimplemented capabilities.

---

## 22. Safety for a Young Project Creator

The public repository should not include:

- Exact age
- School name or class
- Home address
- Phone number
- Personal identification
- Daily location
- Private family information
- Passwords or API keys

Professional contact should initially use GitHub Issues or another parent/guardian-approved method rather than public personal details.

---

## 23. Responsible Learning Loop

```text
Feedback
→ verify feedback quality
→ remove unauthorized data
→ analyze failure or opportunity
→ create controlled experiment
→ sandbox test
→ evaluate safety and fairness
→ human approval
→ limited release
→ monitor
→ approve or rollback
```

The platform should not learn from every outcome automatically because users may be wrong, biased, unauthorized, or working with incomplete information.

---

## 24. Governance Checklist for Every Major Feature

Before a major feature is considered ready, ask:

- What decision does it support?
- What data does it use?
- Who owns the data?
- What can go wrong?
- What assumptions exist?
- How is uncertainty shown?
- What validation is performed?
- Is human approval required?
- Is the action logged?
- Can it be rolled back?
- Does it work in Arabic and English?
- Could it create unfair outcomes?
- Could it expose sensitive information?

---

## 25. Current Status

The safety and governance structure is documented as a design. The current repository does not contain a production security program, legal approval system, or professional governance body.

The correct current position is:

> The project recognizes that AI-supported urban planning requires strong human control, evidence, safety, privacy, fairness, and professional review. These controls must be implemented and tested before real high-impact use.
