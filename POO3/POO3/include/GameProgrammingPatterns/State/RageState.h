#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/PlayerState.h"

class
RageState : public PlayerState {
public:
  RageState() = default;
  ~RageState() = default;

  void
  Attack() override {
    std::cout << "Player is enraged and attacks furiously." << std::endl;
  }

  void
  Defend() override {
    std::cout << "Player is enraged and defends vigorously." << std::endl;
  }

  void
  Move() override {
    std::cout << "Player is enraged and moves quickly." << std::endl;
  }
};