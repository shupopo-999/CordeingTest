// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FL_Sample.generated.h"

/**
 * 
 */
UCLASS()
class CORDEINGTEST_API UFL_Sample : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Blueプリントでノードの検索をかける際のカテゴリーを設定
	UFUNCTION(BlueprintCallable, Category = "サンプル")
	static int add_test(int a,int b);

	// 
	UFUNCTION(BlueprintPure, Category = "サンプル")
	static float Mad_Float(float a,float b, float c);
	
};
