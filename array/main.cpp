#include "array.h"
#include <iostream>

int main() {
    int n = 10;
    Array ar(n);
    ar.generate_random(n, 1, 10);
    
    ar.print();
    ar.bubble_sort();
    ar.print();

    // test insert and delete
    ar.insert_at(2, 36);
    ar.print();
    ar.delete_at(3);
    ar.print();

    return 0;
}