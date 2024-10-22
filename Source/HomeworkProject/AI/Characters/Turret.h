// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameCodeTypes.h"
#include "CharacterAttributesComponent.h"
#include "Components/CharacterComponents/TurretAttributesComponent.h"
#include "Turret.generated.h"

UENUM(BlueprintType)
enum class ETurretState : uint8
{
	Searching,
	Firing,
	Warning
};

class UWeaponBarellComponent;
UCLASS()
class HOMEWORKPROJECT_API ATurret : public APawn
{
	GENERATED_BODY()

public:
	ATurret();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PossessedBy(AController* NewController) override;

	virtual void Tick(float DeltaTime) override;

	void OnCurrentTargetSet();

	virtual FVector GetPawnViewLocation() const override;//����� ������� �������� �� ������������ ����

	virtual FRotator GetViewRotation() const override;

	bool CheckFireRange(float FireRange);

	void TurnTurretToTarget(AActor* Target);

	void SetShots(int count) { Shots = count; }
	int GetShots() { return Shots; }

	ETurretState GetTurretState() { return CurrentTurretState; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UTurretAttributesComponent* TurretAttributesComponent;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentTarget)
	AActor* CurrentTarget = nullptr;//���� � ������� �������� �����

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* TurretBaseComponent;//���������� ���������� �������� ����������� ��������

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* TurretBarellComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UWeaponBarellComponent* WeaponBarell;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BaseSearchingRotationRate = 60.0f;//�������� �������� �����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BaseFiringInterpSpeed = 5.0f;//������������ ��������

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BarellPitchRotationRate = 60.0f;//�������� ���� ����� ��� ����

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float MaxBarellPitchAngle = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float MinBarellPitchAngle = 60.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs | Fire", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float RateOfFire = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs | Fire", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float BulletSpreadAngle = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parametrs | Fire", meta = (ClampMin = 0.0f, UIMin = 0.0f))
	float FireDelayTime = 3.0f;//�������� ��������, ����� ����� ���� �������

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parameters | Team")
	ETeams Team = ETeams::Enemy;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Turret parameters | Explosion")
	UParticleSystem* ExplosionVFX;

	virtual void OnDeath();

private:
	int Shots = 0;

	void SearchingMovement(float DeltaTime);
	void FiringMovement(float DeltaTime);
	void TurningMovement(float DeltaTime);
	void ChangeState();

	void SetCurrentTurretState(ETurretState NewState);
	ETurretState CurrentTurretState = ETurretState::Searching;
	ETurretState CachedTurretState = ETurretState::Searching;

	UFUNCTION()
	void OnRep_CurrentTarget();

	AActor* CachedTarget = nullptr;//���� � ������� �������� �����

	float GetFireInterval() const;
	void MakeShot();

	FTimerHandle ShotTimer;

	FVector CBaseLookAtDirection = FVector::ZeroVector;
	FVector CBarellLookAtDirection = FVector::ZeroVector;
};
