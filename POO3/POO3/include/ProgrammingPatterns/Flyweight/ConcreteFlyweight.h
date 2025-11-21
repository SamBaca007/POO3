#pragma once
#include "Prerequisites.h"
#include "ProgrammingPatterns/Flyweight/Flyweight.h"

class
ConcreteFlyweight : public Flyweight {
public:
  ConcreteFlyweight(char _symbol) : symbol(_symbol) {}
  ~ConcreteFlyweight() = default;

  void
  draw(int x, int y) override {
    // For demonstrating purposes, we just print the symbol and coordinates
    std::cout << "Drawing symbol '" << symbol <<
    "' at position (" << x << ", " << y << ")\n" << std::endl;
  }

private:
  char symbol;
};