# 07 — Roadmap

**English | [العربية](ar/07-roadmap.md)**

This roadmap describes a possible development path for AI Future Lab. It is a planning document, not a claim that the phases are already implemented.

The roadmap deliberately begins with small, testable capabilities. The project should not attempt to build a complete AI city, digital twin, professional simulation platform, and advanced 3D engine at the same time.

---

## Roadmap Principles

### Build evidence before complexity

Each phase should prove one important capability before the project moves to the next.

### Protect honesty

The public repository should clearly distinguish completed work from future plans.

### Keep humans responsible

AI-generated outputs must remain editable, reviewable, and rejectable.

### Prefer the web platform first

A browser-based system is the main direction. Advanced engines may be studied later.

### Design for Arabic and English

Bilingual support should be considered early, not added only at the end.

### Do not use confidential data during early experiments

Public, synthetic, or personally created example data should be used until proper security and permissions exist.

---

# Phase 0 — Public Concept and Knowledge Base

## Goal

Present the idea professionally and make the architecture understandable to other people.

## Current status

**In progress and substantially documented.**

## Deliverables

- English project homepage
- Arabic project homepage
- Public project pitch
- Problem and solution explanation
- End-to-end workflow explanation
- System architecture
- Feature specification
- Safety and governance principles
- Public roadmap
- Whimsical workflow links
- Assets plan
- Contribution and permission guidance

## Work the creator should personally add

- Personal explanation of why the idea matters
- Lessons learned
- Original sketches
- Exported workflow images
- Project banner
- Progress updates
- Decisions and changes
- Questions for professionals

## Exit criteria

This phase is complete when:

- A new visitor can understand the project without a private explanation.
- The repository does not claim the full platform is completed.
- English and Arabic navigation is clear.
- Contact and feedback methods are safe.
- Private information is not exposed.

## Main risks

- Page appears professional but the creator cannot explain it.
- Architecture becomes too large and confusing.
- Public readers misunderstand the project as completed software.
- Personal information is accidentally published.

---

# Phase 1 — AI City Brief Generator

## Goal

Build the first genuinely AI-powered feature.

A user writes a city idea. The system extracts requirements, identifies missing details, asks questions, and produces a structured city brief for human approval.

## Why this phase comes first

Every later feature depends on a dependable brief. A map or 3D city is not meaningful when the requirements are unclear.

## Minimum inputs

- Project title
- City idea
- Location if known
- Population if known
- Site area if known
- Housing requirements
- Mobility goals
- Required services
- Sustainability goals

## Minimum outputs

- Project objective
- Confirmed requirements
- Constraints
- Priorities
- Assumptions
- Missing information
- Conflicts
- Clarification questions
- Approved city-brief version

## Suggested technical shape

```text
Web form
→ secure backend
→ AI structured-output request
→ schema validation
→ editable review screen
→ save approved version
```

## Suggested first data structure

```json
{
  "project_name": "Example District",
  "location": null,
  "population": 50000,
  "goals": ["family-friendly", "sustainable"],
  "housing": ["villas", "apartments"],
  "services": ["schools", "clinics", "parks"],
  "mobility": ["public transport", "walking"],
  "constraints": [],
  "assumptions": [],
  "missing_information": ["site area", "development phases"],
  "approval_status": "draft"
}
```

## Testing tasks

- Test Arabic requests.
- Test English requests.
- Test mixed-language requests.
- Test missing population.
- Test conflicting goals.
- Test incorrect numeric extraction.
- Test user correction.
- Test saving a new version.

## Exit criteria

- Important fields are extracted consistently.
- The AI identifies unknowns instead of inventing answers.
- The user can edit every field.
- Draft and approved states are separate.
- The approved brief has a version history.
- The explanation is understandable.

## Main risks

- AI creates confident assumptions.
- User approves incorrect extracted information.
- Arabic terminology is inconsistent.
- Private project details are submitted without protection.

---

# Phase 2 — Project Workspace and Versioning

## Goal

Turn the city-brief prototype into a usable project workspace.

## Features

- User accounts
- Project list
- Draft and approved briefs
- Version history
- Comments
- Change summary
- Export to JSON or PDF
- Basic audit record

