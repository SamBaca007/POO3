#pragma once
#include "ProgrammingPatterns/Bridge/Dispositivo.h"

class
ControlRemoto {
public:
  ControlRemoto(Dispositivo* imp) : dispositivo (imp) {}

  virtual void encender() = 0;
  virtual void apagar() = 0;

protected:
  Dispositivo* dispositivo;
};