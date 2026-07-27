# 05 — Workflow Library

**English | [العربية](ar/05-workflow-library.md)**

AI Future Lab is documented through a connected library of visual workflows. Each workflow explains one major part of the proposed system. Together, they show how a human idea could move through AI understanding, urban planning, digital-twin creation, browser visualization, simulation, explainability, security, recovery, controlled learning, and production operations.

> **Current status:** These images describe a proposed architecture and project concept. They do not prove that every service shown has already been implemented or tested.

---

## How to Read the Workflow Library

For every workflow, ask:

1. What information enters the workflow?
2. What decisions or operations happen inside it?
3. What output is produced?
4. What can fail?
5. Who reviews or approves the output?

A later workflow must not silently invent information that an earlier workflow did not confirm. Human approval remains important whenever the system creates, changes, or recommends a major planning decision.

---

## Workflow Color System

- **Blue:** AI and system processes
- **Mint or green:** execution and successful processing
- **Orange:** decisions and branching points
- **Yellow:** review, retry, clarification, or waiting
- **Red:** errors, rejection, rollback, or critical warnings
- **Pink or purple:** AI engine, runtime, data intelligence, user experience, or operations
- **Gray:** approved states, milestones, final outputs, or explanatory notes

Labels remain the source of meaning. Color is used only to make large workflows easier to scan.

---

# Workflow 1 — Master Overview

![AI Future Lab Master Overview](../assets/workflows/01-master-overview.png)

