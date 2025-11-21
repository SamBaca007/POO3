#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/CarState.h"

class
ReverseState : public CarState {
public:
  ReverseState() = default;
  ~ReverseState() = default;

  void
    Acelerar() override {
    std::cout << "El carro se mueve hacia atras." << std::endl;
  }

  void
    Frenar() override {
    std::cout << "El carro retrocede un par de metros mas antes de detenerse."
    << std::endl;
  }
};