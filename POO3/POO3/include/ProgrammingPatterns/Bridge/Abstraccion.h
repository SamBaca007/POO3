#pragma once
#include "ProgrammingPatterns/Bridge/Implementacion.h"

class
Abstraccion {
public:
  Abstraccion(Implementacion* imp) : implementacion(imp) {}

  virtual void operacion() = 0;

protected:
  Implementacion* implementacion;
};