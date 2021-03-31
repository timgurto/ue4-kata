// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// clang-format off
#include "CoreMinimal.h"
#include "FunctionalTest.h"
#include "FT_TestBase.generated.h"
// clang-format on

/**
 * The purpose of this class is to provide a base class for blueprint functional
 * tests that can clean up after themselves, in order to eliminate interference
 * between tests.
 */
UCLASS()
class KATA1_API AFT_TestBase : public AFunctionalTest {
  GENERATED_BODY()

 protected:
  /**
   * This function is automatically called after the test completes.  Overriding
   * it here merely allows it to be called from blueprints.
   */
  UFUNCTION(BlueprintImplementableEvent)
  void CleanUp() override;
};
