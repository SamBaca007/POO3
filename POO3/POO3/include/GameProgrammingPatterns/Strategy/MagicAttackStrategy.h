#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"

class
MagicAttackStrategy : public IAttackStrategy {
public:
  MagicAttackStrategy() = default;
  ~MagicAttackStrategy() = default;

  int
  Execute(int baseDamage) const override {
    return static_cast<int>(baseDamage * 1.7);
  }
};