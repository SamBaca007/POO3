#pragma once
#include "ProgrammingPatterns/Bridge/Abstraccion.h"

class
AbstraccionRefinada : public Abstraccion {
public:
  AbstraccionRefinada(Implementacion* imp) : Abstraccion(imp) {}

  void
  operacion() override {
    implementacion->operacion();
  }
};