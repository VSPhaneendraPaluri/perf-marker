#include "vector.h"
#include <assert.h>

#include <iostream>

void Vector::resize(uint32_t size)
{
  vec_.clear();
  vec_.resize(size);
  assert(vec_.capacity() == vec_.size(), "Vector capacity != size");
}

void Vector::insertInOrder()
{
    for (auto index = 0; index < Vector::maxItems_; index++)
    {
      vec_.insert(vec_.begin() + index, index);
    }
}

void Vector::insertAtRandom(uint32_t * indexArray)
{
  for (auto index = 0; index < Vector::maxItems_; index++)
  {
    vec_.insert(vec_.begin() + indexArray[index], index);
  }
}
