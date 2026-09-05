#ifndef ARRAY_H
#define ARRAY_H


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

        int get_size() const;
        int& operator[](int id);
        const int& operator[](int id) const;
        int& at(int id);

        void push_back(int num);
        void pop_back();
};

#endif