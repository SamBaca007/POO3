#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/ChainOfResponsibility/Manejador.h"

class
ManejadorConcretoB : public Manejador {
public:
  ManejadorConcretoB(Manejador* _siguiente, const std::string _name)
  : Manejador(_siguiente, _name) {}
  ~ManejadorConcretoB() = default;

  void
  manejarPeticion(int peticion) override {
    if (peticion >= 0 && peticion < 20) {
      std::cout << "ManejadorConcreto B manejo la peticion: " << peticion << std::endl;
    }
    else {
      Manejador::manejarPeticion(peticion);
    }
  }

};