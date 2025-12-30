// Copyright (c) 2025 Wormbrain Games.
// All Rights Reserved.
//
// NOTICE:  All information contained herein is, and remains the property of Wormbrain Games.
// Dissemination of this information or reproduction of this material is strictly forbidden
// unless prior written permission is obtained from Wormbrain Games.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FProceduralSkeletalMeshModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
