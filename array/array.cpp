#include "array.h"
#include <iostream>
#include <stdexcept>

Array::Array() {
    size = 0;
    nums = nullptr;
}
Array::Array(int _size) {
    // _size <0
    if (_size == 0) {
        Array();
        return;
    }
    size = _size;
    nums = new int[_size];
    for (int i=0; i<size; i++) {
        nums[i] = 0;
    }
}

Array::Array(const Array& other) {
    size = other.get_size();
    if (size == 0) {
        nums = nullptr;
        return;
    }
    nums = new int[size];
    for (int i=0; i<size; i++) {
        nums[i] = other.nums[i];
    }
}
Array& Array::operator=(const Array& other) {
    
}
Array::~Array() {
    size = 0;
    delete[] nums;
    nums = nullptr;
}

void Array::print() const {
    if (size == 0) {
        std::cout << "empty\n";
        return;
    }
    for (int i=0; i<size; i++) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';
}

int Array::get_size() const {
    return size;
}
int& Array::operator[](int id) {
    return nums[id];
}
const int& Array::operator[](int id) const {
    return nums[id];
}
int& Array::at(int id) {

}
int& Array::back() {
    return nums[size -1];
}

void Array::push_back(int num) {
    nums[size] = num;
    size++;
}

// what value should I assign the deleted element to? I miss mr.NTV
void Array::pop_back() {   
    back() = DELETED;
    size--;
}