#include <cassert>
#include <cstdint>

uint64_t foo(int num_bits)
{
    int x = 0;
    for (int i = 0; i < num_bits; ++i) {
        x += 1;
    }
    assert(x > 0);
    return static_cast<uint64_t>(1) << (64 - x);
}
