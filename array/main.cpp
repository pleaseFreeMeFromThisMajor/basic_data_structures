#include "array.h"
#include <iostream>

int main() {
    int n = 10;
    Array ar(n);
    ar.generate_random(n, 10, 99);

    ar.print();
    ar.merge_sort();
    ar.print();

    

    return 0;
}