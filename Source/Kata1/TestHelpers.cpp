// Fill out your copyright notice in the Description page of Project Settings.

#include "TestHelpers.h"

void UTestHelpers::simulateLeftClick() {
  auto* Client = GEngine->GameViewport->Viewport->GetClient();
  Client->InputKey(GEngine->GameViewport->Viewport, 0, EKeys::LeftMouseButton,
                   EInputEvent::IE_Pressed);
  Client->InputKey(GEngine->GameViewport->Viewport, 0, EKeys::LeftMouseButton,
                   EInputEvent::IE_Released);
}
