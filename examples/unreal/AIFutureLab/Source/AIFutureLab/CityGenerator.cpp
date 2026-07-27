#include "CityGenerator.h"

#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

ACityGenerator::ACityGenerator()
{
    PrimaryActorTick.bCanEverTick = false;

    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    RootComponent = SceneRoot;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshAsset(
        TEXT("/Engine/BasicShapes/Cube.Cube")
    );

    if (CubeMeshAsset.Succeeded())
    {
        CubeMesh = CubeMeshAsset.Object;
    }
}

void ACityGenerator::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    ClearGeneratedComponents();

    if (!CubeMesh)
    {
        return;
    }

    FRandomStream RandomStream(Seed);
    const float CityWidth = static_cast<float>(GridSize) * Spacing + 1000.0f;

    CreateBlock(
        TEXT("Ground"),
        FVector(0.0f, 0.0f, -25.0f),
        FVector(CityWidth, CityWidth, 50.0f)
    );

    for (int32 Index = 0; Index <= GridSize; ++Index)
    {
        if (Index % 3 != 0)
        {
            continue;
        }

        const float Offset =
            (static_cast<float>(Index) - static_cast<float>(GridSize) / 2.0f) * Spacing;

        CreateBlock(
            FString::Printf(TEXT("RoadHorizontal_%d"), Index),
            FVector(0.0f, Offset, 6.0f),
            FVector(CityWidth, 110.0f, 12.0f)
        );

        CreateBlock(
            FString::Printf(TEXT("RoadVertical_%d"), Index),
            FVector(Offset, 0.0f, 6.0f),
            FVector(110.0f, CityWidth, 12.0f)
        );
    }

    for (int32 X = 0; X < GridSize; ++X)
    {
        for (int32 Y = 0; Y < GridSize; ++Y)
        {
            if (X % 3 == 0 || Y % 3 == 0)
            {
                continue;
            }

            const float Height = RandomStream.FRandRange(MinimumHeight, MaximumHeight);
            const float Width = RandomStream.FRandRange(170.0f, 280.0f);
            const float Depth = RandomStream.FRandRange(170.0f, 280.0f);

            const float XPosition =
                (static_cast<float>(X) - static_cast<float>(GridSize - 1) / 2.0f) * Spacing;
            const float YPosition =
                (static_cast<float>(Y) - static_cast<float>(GridSize - 1) / 2.0f) * Spacing;

            CreateBlock(
                FString::Printf(TEXT("Building_%d_%d"), X, Y),
                FVector(XPosition, YPosition, Height / 2.0f),
                FVector(Width, Depth, Height)
            );
        }
    }
}

void ACityGenerator::ClearGeneratedComponents()
{
    for (UStaticMeshComponent* Component : GeneratedComponents)
    {
        if (IsValid(Component))
        {
            Component->DestroyComponent();
        }
    }

    GeneratedComponents.Empty();
}

UStaticMeshComponent* ACityGenerator::CreateBlock(
    const FString& Name,
    const FVector& Location,
    const FVector& WorldSize
)
{
    UStaticMeshComponent* Component =
        NewObject<UStaticMeshComponent>(this, *Name);

    if (!Component)
    {
        return nullptr;
    }

    Component->SetStaticMesh(CubeMesh);
    Component->SetupAttachment(SceneRoot);
    Component->SetRelativeLocation(Location);

    // Unreal's default cube is 100 cm on each side.
    Component->SetRelativeScale3D(WorldSize / 100.0f);

    AddInstanceComponent(Component);
    Component->RegisterComponent();

    GeneratedComponents.Add(Component);
    return Component;
}
