#pragma once
#include "ProgrammingPatterns/Command/Comando.h"
#include "ProgrammingPatterns/Command/Luz.h"

class
ComandoEncender : public Comando {
public:
  ComandoEncender(Luz& _luz) : luz(_luz) {}
  ~ComandoEncender() = default;

  void ejecutar() override {
    luz.encender();
  }
  void deshacer() override {
    luz.apagar();
  }

private:
  Luz& luz;
};