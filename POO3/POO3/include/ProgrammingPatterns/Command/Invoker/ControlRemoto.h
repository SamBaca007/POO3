#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Command/Comando.h"

class
ControlRemoto {
public:
  ControlRemoto() = default;
  ~ControlRemoto() = default;

  // Presionar botón para ejecutar un comando
  void
  EjecutarComando(Comando* _comando) {
    _comando->ejecutar();
    m_historial.push_back(_comando);
  }

  // Presionar botón para deshacer el último comando ejecutado
  void DeshacerUltimoComando() {
    if (!m_historial.empty()) {
      Comando* ultimoComando = m_historial.back();
      ultimoComando->deshacer();
      m_historial.pop_back();
    }
  }

private:
  std::vector<Comando*> m_historial;
};