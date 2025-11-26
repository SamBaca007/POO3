#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"

class
RangedAttackStrategy : public IAttackStrategy {
public:
  RangedAttackStrategy() = default;
  ~RangedAttackStrategy() = default;

  int
  Execute(int baseDamage) const override {
    return static_cast<int>(baseDamage * 0.9);
  }
};