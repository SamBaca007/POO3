#pragma once
#include "Prerequisites.h"

class
Dispositivo {
public:
  Dispositivo() = default;
  ~Dispositivo() = default;

  virtual void encender() {
    std::cout << "Dispositivo encendido." << std::endl;
  }
  virtual void apagar() {
    std::cout << "Dispositivo apagado." << std::endl;
  }
};