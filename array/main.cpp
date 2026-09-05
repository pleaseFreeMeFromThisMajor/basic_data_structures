#include "array.h"
#include <iostream>

int main() {
    int n = 30;
    Array ar(n);
    ar.generate_random(n, 10, 99);

    ar.print();
    ar.quick_sort();
    ar.print();

    

    return 0;
}