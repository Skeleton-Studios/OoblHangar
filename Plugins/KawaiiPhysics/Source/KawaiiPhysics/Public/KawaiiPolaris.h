#pragma once

#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"

#include "KawaiiPolaris.generated.h"

class KawaiiPolaris;

UENUM()
enum class EPlanarConstraint : uint8
{
	None,
	X,
	Y,
	Z,
};

UENUM()
enum class EBoneForwardAxis : uint8
{
	X_Positive,
	X_Negative,
	Y_Positive,
	Y_Negative,
	Z_Positive,
	Z_Negative,
};

UENUM()
enum class ECollisionLimitType : uint8
{
	None,
	Spherical,
	Capsule,
	Planar,
};

USTRUCT(BlueprintType)
struct KAWAIIPHYSICS_API FKawaiiPhysicsSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"), category = "KawaiiPhysics")
	float Damping = 0.1f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"), category = "KawaiiPhysics")
	float WorldDampingLocation = 0.8f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"), category = "KawaiiPhysics")
	float WorldDampingRotation = 0.8f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"), category = "KawaiiPhysics")
	float Stiffness = 0.05f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"), category = "KawaiiPhysics")
	float Radius = 3.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0"), category = "KawaiiPhysics")
	float LimitAngle = 0.0f;
};

USTRUCT()
struct FCollisionLimitBase
{
	GENERATED_BODY();

	/** Bone to attach the sphere to */
	UPROPERTY(EditAnywhere, Category = CollisionLimitBase)
	FBoneReference DrivingBone;

	UPROPERTY(EditAnywhere, Category = CollisionLimitBase)
	FVector OffsetLocation = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category = CollisionLimitBase, meta = (ClampMin = "-360", ClampMax = "360"))
	FRotator OffsetRotation = FRotator::ZeroRotator;

	UPROPERTY()
	FVector Location = FVector::ZeroVector;

	UPROPERTY()
	FQuat Rotation = FQuat::Identity;
	
	UPROPERTY()
	bool bEnable = true;

#if WITH_EDITORONLY_DATA

	UPROPERTY()
	bool bFromDataAsset = false;

	UPROPERTY(VisibleAnywhere, Category = Debug, meta = (IgnoreForMemberInitializationTest))
	FGuid Guid = FGuid::NewGuid();

	UPROPERTY()
	ECollisionLimitType Type = ECollisionLimitType::None;

#endif

};

USTRUCT()
struct FSphericalLimit : public FCollisionLimitBase
{
	GENERATED_BODY();

	FSphericalLimit()
	{
#if WITH_EDITORONLY_DATA
		Type = ECollisionLimitType::Spherical;
#endif
	}

	/** Radius of the sphere */
	UPROPERTY(EditAnywhere, Category = SphericalLimit, meta = (ClampMin = "0"))
	float Radius = 5.0f;

	/** Whether to lock bodies inside or outside of the sphere */
	UPROPERTY(EditAnywhere, Category = SphericalLimit)
	ESphericalLimitType LimitType = ESphericalLimitType::Outer;
};

USTRUCT()
struct FCapsuleLimit : public FCollisionLimitBase
{
	GENERATED_BODY();


	FCapsuleLimit()
	{
#if WITH_EDITORONLY_DATA
		Type = ECollisionLimitType::Capsule;
#endif
	}

	UPROPERTY(EditAnywhere, Category = CapsuleLimit, meta = (ClampMin = "0"))
	float Radius = 5.0f;

	UPROPERTY(EditAnywhere, Category = CapsuleLimit, meta = (ClampMin = "0"))
	float Length = 10.0f;
};

USTRUCT()
struct FPlanarLimit : public FCollisionLimitBase
{
	GENERATED_BODY();

	FPlanarLimit()
	{
#if WITH_EDITORONLY_DATA
		Type = ECollisionLimitType::Planar;
#endif
	}

	UPROPERTY()
	FPlane Plane = FPlane(0, 0, 0, 0);
};
