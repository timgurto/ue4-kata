// Fill out your copyright notice in the Description page of Project Settings.

#include "TestHelpers.h"

void UTestHelpers::simulateLeftClick() {
  auto* Client = GEngine->GameViewport->Viewport->GetClient();
  auto SendLeftMouseEvent = [Client](EInputEvent event) {
    Client->InputKey(GEngine->GameViewport->Viewport, 0, EKeys::LeftMouseButton,
                     event);
  };

  SendLeftMouseEvent(EInputEvent::IE_Pressed);
  SendLeftMouseEvent(EInputEvent::IE_Released);
}
