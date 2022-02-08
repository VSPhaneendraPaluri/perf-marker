#pragma once

#include "random_number_generator/rng.h"

#include <stdint.h>

class Vector
{
public:
  Vector() = default;
  void resize(uint32_t size);

  void insertFromTheBeginningInOrder();
  void insertFromTheEndInOrder();
  void insertFromTheBeginningAtRandom(uint32_t * indexArray);
  void insertFromTheEndAtRandom(uint32_t* indexArray);
  void pushBack();
  void emplaceBack();

  static constexpr uint32_t maxItems_{ 100000 };

private:
  Rng rng_{};
  std::vector<uint32_t> vec_{};
};
