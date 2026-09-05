#include "list.h"
#include <iostream>

int main() {
    List* list = new List();

    for (int i=0; i<10; i++) {
        append(list,i);
    }

    pop_back(list);
    print(list);
    
    free(list);
    return 0;
}