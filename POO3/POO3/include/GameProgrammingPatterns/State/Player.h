#pragma once
#include "GameProgrammingPatterns/State/PlayerState.h"
#include "GameProgrammingPatterns/State/NormalState.h"

class
Player {
public:
  Player() : currentState(new NormalState()) {}
  ~Player() = default;

  void
  setState(PlayerState* state) {
    delete currentState;
    currentState = state;
  }

  void
  Attack() {
    currentState->Attack();
  }

  void
  Defend() {
    currentState->Defend();
  }

  void
  Move() {
    currentState->Move();
  }

private:
  PlayerState* currentState;
};