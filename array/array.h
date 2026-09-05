#ifndef ARRAY_H
#define ARRAY_H

const int DELETED = -37;

class Array {
    private:
        int size;
        int* nums;
    public:
        Array();
        Array(int _size);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        void print() const;

        int get_size() const;
        int& operator[](int id);
        const int& operator[](int id) const;
        int& at(int id);
        int& back();

        void push_back(int num);
        void pop_back();
};

#endif