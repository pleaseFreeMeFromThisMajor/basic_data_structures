#include "array.h"
#include <iostream>
#include <random>

Array::Array(int _size) {
    // _size <= 0
    size = _size;
    nums = new int[_size];
    for (int i = 0; i < size; i++)
    {
        nums[i] = 0;
    }
}
Array::Array(const Array &other) {
    size = other.get_size();
    if (size == 0)
    {
        nums = nullptr;
        return;
    }
    nums = new int[size];
    for (int i = 0; i < size; i++)
    {
        nums[i] = other.nums[i];
    }
}
Array &Array::operator=(const Array &other) {
    if (this != &other) {
        delete[] nums;
        size = other.size;
        nums = new int[size];
        for (int i=0; i<size; i++) {
            nums[i] = other.nums[i];
        }
    }
    return *this;
}
Array::~Array() {
    size = 0;
    delete[] nums;
    nums = nullptr;
}

void Array::generate_random(int _size, int _min, int _max) {
    std::random_device rd;
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> distrib(_min, _max);

    if (nums) {
        delete[] nums;
    }
    nums = new int[size];
    for (int i=0; i<size; i++) {
        nums[i] = distrib(gen);
    }
}

void Array::print() {
    if (size == 0)
    {
        std::cout << "empty\n";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';
}

int Array::get_size() const {
    return size;
}
int &Array::operator[](int id) {
    return nums[id];
}
const int &Array::operator[](int id) const {
    return nums[id];
}
int &Array::back() {
    return nums[size - 1];
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

void Array::insert_at(int id, int num) {
    if (id < 0 || id > size)
    {
        return;
    }
}
void Array::delete_at(int id) {
}

void Array::bubble_sort() {
    for (int i=0; i< size-1; i++) {
        for (int u=1; u<size; u++) {
            if (nums[u] < nums[u-1]) {
                std::swap(nums[u], nums[u-1]);
            }
        }
    }
}

void Array::quick_sort_imp(int left, int right) {

}
void Array::quick_sort() {

}

void Array::merge(int left, int mid, int right) {

}
void Array::merge_sort_imp(int left, int right) {

}
void Array::merge_sort() {

}