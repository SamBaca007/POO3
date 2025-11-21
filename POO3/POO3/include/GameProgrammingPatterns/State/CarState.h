#pragma once

class
CarState {
public:
  CarState() = default;
  ~CarState() = default;

  virtual void Acelerar() = 0;
  virtual void Frenar() = 0;
};