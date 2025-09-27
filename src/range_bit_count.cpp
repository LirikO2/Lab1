#include "range_bit_count.h"

long long count_bits_in_range(int a, int b) {
    long long total_bits = 0;
    for (int i = a; i <= b; ++i) {
        unsigned int num = static_cast<unsigned int>(i);
        while (num > 0) {
            total_bits += num & 1;
            num >>= 1;
        }
    }
    return total_bits;
}