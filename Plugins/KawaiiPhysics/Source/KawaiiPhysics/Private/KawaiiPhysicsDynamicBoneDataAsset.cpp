#include "KawaiiPhysicsDynamicBoneDataAsset.h"

UKawaiiPhysicsDynamicBoneDataAsset::UKawaiiPhysicsDynamicBoneDataAsset()
{
    DummyBoneLength = 0.00f;
    BoneForwardAxis = EBoneForwardAxis::X_Positive;
    PlanarConstraint = EPlanarConstraint::None;
    TeleportDistanceThreshold = 300.00f;
    TeleportRotationThreshold = 10.00f;
    bEnableWind = false;
    WindScale = 1.00f;
};
