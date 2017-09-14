#include <cstdint> // uint64_t

uint64_t foo(int bit_size) {
  return static_cast<uint64_t>(1) << (64 - bit_size);
}
