#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CityGenerator.generated.h"

class USceneComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS()
class AIFUTURELAB_API ACityGenerator : public AActor
{
    GENERATED_BODY()

public:
    ACityGenerator();

    virtual void OnConstruction(const FTransform& Transform) override;

protected:
    UPROPERTY(VisibleAnywhere, Category = "City")
    TObjectPtr<USceneComponent> SceneRoot;

    UPROPERTY(EditAnywhere, Category = "City", meta = (ClampMin = "4", ClampMax = "30"))
    int32 GridSize = 8;

    UPROPERTY(EditAnywhere, Category = "City", meta = (ClampMin = "200.0", ClampMax = "2000.0"))
    float Spacing = 400.0f;

    UPROPERTY(EditAnywhere, Category = "City")
    int32 Seed = 42;

    UPROPERTY(EditAnywhere, Category = "City", meta = (ClampMin = "100.0"))
    float MinimumHeight = 200.0f;

    UPROPERTY(EditAnywhere, Category = "City", meta = (ClampMin = "200.0"))
    float MaximumHeight = 900.0f;

private:
    UPROPERTY(Transient)
    TArray<TObjectPtr<UStaticMeshComponent>> GeneratedComponents;

    UPROPERTY()
    TObjectPtr<UStaticMesh> CubeMesh;

    void ClearGeneratedComponents();

    UStaticMeshComponent* CreateBlock(
        const FString& Name,
        const FVector& Location,
        const FVector& WorldSize
    );
};
