#include "vector/vectorBenchmarker.h"

#include <benchmark/benchmark.h>

// Vector
BENCHMARK(VectorinsertFromTheBeginningInOrder)->Iterations(1);
BENCHMARK(VectorinsertFromTheEndInOrder)->Iterations(1);
BENCHMARK(VectorinsertFromTheBeginningAtRandom)->Iterations(1);
BENCHMARK(VectorinsertFromTheEndAtRandom)->Iterations(1);
BENCHMARK(VectorPushBack)->Iterations(1);
BENCHMARK(VectorEmplaceBack)->Iterations(1);

BENCHMARK_MAIN();
