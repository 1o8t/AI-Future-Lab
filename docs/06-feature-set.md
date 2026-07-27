# 06 — Feature Set

**English | [العربية](ar/06-feature-set.md)**

This document describes the proposed capabilities of AI Future Lab. Features are grouped by product area and labeled by maturity so readers can distinguish the current concept from future implementation.

---

## Feature Status Labels

- **Documented:** the idea and expected behavior are described.
- **Starter:** early educational code or structure exists.
- **Planned:** intended for a future development phase.
- **Advanced future:** requires professional data, specialist models, or major engineering work.
- **Not a current claim:** included as a vision, not as completed software.

---

# 1. Project Creation and User Input

## 1.1 Text-based project creation

**Status:** Planned

The user creates a city-planning project by describing the idea in ordinary language.

Expected behavior:

- Accept Arabic or English text.
- Preserve the original request.
- Extract structured information.
- Show the extracted values for confirmation.
- Save a draft project.

Acceptance example:

> When a user states a population of 50,000, the system records `50,000 people` and asks for confirmation if the unit or context is unclear.

## 1.2 Voice-based project creation

**Status:** Planned

Expected behavior:

- Record or upload speech.
- Convert speech to text.
- Allow the user to correct the transcription.
- Never continue from a low-confidence transcription without confirmation.

## 1.3 Guided project questionnaire

**Status:** Planned

A beginner-friendly form asks about:

- Location
- Site area
- Population
- Housing
- Jobs
- Transport
- Services
- Sustainability
- Budget assumptions
- Development phases

## 1.4 File upload

**Status:** Planned

Possible files:

- Project brief
- Planning report
- Policy document
- GIS file
- Spreadsheet
- Approved map

Required controls:

- File-type validation
- Malware scanning
- Access permissions
- Private-data warning
- Source metadata

## 1.5 Site selection

**Status:** Planned

The user selects or uploads a site boundary on a map.

Expected behavior:

- Confirm coordinate system.
- Validate geometry.
- Calculate approximate area.
- Prevent accidental use of a wrong location.

---

# 2. AI Understanding and Clarification

## 2.1 Language detection

**Status:** Planned

Detect Arabic or English while preserving project meaning and technical terms.

## 2.2 Intent extraction

**Status:** Documented

Identify the primary goal, such as:

- New city
- District expansion
- Transport improvement
- Service-access study
- Sustainability scenario

## 2.3 Entity extraction

**Status:** Documented

Extract values such as:

- Population
- Area
- Number of districts
- Housing types
- Required services
- Mobility modes
- Sustainability targets

## 2.4 Constraint extraction

**Status:** Documented

Identify fixed limits, for example:

- Site boundary
- Protected area
- Maximum height
- Budget limit
- Existing road
- Development deadline

## 2.5 Priority modeling

**Status:** Planned

Allow the user to rank priorities instead of treating every goal as equally important.

## 2.6 Missing-information detection

**Status:** Planned

The system identifies missing fields that affect later planning.

## 2.7 Conflict detection

**Status:** Planned

Example conflict:

- Maximum green space
- Maximum development capacity
- Lowest infrastructure cost

The system explains that the goals may require trade-offs.

## 2.8 Focused clarification

**Status:** Planned

Questions should be necessary, short, and connected to the current decision.

## 2.9 Assumption management

**Status:** Planned

Every assumption should include:

- Description
- Source or reason
- Confidence
- Owner
- Approval status
- Affected features

---

# 3. Structured City Brief

## 3.1 Goal register

Stores project goals and their priority.

## 3.2 Requirement register

Stores confirmed functional and planning requirements.

## 3.3 Constraint register

Stores physical, legal, financial, environmental, and schedule constraints.

## 3.4 Population and development profile

Stores:

- Initial population
- Future population
- Household assumptions
- Development phases
- Employment targets

## 3.5 Land-use requirements

Stores required categories and targets.

## 3.6 Service requirements

Stores education, healthcare, public-space, safety, and community needs.

## 3.7 Mobility targets

Stores road, public-transport, walking, cycling, parking, and emergency-access objectives.

## 3.8 Sustainability targets

Stores energy, water, waste, heat, green-space, and resilience objectives.

## 3.9 Open-question register

Shows unresolved items that prevent dependable planning.

## 3.10 Brief approval

**Status:** Planned first prototype

Required behavior:

- Show all important fields.
- Allow editing.
- Create an approved version.
- Preserve previous versions.
- Record approver and date.

---

# 4. Knowledge and Evidence

## 4.1 Source registry

**Status:** Planned

