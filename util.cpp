#include "util.h"

uint64_t shift(int num_bits)
{
    int x = 0;
    for (int i = 0; i < num_bits; ++i) {
        x += 1;
    }
    return static_cast<uint64_t>(1) << (64 - x);
}

int divide(int length)
{
    int x = 0;
    for (int i = 0; i < length; ++i) {
        x += 1;
    }
    return length / x;
}
