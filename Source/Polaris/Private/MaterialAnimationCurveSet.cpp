#include "MaterialAnimationCurveSet.h"

FMaterialAnimationCurveSet::FMaterialAnimationCurveSet() {
    this->StartCurve = NULL;
    this->LoopCurve = NULL;
    this->OneShotCurve = NULL;
    this->DefaultValue = 0.00f;
}