Record source authority, date, permissions, coverage, and limitations.

## 4.2 Policy and standards retrieval

**Status:** Advanced future

Search approved documents and return relevant sections without inventing rules.

## 4.3 GIS retrieval

**Status:** Advanced future

Retrieve site, road, service, land-use, and environmental layers.

## 4.4 Project-document retrieval

**Status:** Planned

Search only documents the user is authorized to access.

## 4.5 Evidence links

**Status:** Planned

Every important recommendation should link back to the information used.

## 4.6 Data freshness warnings

**Status:** Planned

Warn when a source may be outdated or when an update date is unknown.

---

# 5. Urban Planning Intelligence

## 5.1 Land-use allocation

**Status:** Advanced future

Generate broad land-use distributions based on the approved brief and site constraints.

## 5.2 District generation

**Status:** Advanced future

Propose district and neighborhood structure.

## 5.3 Density strategy

**Status:** Advanced future

Compare density patterns, especially around transport and services.

## 5.4 Housing distribution

**Status:** Advanced future

Represent housing capacity, types, phases, and variety.

## 5.5 Road hierarchy

**Status:** Advanced future

Propose conceptual road categories and connectivity. This does not replace detailed road engineering.

## 5.6 Public-transport planning

**Status:** Advanced future

Propose corridors, stops, and coverage concepts.

## 5.7 Walking and cycling networks

**Status:** Advanced future

Evaluate connectivity, distance, and access to important destinations.

## 5.8 Schools and healthcare

**Status:** Advanced future

Estimate demand using explicit assumptions and propose service locations.

## 5.9 Public-space strategy

**Status:** Advanced future

Evaluate distribution and access to parks and public spaces.

## 5.10 Utility-demand indicators

**Status:** Advanced future

Estimate high-level energy, water, waste, and communications demand. Professional engineering models remain necessary.

## 5.11 Resilience planning

**Status:** Advanced future

Explore heat, climate, incident, and infrastructure-resilience scenarios.

## 5.12 Candidate-plan generation

**Status:** Advanced future

Produce multiple options with different priorities rather than one final answer.

---

# 6. Candidate Comparison

## 6.1 Side-by-side comparison

Compare plans using the same assumptions and metrics.

## 6.2 Trade-off explanation

Examples:

- Higher density versus open space
- Infrastructure cost versus local service access
- Road capacity versus walkability
- Centralized services versus shorter local trips

## 6.3 Weighted priorities

Allow human reviewers to adjust the importance of indicators.

## 6.4 Dominance warning

Warn when a selected metric unfairly controls the whole decision.

## 6.5 Alternative preservation

Rejected alternatives should remain available for review and learning.

---

# 7. Digital Twin

## 7.1 City-object database

**Status:** Advanced future

Objects may include:

- Districts
- Neighborhoods
- Parcels
- Roads
- Stations
- Schools
- Healthcare
- Parks
- Utilities

## 7.2 Spatial relationships

Store how objects connect, serve, overlap, or depend on one another.

## 7.3 Requirement traceability

Connect each city object to the requirement or decision that created it.

## 7.4 Version history

Store approved project states.

## 7.5 Scenario state

Allow temporary scenario changes without modifying the approved base plan.

## 7.6 Change comparison

Show added, removed, moved, or modified objects and explain why.

## 7.7 Rollback

Restore a previous approved version when a new version fails review.

---

# 8. Visualization

## 8.1 Interactive web map

**Status:** Planned after first prototype

The preferred main visualization direction.

## 8.2 Toggleable layers

Possible layers:

- Land use
- Districts
- Roads
- Public transport
- Schools
- Healthcare
- Parks
- Utilities
- Environment
- Phasing

## 8.3 Object inspection

Select an object to see:

- Properties
- Capacity
- Source requirement
- Evidence
- Approval status
- Version history

## 8.4 Service-coverage display

Visualize estimated access areas and gaps.

## 8.5 Version comparison

Display two project versions side by side.

## 8.6 Optional lightweight 3D

**Status:** Future

Simple browser-based building extrusion.

## 8.7 Optional engine connectors

**Status:** Later future

Godot, Unity, and Unreal Engine may display approved city data, but they are not the current development priority.

---

# 9. Simulation and Analysis

## 9.1 Accessibility analysis

Measure network-based access to services.

## 9.2 Population growth

Test future population levels.

## 9.3 Service demand

Estimate when schools, healthcare, or public space may become insufficient.

## 9.4 Mobility scenarios

Test conceptual changes in travel demand or transport networks.

## 9.5 Utility indicators

Estimate high-level resource demand.

