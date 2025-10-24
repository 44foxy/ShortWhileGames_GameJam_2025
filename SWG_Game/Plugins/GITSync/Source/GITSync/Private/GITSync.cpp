// Copyright Epic Games, Inc. All Rights Reserved.

#include "GITSync.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"
#include "Factories/MaterialFactoryNew.h"

#define LOCTEXT_NAMESPACE "FGITSyncModule"

void FGITSyncModule::StartupModule()
{
	UE_LOG(LogTemp, Log, TEXT("GITSync enagaged"));
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FGITSyncModule::ShutdownModule()
{
	UE_LOG(LogTemp, Log, TEXT("GITSync shutdown"));
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGITSyncModule, GITSync)