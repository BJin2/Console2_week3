// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "UtilLibrary.generated.h"


/**
 * 
 */
UCLASS()
class THIRDPERSONSHOOTER_API UUtilLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Sorting")
	static TArray<AActor*> SortingBasedOnDistance(TArray<AActor*> arr, FVector targetPos);
};
