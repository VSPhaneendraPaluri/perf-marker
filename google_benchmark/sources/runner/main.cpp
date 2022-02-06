#include "vector.h"

#include <benchmark/benchmark.h>

#include <array>
#include <iostream>

static void VectorInsertInOrder(benchmark::State& state)
{
  Vector vec{};
  vec.resize(Vector::maxItems_);
  for (auto _ : state)
  {
    vec.insertInOrder();
  }
}

static void VectorInsertAtRandom(benchmark::State& state)
{
  Vector vec{};
  vec.resize(Vector::maxItems_);
  Rng rng{};
  uint32_t indexArray[Vector::maxItems_];
  for (auto index = 0; index < Vector::maxItems_; index++)
  {
    std::size_t random_position = rng.getRandomNumber() % Vector::maxItems_;
    indexArray[index] = random_position;
  }
  for (auto _ : state)
  {
    vec.insertAtRandom(indexArray);
  }
}


BENCHMARK(VectorInsertInOrder);
BENCHMARK(VectorInsertAtRandom);

BENCHMARK_MAIN();
