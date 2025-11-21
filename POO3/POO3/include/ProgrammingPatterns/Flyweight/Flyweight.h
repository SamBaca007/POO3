#pragma once

class Flyweight {
public:
  Flyweight() = default;
  ~Flyweight() = default;

  virtual void draw(int x, int y) = 0;
};