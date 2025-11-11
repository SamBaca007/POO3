#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Implementacion.h"

class
ImplementacionConcretaB : public Implementacion {
public:
  ImplementacionConcretaB() = default;

  void
  operacion() override {
    std::cout << "Operacion en Implementacion B." << std::endl;
  }
};