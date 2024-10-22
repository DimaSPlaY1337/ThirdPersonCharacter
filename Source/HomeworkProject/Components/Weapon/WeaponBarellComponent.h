// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WeaponBarellComponent.generated.h"

UENUM(BlueprintType)
enum class EHitRegistrationType : uint8
{
	HitScan,
	Projectile
};

USTRUCT(BlueprintType)
struct FDecalInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Decal info")
	UMaterialInterface* DecalMaterial;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Decal info")
	FVector DecalSize = FVector(5.0f, 5.0f, 5.0f);

	//����� �� ������
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Decal info")
	float DecalLifeTime = 10.0f;

	//����� �� ������� ������ ��������
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Decal info")
	float DecalFadeOutTime = 5.0f;
};

USTRUCT(BlueprintType)
struct FShotInfo
{
	GENERATED_BODY();

	FShotInfo() : Location_Mul_10(FVector::ZeroVector), Direction(FVector::ZeroVector) {};
	FShotInfo(FVector Location, FVector Direction) : Location_Mul_10(Location * 10.0f), Direction(Direction) {};

	UPROPERTY()//��������� ����������� ����� ������
		//100 - ��������� �������� � 2 ������� ����� �������
		FVector_NetQuantize100 Location_Mul_10;//�������������� * 10

	UPROPERTY()
	FVector_NetQuantizeNormal Direction;//���������� �������� 16 ��� �� ���������: -1..+1 ������������

	FVector GetLocation() const { return Location_Mul_10 * 0.1f; }
	FVector GetDirection() const { return Direction; }
};

class AGCProjectile;
class UNiagaraSystem;
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class HOMEWORKPROJECT_API UWeaponBarellComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UWeaponBarellComponent();

	void Shot(FVector ShotStart, FVector ShotDirection, float SpreadAngle);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void ChangeRegistrationType();
protected:
	float CalculateValueOffFallDamage(FHitResult ShotResult);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes")
	float FiringRange = 5000.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes", meta = (ClampMin = 1, UIMin = 1))
	int32 BulletPerShot = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Hit registration")
	EHitRegistrationType HitRegistration = EHitRegistrationType::HitScan;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Hit registration", meta = (EditCondition = "HitRegistrationType::Projectile"))
	TSubclassOf<AGCProjectile> ProjectileClass;

	//������ ���� ������������
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Hit registration", meta = (UIMin = 1, ClampMax = 1, EditCondition = "HitRegistrationType::Projectile"))
	int32 ProjectilePoolSize = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Damage")
	float DamageAmount = 20.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Damage")
	UCurveFloat* FalloffDiagram;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Damage")
	float DamageOffset = 100.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Damage")
	TSubclassOf<class UDamageType> DamageTypeClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | VFX")
	UNiagaraSystem* MuzzleFlashFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | VFX")
	UNiagaraSystem* TraceFX;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Barell attributes | Decals")
	FDecalInfo DefaultDecalInfo;

	virtual void BeginPlay() override;

private:
	void ShotInternal(const TArray<FShotInfo>& ShotsInfo);

	UFUNCTION(Server, Reliable)
	void Server_Shot(const TArray<FShotInfo>& ShotsInfo);

	UPROPERTY(ReplicatedUsing = OnRep_LastShotsInfo)
	TArray<FShotInfo> LastShotsInfo;

	UFUNCTION()
	void OnRep_LastShotsInfo();

	//� ������ �������� �� ����� ������ ��������� ������ �� pool-�,
	//� � ������ ���������� ������ ����������� ���������� � pool(���� � ��������� ����������)
	UPROPERTY(Replicated)
	TArray<AGCProjectile*> ProjectilePool;

	UPROPERTY(Replicated)
	int32 CurrentProjectileIndex;

	bool HitScan(FVector ShotStart, OUT FVector& ShotEnd, FVector ShotDirection);
	void LaunchProjectile(const FVector& LaunchStart, const FVector& LaunchDirection);

	UFUNCTION()
	void ProcessProjectileHit(AGCProjectile* Projectile, const FHitResult& HitResult, const FVector& Direction);

	UFUNCTION()
	void ProcessHit(const FHitResult& HitResult, const FVector& Direction);

	APawn* GetOwningPawn() const;
	AController* GetController() const;

	FVector GetBulletSpreadOffset(float Angle, FRotator ShotRotation) const;

	//��� ������� ����� ������ � ��������� �����
	const FVector ProjectilePoolLocation = FVector(0.0f, 0.0f, -100.0f);
};
