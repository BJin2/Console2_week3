// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilLibrary.h"
#include "Containers/Array.h"

TArray<AActor*> UUtilLibrary::SortingBasedOnDistance(TArray<AActor*> arr, FVector targetPos)
{
	int arrSize = arr.Num();
	for (int i = 1; i < arrSize; i++)
	{
		float dist1 = FVector::Distance(targetPos, arr[i]->GetActorLocation());
		
		for (int j = 0; j < i; j++)
		{
			float dist2 = FVector::Distance(targetPos, arr[j]->GetActorLocation());

			if (dist1 < dist2)//If element that has higher index is closer to target
			{
				//Then swap
				AActor* temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}