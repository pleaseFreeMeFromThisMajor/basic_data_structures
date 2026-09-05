#include "array.h"
#include <iostream>

int main() {
    int n = 10;
    Array ar(n);

    ar.print();
    ar.generate_random(n, 1, 10);
    ar.print();
    ar.bubble_sort();
    ar.print();
    return 0;
}