#pragma once
#include "Prerequisites.h"
#include "GameProgrammingPatterns/Strategy/IAttackStrategy.h"

class
MeleeAttackStrategy : public IAttackStrategy {
public:
  MeleeAttackStrategy() = default;
  ~MeleeAttackStrategy() = default;

  int
  Execute(int baseDamage) const override {
    return static_cast<int>(baseDamage * 1.2);
  }
};