## Example change history

```text
v0.1 — Initial AI extraction
v0.2 — User corrected population
v0.3 — Added water-efficiency target
v1.0 — Brief approved
```

## Exit criteria

- Users can safely create and reopen projects.
- Approved versions cannot be silently overwritten.
- A user can compare two brief versions.
- Access controls prevent unauthorized viewing.

---

# Phase 3 — Interactive Site Map

## Goal

Connect the approved brief to a simple geospatial workspace.

## Features

- Search for a location
- Draw or upload site boundary
- Show base map
- Calculate approximate site area
- Add simple district polygons
- Add road lines
- Add service points
- Toggle layers
- Export GeoJSON

## Important limitation

This phase creates a planning workspace, not an automatic professional master plan.

## Data-quality checks

- Coordinate system
- Valid geometry
- Site boundary closure
- Units
- Source and date
- Permission to use the data

## Exit criteria

- The map opens reliably.
- Site geometry is saved with the project version.
- The user can add and edit basic objects.
- All objects remain connected to the approved brief.

---

# Phase 4 — Basic Planning Metrics

## Goal

Provide simple, transparent measurements before attempting automatic city generation.

## First metrics

- Land-use area by category
- Population density
- Distance to services
- Number of residents inside target access areas
- Road-network connectivity indicators
- Park area per resident
- Development capacity estimate

## Rules

- Every metric must show its formula.
- Every input must show its source.
- Units must be visible.
- The system must explain model limitations.

## Exit criteria

- Users can reproduce the metric from the displayed inputs.
- Results are not presented with false precision.
- A changed map triggers recalculation.
- Failed calculations produce clear errors.

---

# Phase 5 — Candidate Planning Strategies

## Goal

Use the approved brief and site data to propose several high-level strategies.

## Candidate examples

- Transit-oriented
- Multi-center neighborhoods
- Green low-rise
- High-capacity mixed use
- Phased expansion

## Each candidate must include

- Main idea
- Land-use distribution
- District concept
- Mobility concept
- Service concept
- Sustainability concept
- Assumptions
- Risks
- Metrics
- Validation status

## Human role

The system proposes and compares. A planner or responsible reviewer selects, combines, changes, or rejects the candidates.

## Exit criteria

- At least two genuinely different options are produced.
- Candidates follow the same brief and comparison assumptions.
- Trade-offs are visible.
- The system does not describe one candidate as automatically correct.

---

# Phase 6 — Digital Twin Foundation

## Goal

Store the approved plan as structured city objects and relationships.

## First object types

- Site
- District
- Neighborhood
- Road
- Service point
- Park
- Development phase

## Features

- Unique object IDs
- Geometry
- Properties
- Source requirement
- Approval status
- Version history
- Relationship links
- Change comparison

## Exit criteria

- Every object belongs to a project version.
- Every object can be traced to a requirement or human decision.
- Approved state is protected.
- Scenario changes do not overwrite the base plan.

---

# Phase 7 — Scenario Laboratory

## Goal

Test controlled changes against a saved digital-twin version.

## Early scenarios

- Population increase
- New school or clinic
- Road closure
- Public-transport route addition
- Density change
- Development-phase delay
- Park-area change

## Later specialist scenarios

- Transport demand
- Utility capacity
- Climate resilience
- Emergency response
- Policy changes

## Required disclosure

Every scenario displays:

- Base version
- Changed inputs
- Model
- Assumptions
- Results
- Limitations
- Review status

## Exit criteria

- Scenarios can be created without changing the approved plan.
- Results can be compared side by side.
- Model limitations are visible.
- The user can discard a scenario safely.

---

# Phase 8 — Explainable Reports

## Goal

Turn planning data and scenario results into clear reports.

## Outputs

- Executive summary
- Candidate comparison
- Assumption register
- Risk register
- Validation report
- Decision history
- Recommended next actions
- Technical appendix

## Bilingual requirement

Arabic and English reports should preserve the same facts, numbers, assumptions, and status labels.

## Exit criteria

