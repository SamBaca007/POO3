#pragma once
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class
TV : public Dispositivo {
public:
  TV() = default;

  void
  encender() override {
    std::cout << "TV encendida." << std::endl;
  }

  void apagar() override {
    std::cout << "TV apagada." << std::endl;
  }
};