## 9.6 Climate and heat indicators

Study green-space and heat-mitigation distribution.

## 9.7 Incident scenarios

Test closure or failure of a road, service, or infrastructure component.

## 9.8 Policy scenarios

Compare the effect of changed density, parking, or land-use assumptions.

## 9.9 Model disclosure

Every result must show:

- Model version
- Inputs
- Assumptions
- Date
- Limitations
- Review status

---

# 10. Explainability and Reporting

## 10.1 Decision summary

Explain the recommendation in plain language.

## 10.2 Evidence display

Show data, source, rule, or calculation used.

## 10.3 Assumption register

List assumptions and affected outputs.

## 10.4 Uncertainty notice

Explain what is not known or dependable.

## 10.5 Alternative explanation

Explain why other options perform differently.

## 10.6 Risk register

List risk, severity, likelihood, owner, and mitigation.

## 10.7 Executive report

A short report for decision-makers.

## 10.8 Technical report

A detailed report for professional review.

## 10.9 Bilingual reporting

**Status:** Future

Provide Arabic and English reports while preserving technical meaning.

---

# 11. Collaboration and Approval

## 11.1 Team projects

**Status:** Future

Multiple authorized members work on one project.

## 11.2 Comments

Attach comments to requirements, objects, scenarios, or decisions.

## 11.3 Review requests

Send a version to a planner, engineer, or approver.

## 11.4 Approval gates

Examples:

- Brief approval
- Candidate selection
- Simulation acceptance
- Report approval
- Release approval

## 11.5 Role-based access

Control who can view, edit, review, approve, export, or administer.

## 11.6 Public consultation mode

**Status:** Advanced future

Allow controlled public feedback without exposing confidential data.

---

# 12. Security and Governance

## 12.1 Authentication

Verify identity.

## 12.2 Authorization

Check permission for every protected operation.

## 12.3 Data minimization

Collect only necessary information.

## 12.4 Secret management

Keep API keys and credentials outside the repository.

## 12.5 Audit history

Record important access and changes.

## 12.6 Rate limits

Protect services from abuse or accidental overload.

## 12.7 Backup and recovery

Verify that approved project states can be restored.

## 12.8 Human responsibility

AI recommendations do not replace professional or legal approval.

---

# 13. Error and Recovery Features

## 13.1 Error classification

Classify user, data, AI, service, security, and deployment errors.

## 13.2 Safe retry

Retry only temporary failures and enforce limits.

## 13.3 Fallback

Use an approved alternative service when appropriate.

## 13.4 Protected approved state

A failed draft must not damage the last approved version.

## 13.5 Human escalation

Request help when the system cannot safely continue.

## 13.6 Incident record

Record cause, effect, action, and recovery result.

---

# 14. Learning and Model Operations

## 14.1 Feedback collection

Collect approved corrections and evaluation results.

## 14.2 Sandbox experiments

Test new prompts, models, or rules outside production.

## 14.3 Evaluation datasets

Maintain representative planning tasks and expected behavior.

## 14.4 Model registry

Record version, purpose, limitations, evaluation, and approval status.

## 14.5 Limited release

Release changes to a controlled group before broad use.

## 14.6 Monitoring and rollback

Detect reduced quality and return to a stable version.

---

# 15. First Prototype Feature Set

The first real version should remain focused.

## Included

- Simple web project form
- Arabic or English text input
- AI extraction of goals and constraints
- Missing-information detection
- Clarification questions
- Structured city brief
- Human editing and approval
- Saved brief versions
- Basic explanation of extracted information

## Excluded from the first version

- Professional city generation
- Full GIS platform
- Traffic engineering simulation
- Utility engineering simulation
- Complete digital twin
- Unreal, Unity, or Godot integration
- Government approval workflow

## First-prototype success criteria

- The system captures important fields correctly.
- It does not hide missing information.
- The user can correct mistakes.
- Approved information is stored separately from assumptions.
- A new version is created after an approved change.
- The output is understandable in both Arabic and English.

---

# 16. Feature Dependency Order

```text
Project input
→ AI understanding
→ city brief
→ knowledge retrieval
→ planning candidates
→ digital twin
→ visualization
→ simulation
→ explainability
→ collaboration
→ controlled learning
```

Building a later feature before its required earlier data is dependable may create impressive-looking but unreliable results.

---

# 17. Honest Status Summary

The feature set is a product specification and future development guide.

Currently:

- The concept is documented.
- The workflows are designed.
- Starter procedural city code exists for future visualization study.
- The complete AI planning feature set has not been implemented.

This distinction should remain visible in public communication.