**Board:** [Open Master Overview in Whimsical](https://whimsical.com/6EdTLepAE6eS55uTTtqcny)

## Purpose

Show the complete lifecycle of AI Future Lab on one connected board. This is the starting map for understanding the rest of the architecture.

## Main Flow

```text
Human idea
→ AI understanding and clarification
→ approved city brief
→ AI-assisted urban planning
→ digital-twin data
→ browser visualization
→ scenario simulation
→ explainable results
→ human review and approval
→ controlled deployment and learning
```

## Main Inputs

- Human city idea
- Text or voice request
- Project files and site information
- User priorities and constraints
- Approved planning policies and data

## Main Outputs

- Approved city brief
- Candidate urban plans
- Versioned digital city state
- Scenario results
- Explanations, warnings, and reports
- Human feedback and revised versions

## Human Control

The system supports human decision-making. It does not independently approve a real city plan. Planners, engineers, reviewers, and authorized organizations remain responsible for final decisions.

## Common Misunderstanding

The Master Overview is not one software function. It is a map connecting multiple proposed services and decision points.

---

# Workflow 2 — Human Input and AI Understanding

![Human Input and AI Understanding](../assets/workflows/02-human-input-ai-understanding.png)

**Board:** [Open Human Input & AI Understanding in Whimsical](https://whimsical.com/8F6utnKkwo8pFn6xxGbTgx)

## Purpose

Convert an unstructured human idea into a clear, structured, and reviewable city brief.

## Possible Inputs

- Text request
- Voice request
- Uploaded documents
- Map location or site boundary
- Previous approved project context
- Population, budget, sustainability, transport, and service priorities

## Internal Process

1. Detect the language.
2. Convert voice to text when required.
3. Identify the user’s main goal.
4. Extract places, quantities, dates, units, and requirements.
5. Separate confirmed facts from assumptions.
6. Identify missing information.
7. Detect contradictions and impossible combinations.
8. Ask focused clarification questions.
9. Show the extracted requirements to the user.
10. Save an approved city-brief version.

## Outputs

- Confirmed requirements
- Assumption list
- Missing-information list
- Conflict list
- Clarification questions
- Approved city brief

## Example

A user might say:

```text
Create a sustainable district for 30,000 residents with schools,
healthcare, public transport, parks, and reduced car dependence.
```

The system should not immediately generate a city. It should first ask about the site, available land, budget range, housing mix, climate requirements, time horizon, and approval authority.

## Failure Cases

- Incorrect voice transcription
- Wrong population or area value
- Missing unit of measurement
- Treating an assumption as a confirmed fact
- Repeating the same clarification question
- Moving forward without user approval

## Approval Gate

The city brief becomes the source of truth only after the user reviews and confirms it.

---

# Workflow 3 — AI Core Architecture

![AI Core Architecture](../assets/workflows/03-ai-core-architecture.png)

**Board:** [Open AI Core Architecture in Whimsical](https://whimsical.com/V9YjzMedP4ibnudKTGNvbo)

## Purpose

Coordinate AI models, specialist tools, memory, evidence, validation, safety controls, and task decisions.

## Main Components

- Context builder
- Conversation and project memory
- Task planner
- Prompt builder
- Model router
- Tool router
- Validation manager
- Decision coordinator
- Evidence collector
- Error manager
- Safety and permission controls

## Inputs

- Approved city brief
- Retrieved knowledge and policies
- Current project version
- User role and permissions
- Previous approved task results

## Process

1. Build only the context needed for the task.
2. Break the request into smaller specialist tasks.
3. Select the correct model or tool for each task.
4. Request structured output rather than uncontrolled free text.
5. Validate schemas, values, evidence, and permissions.
6. Repair safe errors within a limited retry policy.
7. Escalate uncertain or high-impact decisions to a human.
8. Store approved results with traceability.

## Outputs

- Validated tasks
- Tool calls
- Structured results
- Evidence records
- Error and retry records
- Approved information for later layers

## Key Principle

A language model should not pretend to perform every GIS, engineering, legal, environmental, or simulation task. The AI core coordinates specialist services and clearly records their limitations.

## Failure and Recovery

Possible failures include invalid structured output, tool timeout, conflicting results, missing evidence, unauthorized requests, and excessive retry loops. Recovery may include limited retry, safe fallback, human escalation, or return to the last approved state.

---

# Workflow 4 — Urban Planning and Digital Twin

![Urban Planning and Digital Twin](../assets/workflows/04-urban-planning-digital-twin.png)

**Board:** [Open Urban Planning & Digital Twin in Whimsical](https://whimsical.com/Bp31XsuU3761Eo6aJJJz6Z)

## Purpose

Generate planning alternatives, validate them against the approved brief, and store an approved option as a structured and versioned digital city model.

## Planning Areas

- Land use and zoning
- Density and housing
- Districts and neighborhoods
- Roads and public transport
- Walking and cycling
- Schools and healthcare
- Parks and public space
- Energy, water, and waste
- Environmental systems
- Climate resilience
- Development phases

## Inputs

- Approved city brief
- Site and GIS data
- Policies, standards, and restrictions
- User priorities
- Planning assumptions
- Existing infrastructure information

## Planning Process

1. Generate multiple candidate strategies.
2. Check every candidate against the city brief.
3. Calculate basic planning indicators.
4. Identify conflicts, service gaps, and unsupported assumptions.
5. Compare alternatives and trade-offs.
6. Request professional and human review.
7. Convert the approved option into city objects and relationships.
8. Save a new digital-twin version without deleting earlier approved versions.

## Outputs

- Candidate plans
- Validation results
- Comparison table
- Approved plan version
- City objects and spatial relationships
- Traceability links between requirements and decisions

## Digital-Twin Meaning

The digital twin is not only a 3D model. It is a structured, versioned representation of city objects, locations, properties, relationships, assumptions, decisions, and scenario states.

---

# Workflow 5 — Web City Generation and Simulation

![Web City Generation and Simulation](../assets/workflows/05-city-generation-simulation.png)

**Board:** [Open City Generation & Simulation in Whimsical](https://whimsical.com/48bkuxGhVnjNmJqQV4tcye)

## Purpose

Display approved city data in an understandable way and test scenarios before real-world implementation.

## Preferred Product Direction

The main proposed direction is a browser-based planning map because it is easier to access, can display geospatial layers clearly, and does not require a powerful game engine for the first prototype.

## Possible Map Layers

- Site boundary
- Land use and zoning
- Districts
- Roads and public transport
- Schools and healthcare
- Parks and public spaces
- Utilities
- Environmental restrictions
- Development phases

## Possible Simulations

- Population growth
- Transport demand
- Access to services
- School and healthcare capacity
- Energy and water demand
- Climate and heat conditions
- Infrastructure incidents
- Policy or development changes

## Inputs

- Selected digital-twin version
- Scenario definition
- Simulation assumptions
- Selected model and data sources

## Outputs

- Maps
- Metrics
- Changed conditions
- Warnings
- Scenario comparison
- Model limitations and uncertainty

## Important Rule

A visualization is not proof that a plan is correct. Every map, model, or simulation must remain connected to its source data, assumptions, validation status, and limitations.

## Optional Engines

Godot, Unity, and Unreal Engine remain optional future visualization paths. They are not required for the current documentation phase or the first browser-focused prototype.

---

# Workflow 6 — Results and Explainability

![Results and Explainability](../assets/workflows/06-results-explainability.png)

**Board:** [Open Results & Explainability in Whimsical](https://whimsical.com/5ZnfDhpTdQKJFdnQB3xgiH)

## Purpose

Transform technical planning and simulation output into information that decision-makers, professionals, and the public can understand and review.

## Inputs

- Candidate-plan comparisons
- Simulation results
- Validation reports
- Evidence and sources
- Risk records
- Assumptions and uncertainty

## Outputs

- Executive summary
- Technical report
- Maps and charts
- KPI dashboard
- Risk register
- Assumption register
- Recommended actions
- Alternative options

## Every Recommendation Should Explain

1. What is being recommended?
2. Why is it recommended?
3. Which requirement does it support?
4. What evidence was used?
5. Which alternatives were considered?
6. What trade-offs exist?
7. What uncertainty remains?
8. Who must approve the decision?

## Failure Cases

- Recommendation without evidence
- Hidden assumption
- Unclear uncertainty
- Technical language without explanation
- Showing only the preferred option while hiding alternatives
- Presenting estimates as guaranteed results

## Human Review

High-impact planning recommendations must be reviewable, challengeable, and reversible before approval.

---

# Workflow 7 — Errors and Recovery

![Errors and Recovery](../assets/workflows/07-errors-recovery.png)

**Board:** [Open Errors & Recovery in Whimsical](https://whimsical.com/L4WgEGjtVvKZ2kSSLAcfVy)

## Purpose

Protect the last approved project state when a model, tool, dataset, database, integration, or deployment fails.

## Error Categories

- User-input error
- Data-format error
- Missing data
- Model-output error
- Tool timeout
- Validation failure
- Database failure
- Security incident
- Deployment failure

## Recovery Flow

```text
Detect the problem
→ classify severity
→ protect the approved state
→ collect evidence and logs
→ retry only when safe
→ repair or use an approved fallback
→ escalate to a human when required
→ validate recovery
→ record the incident
```

## Outputs

- Error record
- Severity level
- Affected task and version
- Recovery action
- Final status
- Rollback record
- Human-review requirement

## Critical Rule

The system must not continue silently after a serious failure. Uncertain output must not replace an approved project version.

---

# Workflow 8 — Security, APIs and Monitoring

![Security APIs and Monitoring](../assets/workflows/08-security-apis-monitoring.png)

**Board:** [Open Security, APIs & Monitoring in Whimsical](https://whimsical.com/3bt9QRsL4FvkR8RL1BvRhV)

## Purpose

Protect identity, permissions, project data, external integrations, system reliability, and audit history.

## Main Areas

- Authentication
- Authorization
- Role-based access
- Data privacy
- API validation
- Rate limits
- Secret management
- Encryption
- Audit logging
- Monitoring and alerts
- Threat detection
- Backup verification

## Example Roles

- Viewer
- Editor
- Planner
- Engineer
- Reviewer
- Approver
- Administrator

Each role should receive only the permissions required for its work.

## Inputs

- Login events
- API requests
- File uploads
- Service calls
- System logs
- Permission and configuration changes

## Outputs

- Access decision
- Security event
- Audit record
- Alert
- Incident-response action
- Backup or recovery verification

## Privacy Principle

Collect, store, and share only the minimum information required. Private project data must not be reused for learning or public demonstrations without permission.

---

# Workflow 9 — Learning and Autonomous Optimization

![Learning and Autonomous Optimization](../assets/workflows/09-learning-optimization.png)

**Board:** [Open Learning & Autonomous Optimization in Whimsical](https://whimsical.com/SJJ5wWcQCLCSXS4ccNgC1a)

## Purpose

Use approved feedback to improve the system without allowing uncontrolled self-modification.

## Controlled Improvement Process

```text
Approved feedback
→ analysis
→ create a limited experiment
→ sandbox testing
→ compare with the approved version
→ safety and quality review
→ human approval
→ limited release
→ monitoring
→ full approval or rollback
```

## Possible Learning Inputs

- Professional corrections
- Clarification failures
- Repeated missing fields
- Model-evaluation results
- Tool reliability records
- Approved user-experience feedback

## Inputs Requiring Special Caution

- Private project data
- Confidential government or company information
- Biased decisions
- Unverified user claims
- Personal information

## Important Rule

The system should not automatically learn from every user action. Only approved, reviewed, and legally permitted information should enter an improvement dataset.

---

# Workflow 10 — Deployment and Production Operations

![Deployment and Production Operations](../assets/workflows/10-deployment-operations.png)

**Board:** [Open Deployment & Production Operations in Whimsical](https://whimsical.com/3U7GqN6YdcpV3PRddLezDg)

## Purpose

Describe how a tested software version could move safely from development to real production use.

## Environments

- Local development
- Automated testing
- Staging
- Limited pilot
- Production

## Release Process

1. Create a release package.
2. Run automated and manual tests.
3. Run security and permission checks.
4. Deploy to staging.
5. Validate with safe test projects.
6. Obtain approval.
7. Release gradually.
8. Monitor errors, cost, latency, and quality.
9. Roll back when required.

## Operational Areas

- Monitoring and logging
- Backups and restoration
- Capacity scaling
- Service-level objectives
- Maintenance windows
- Incident response
- Model and prompt versioning
- Cost and performance control

## Key Principle

A new AI model, prompt, dataset, or tool must not move directly from an experiment into production without testing, review, version control, and rollback capability.

---

# Workflow 11 — Final Integrated Architecture

![Final Integrated Architecture](../assets/workflows/11-final-integrated-architecture.png)

**Board:** [Open Final Integrated Architecture in Whimsical](https://whimsical.com/Us2JN5AFmp69T3iVanPp4z)

## Purpose

Show how the complete proposed architecture connects across shared data stores, approval gates, security controls, and operational services.

## Connected Layers

- Human interaction
- AI understanding
- AI orchestration
- Planning intelligence
- Knowledge retrieval
- Digital twin
- Browser visualization
- Simulation
- Explainability
- Security
- Error recovery
- Controlled learning
- Deployment and operations

## Shared Stores

- Conversation and project memory
- City knowledge base
- GIS and site database
- Digital-twin database
- Simulation results
- Decision evidence
- Model and configuration registry
- Audit and security logs
- Learning and evaluation data

## Why This Workflow Matters

It demonstrates that AI Future Lab is not one chatbot, one AI model, one map, or one 3D scene. It is a proposed ecosystem of connected services where information must remain structured, validated, traceable, secure, and subject to human approval.

## Final Principle

AI Future Lab does not build the city instead of people. It helps people understand options, test scenarios, explain trade-offs, and make better-informed decisions before real construction.

---

# Additional AI Workflows

The AI-specific workflows are explained in:

[AI Model Workflows](AI_MODEL_WORKFLOWS.md)

They cover:

- AI model and prompt orchestration
- Knowledge retrieval and RAG
- AI evaluation and grounding
- Guardrails and safety checks
- Model monitoring
- Controlled model release and rollback

---

## Dependency Map

```text
Workflow 2 creates the approved city brief.
Workflow 3 coordinates models, tools, and validation.
Workflow 4 creates planning candidates and digital-twin data.
Workflow 5 visualizes and tests the city.
Workflow 6 explains the results.
Workflow 7 protects approved work during failure.
Workflow 8 protects identities, data, APIs, and services.
Workflow 9 improves approved behavior under control.
Workflow 10 releases tested software safely.
Workflow 11 connects the complete architecture.
Additional AI workflows govern models, evidence, and evaluation.
```

---

## Current Project Status

The 11 workflow images and their Whimsical boards are available. The architecture shown is a documented concept and future system design. Development should happen gradually, beginning with:

```text
Human input
→ AI understanding
→ clarification
→ approved city brief
```

Later phases may add geospatial maps, planning analysis, digital twins, simulations, dashboards, and optional advanced visualization.