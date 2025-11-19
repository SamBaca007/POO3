#pragma once
#include "ProgrammingPatterns/Command/Comando.h"
#include "ProgrammingPatterns/Command/Luz.h"

class
ComandoApagar : public Comando {
public:
  ComandoApagar(Luz& _luz) : luz(_luz) {}
  ~ComandoApagar() = default;

  void ejecutar() override {
    luz.apagar();
  }
  void deshacer() override {
    luz.encender();
  }

private:
  Luz& luz;
};