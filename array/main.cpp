#include "array.h"
#include <iostream>

int main() {
    Array array(3);
    array.print();
    array.pop_back();

    for (int i=0; i<3; i++) {
        std::cout << array[i] << ' ';
    }
    return 0;
}