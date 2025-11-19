#pragma once

class
Operacion {
public:
  Operacion() = default;
  ~Operacion() = default;

  virtual void realizarOperacion() = 0;
  virtual void deshacerOperacion() = 0;
};