#pragma once
#include "Prerequisites.h"

class
AudioEffectsProcessor {
public:
  AudioEffectsProcessor() = default;
  ~AudioEffectsProcessor() = default;

  void setReverbEnabled(bool enabled) {
    std::cout << "[AudioEffectsProcessor] Reverb "
    << (enabled ? "activado" : "desactivado") << std::endl;
  }
};