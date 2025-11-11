#pragma once
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class
Radio : public Dispositivo {
public:
  Radio() = default;

  void
    encender() override {
    std::cout << "Radio encendida." << std::endl;
  }

  void apagar() override {
    std::cout << "Radio apagada." << std::endl;
  }
};