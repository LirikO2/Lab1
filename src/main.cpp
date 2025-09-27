#include <iostream>
#include "range_bit_count.h"

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << count_bits_in_range(a, b) << std::endl;
    return 0;
}