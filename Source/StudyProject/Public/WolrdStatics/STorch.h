// STaorch.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STorch.generated.h"

UCLASS()
class STUDYPROJECT_API ASTorch : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTorch();
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "ASTorch",Meta = (AllowPrivateAccess))
	TObjectPtr<class UBoxComponent> BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASTorch", Meta = (AllowPrivateAccess))
	TObjectPtr<class UStaticMeshComponent> BodyStaticMeshComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASTorch", Meta = (AllowPrivateAccess))
	TObjectPtr<class UParticleSystemComponent> ParticleSystemComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ASTorch", Meta = (AllowPrivateAccess))
	TObjectPtr<class UPointLightComponent> PointLightComponent;
	
	UPROPERTY(VisibleAnywhere, Category = "ASTorch")
	int32 ID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ASElectricityPole, meta = (AllowPrivateAccess))
	TObjectPtr<class URotatingMovementComponent> RotatingMovementComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "ASTorch", Meta = (AllowPrivateAccess))
	float RotationSpeed;
};
