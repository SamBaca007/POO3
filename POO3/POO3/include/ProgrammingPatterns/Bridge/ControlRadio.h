#pragma once
#include "ProgrammingPatterns/Bridge/ControlRemoto.h"

class
ControlRadio : public ControlRemoto {
public:
  ControlRadio(Dispositivo* imp) : ControlRemoto(imp) {}

  void
  encender() override {
    dispositivo->encender();
  }

  void
  apagar() override {
    dispositivo->apagar();
  }
};