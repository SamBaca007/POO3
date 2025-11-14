#pragma once
#include "ProgrammingPatterns/ChainOfResponsibility/Solicitud.h"

class
ManejadorDirectorGeneral : public Solicitud {
public:
  ManejadorDirectorGeneral(Solicitud* _siguiente, const std::string _name)
    : Solicitud(_siguiente, _name) {
  }
  ~ManejadorDirectorGeneral() = default;

  void
  getMonto(int monto) override {
    std::cout << "Manejador Director General obtuvo el monto: " << monto << std::endl;
  }
};