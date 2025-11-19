#pragma once

class
Comando {
public:
  Comando() = default;
  ~Comando() = default;

  virtual void ejecutar() = 0;
  virtual void deshacer() = 0;
};