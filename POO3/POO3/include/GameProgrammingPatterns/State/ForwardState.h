#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/CarState.h"

class
ForwardState : public CarState {
public:
  ForwardState() = default;
  ~ForwardState() = default;

  void
    Acelerar() override {
    std::cout << "El carro se mueve hacia el frente." << std::endl;
  }

  void
    Frenar() override {
    std::cout << "El carro avanza un par de metros mas antes de detenerse." << std::endl;
  }
};