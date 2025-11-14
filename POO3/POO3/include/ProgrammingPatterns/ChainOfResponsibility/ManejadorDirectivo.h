#pragma once
#include "ProgrammingPatterns/ChainOfResponsibility/Solicitud.h"

class
  ManejadorDirectivo : public Solicitud {
public:
  ManejadorDirectivo(Solicitud* _siguiente, const std::string _name)
    : Solicitud(_siguiente, _name) {
  }
  ~ManejadorDirectivo() = default;

  void
  getMonto(int monto) override {
    if (monto >= 0 && monto < 1000) {
      std::cout << "Manejador Directivo obtuvo el monto: " << monto << std::endl;
    }
    else {
      Solicitud::getMonto(monto);
    }
  }
};