- Every major recommendation links to evidence.
- Uncertainty is visible.
- Alternatives are not hidden.
- Reports clearly state that professional approval may be required.

---

# Phase 9 — Team Collaboration and Approval

## Goal

Support professional review by multiple users.

## Features

- Team invitations
- Roles
- Comments
- Review assignments
- Approval requests
- Decision records
- Notifications
- Protected exports

## Suggested roles

- Viewer
- Editor
- Planner
- Engineer
- Reviewer
- Approver
- Administrator

## Exit criteria

- Every protected action checks permission.
- Review comments remain connected to objects or versions.
- Approval records cannot be changed silently.
- Sensitive projects can remain private.

---

# Phase 10 — Professional Data and Service Integrations

## Goal

Connect approved external data and specialist services.

## Possible integrations

- GIS databases
- Planning-policy libraries
- Transport analysis
- Utility-demand models
- Environmental data
- Satellite data
- Document systems

## Requirements

- Legal permission
- Data-sharing agreement where required
- Security review
- API authentication
- Source metadata
- Data freshness checks
- Failure and fallback behavior

## Exit criteria

- The source is authorized.
- The integration can be disabled safely.
- Data errors do not corrupt approved project state.
- Results remain traceable to the external source.

---

# Phase 11 — Production Security and Operations

## Goal

Prepare the platform for controlled real-world pilots.

## Work areas

- Threat modeling
- Penetration testing
- Privacy review
- Logging and monitoring
- Backup and recovery
- Incident response
- Cost controls
- Availability targets
- AI evaluation
- Release management

## Exit criteria

- Security review completed.
- Backup restoration tested.
- Incident procedure documented.
- Model and prompt versions recorded.
- Rollback tested.
- Pilot scope and limitations approved.

---

# Phase 12 — Optional Advanced Visualization

## Goal

Add richer visual experiences after the planning data and workflow are dependable.

## Possible options

- Web-based 3D
- Godot visualization connector
- Unity visualization connector
- Unreal Engine visualization connector
- Virtual-reality review

## Why it is late in the roadmap

Advanced visuals can consume significant time while providing little planning value if the underlying data is not structured and validated.

## Required input

The engine should receive approved city data, not invent the plan independently.

Example future flow:

```text
Approved digital-twin JSON or GeoJSON
→ engine importer
→ create roads and buildings
→ apply visual styles
→ allow visual review
```

## Exit criteria

- Engine visualization is optional.
- It uses approved structured data.
- It does not change planning decisions without returning through the main approval workflow.
- Performance and compatibility are tested.

---

# Suggested Development Priorities

## Priority now

1. Improve public explanation.
2. Export and add workflow images.
3. Add safe contact and permission process.
4. Learn and document the project deeply.
5. Define the City Brief schema.
6. Build the first small AI prototype only when ready.

## Not a priority now

- Building three game-engine versions
- Professional traffic simulation
- Real government data integration
- Large autonomous agent system
- Real-time city sensors
- Production deployment

---

# Suggested Personal Learning Roadmap

The creator can learn in this order:

1. Explain the project confidently.
2. Learn basic GitHub and Markdown.
3. Learn how structured JSON works.
4. Learn simple HTML, CSS, and JavaScript or TypeScript.
5. Learn how APIs work.
6. Learn basic database concepts.
7. Learn GIS and GeoJSON.
8. Learn AI prompts and structured outputs.
9. Learn testing and security basics.
10. Learn optional 3D tools later.

---

# Progress Reporting Format

Future progress updates can use:

```markdown
## Progress Update — YYYY-MM-DD

### Completed
- ...

### Learned
- ...

### Changed
- ...

### Current problem
- ...

### Next step
- ...

### Honest status
- Concept / design / prototype / tested feature
```

---

# Roadmap Summary

```text
Public concept
→ AI city brief
→ project versioning
→ interactive map
→ basic metrics
→ planning candidates
→ digital twin
→ scenarios
→ explainable reports
→ team approval
→ professional integrations
→ production operations
→ optional advanced visualization
```

The roadmap should remain flexible. Professional feedback may change the order or remove features. The important rule is that every phase should produce evidence before the project claims a new capability.
