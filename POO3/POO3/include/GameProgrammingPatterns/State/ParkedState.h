#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/State/CarState.h"

class
ParkedState : public CarState {
public:
  ParkedState() = default;
  ~ParkedState() = default;

  void
  Acelerar() override {
    std::cout << "No puedes acelerar, el carro esta estacionado." << std::endl;
  }

  void 
  Frenar() override {
    std::cout << "No puedes frenar, el carro ya esta estacionado." << std::endl;
  }
};