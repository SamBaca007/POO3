#pragma once
#include "Prerequisites.h"

class
Solicitud {
public:
  Solicitud(Solicitud* _siguiente, const std::string _name)
    : siguiente(_siguiente), name(_name) {
  }
  ~Solicitud() = default;

  virtual void
  getMonto(int monto) {
    if (siguiente) {
      siguiente->getMonto(monto);
    }
 }

private:
  std::string name;
  Solicitud* siguiente;
};