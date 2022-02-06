#pragma once

#include "random_number_generator/rng.h"

#include <stdint.h>

class Vector
{
public:
  Vector() = default;
  void resize(uint32_t size);

  void insertInOrder();
  void insertAtRandom(uint32_t * indexArray);

  static constexpr uint32_t maxItems_{ 100000 };

private:
  Rng rng_{};
  std::vector<uint32_t> vec_{};
};
