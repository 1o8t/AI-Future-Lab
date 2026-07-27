# AI Model Workflows

AI Future Lab requires three additional AI-specific workflows to explain how a reliable planning system would operate.

## 12. AI Model and Prompt Orchestration

```mermaid
flowchart TD
    A[Validated User Request] --> B[Context Builder]
    B --> C[Task and Prompt Builder]
    C --> D[Model Router]
    D --> E[AI Model]
    E --> F[Tool Calling]
    F --> G[Structured JSON Output]
    G --> H{Schema Valid?}
    H -- No --> I[Repair or Safe Retry]
    I --> C
    H -- Yes --> J[Planning Validation]
    J --> K{Approved?}
    K -- No --> I
    K -- Yes --> L[Approved AI Response]
```

### Purpose

This workflow converts a validated city-planning request into a reliable machine-readable response. The context builder combines the current request, approved assumptions, conversation history, project state, retrieved evidence, and tool results.

The model router can select different models or specialist agents for language understanding, planning, geospatial analysis, validation, and explanation. Every output must match a defined schema before it can update the digital twin.

## 13. Knowledge Retrieval and RAG

```mermaid
flowchart TD
    A[Planning Question] --> B[Retrieval Query Generator]
    B --> C[GIS and Site Data]
    B --> D[Planning Policies and Standards]
    B --> E[City Knowledge Base]
    B --> F[Approved Project Memory]
    C --> G[Evidence Ranking]
    D --> G
    E --> G
    F --> G
    G --> H[Grounded AI Context]
    H --> I[Planning Recommendation]
    I --> J[Evidence and Source Links]
```

### Purpose

Retrieval-augmented generation prevents the planning system from relying only on general model knowledge. Relevant site data, GIS layers, regulations, standards, approved assumptions, and precedents are retrieved and ranked before the model produces a recommendation.

The recommendation must preserve links to the evidence used so reviewers can inspect its basis.

## 14. AI Evaluation, Guardrails, and ModelOps

```mermaid
flowchart TD
    A[AI Output] --> B[Accuracy and Completeness Evaluation]
    B --> C[Hallucination and Grounding Check]
    C --> D[Planning Constraint Validation]
    D --> E[Safety and Prohibited-Action Check]
    E --> F[Bias and Fairness Review]
    F --> G[Cost, Latency, and Reliability Monitoring]
    G --> H{Human Approval Required?}
    H -- Yes --> I[Human Review]
    H -- No --> J[Controlled Release]
    I --> K{Approved?}
    K -- No --> L[Reject, Repair, or Roll Back]
    K -- Yes --> J
    J --> M[Production Monitoring]
    M --> N[Evaluation Dataset and Feedback]
    N --> O[Sandbox Experiment]
    O --> B
```

### Evaluation dimensions

- Requirement coverage
- Factual grounding
- Spatial and planning validity
- Policy compliance
- Safety
- Fairness and accessibility
- Explainability
- Consistency across revisions
- Cost and latency
- Reliability and recovery

## Relationship to the Existing Architecture

These workflows do not replace the original eleven boards. They expand the AI Core, Security, Results, Learning, and Deployment layers by showing how model requests are built, grounded, checked, released, monitored, and improved.

## Honest Project Status

These workflows describe the proposed production architecture. A live AI model, RAG database, evaluation service, and ModelOps pipeline have not yet been implemented in this repository.
