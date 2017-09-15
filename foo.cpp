#include <cassert>
#include <cstdint>
#include <cstdlib> // abort

#if defined(__clang_analyzer__)
# define my_assert(A) \
  do { \
    if (!(A)) { \
      __builtin_unreachable(); \
    } \
  } \
  while (false)
#elif defined(NDEBUG)
# define my_assert(A) \
  do { \
  } \
  while (false)
#else
# define my_assert(A) \
  do { \
    if (!(A)) { \
      abort(); \
    } \
  } \
  while (false)
#endif

uint64_t foo(int num_bits)
{
    int x = 0;
    for (int i = 0; i < num_bits; ++i) {
        x += 1;
    }
    my_assert(x > 0);
    return static_cast<uint64_t>(1) << (64 - x);
}
