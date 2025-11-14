#pragma once
#include "ProgrammingPatterns/ChainOfResponsibility/Solicitud.h"

class
  ManejadorGerente : public Solicitud {
public:
  ManejadorGerente(Solicitud* _siguiente, const std::string _name)
    : Solicitud(_siguiente, _name) {
  }
  ~ManejadorGerente() = default;

  void
    getMonto(int monto) override {
    if (monto >= 1000 && monto < 5000) {
      std::cout << "Manejador Gerente obtuvo el monto: " << monto << std::endl;
    }
    else {
      Solicitud::getMonto(monto);
    }
  }
};