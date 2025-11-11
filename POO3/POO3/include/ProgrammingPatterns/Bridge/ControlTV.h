#pragma once
#include "ProgrammingPatterns/Bridge/ControlRemoto.h"

class
ControlTV : public ControlRemoto {
public:
  ControlTV(Dispositivo* imp) : ControlRemoto (imp) {}

  void
  encender() override {
    dispositivo->encender();
  }

  void
  apagar() override {
    dispositivo->apagar();
  }
};