#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class
NormalState : public PlayerState {
public:
  NormalState() = default;
  ~NormalState() = default;

  void
  Attack() override {
    std::cout << "Player attacks normally." << std::endl;
  }

  void
  Defend() override {
    std::cout << "Player defends normally." << std::endl;
  }

  void
  Move() override {
    std::cout << "Player moves normally." << std::endl;
  }
};