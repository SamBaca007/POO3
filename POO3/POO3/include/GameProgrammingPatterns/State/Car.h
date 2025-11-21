#pragma once
#include "GameProgrammingPatterns/State/CarState.h"
#include "GameProgrammingPatterns/State/ParkedState.h"

class
Car {
public:
  Car() : currentState(new ParkedState()) {}
  ~Car() = default;

  void
  SetState(CarState* state) {
    delete currentState;
    currentState = state;
  }

  void
  Acelerar() {
    currentState->Acelerar();
  }

  void
  Frenar() {
    currentState->Frenar();
  }

private:
  CarState* currentState;
};