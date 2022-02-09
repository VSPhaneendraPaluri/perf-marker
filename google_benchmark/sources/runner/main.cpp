#include "vector/vectorBenchmarker.h"
#include "deque/dequeBenchmarker.h"

#include <benchmark/benchmark.h>

// Vector
BENCHMARK(VectorInsertFromTheBeginningInOrder)->Iterations(1);
BENCHMARK(VectorInsertFromTheEndInOrder)->Iterations(1);
BENCHMARK(VectorInsertFromTheBeginningAtRandom)->Iterations(1);
BENCHMARK(VectorInsertFromTheEndAtRandom)->Iterations(1);
BENCHMARK(VectorPushBack)->Iterations(1);
BENCHMARK(VectorEmplaceBack)->Iterations(1);

// Deque
BENCHMARK(DequeInsertFromTheBeginningInOrder)->Iterations(1);
BENCHMARK(DequeInsertFromTheEndInOrder)->Iterations(1);
BENCHMARK(DequeInsertFromTheBeginningAtRandom)->Iterations(1);
BENCHMARK(DequeInsertFromTheEndAtRandom)->Iterations(1);
BENCHMARK(DequePushBack)->Iterations(1);
BENCHMARK(DequePushFront)->Iterations(1);
BENCHMARK(DequeEmplaceBack)->Iterations(1);
BENCHMARK(DequeEmplaceFront)->Iterations(1);

BENCHMARK_MAIN();
