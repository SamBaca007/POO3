#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Bridge/Implementacion.h"

class
ImplementacionConcretaA : public Implementacion {
public:
  ImplementacionConcretaA() = default;

  void
  operacion() override {
    std::cout << "Operacion en Implementacion A." << std::endl;
  }
};