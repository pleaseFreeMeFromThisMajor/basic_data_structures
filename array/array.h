#ifndef ARRAY_H
#define ARRAY_H

const int DELETED = -37;

class Array {
    private:
        int size;
        int* nums;
    public:
        Array(int _size);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();

        void generate_random(int _size, int _min, int _max);

        void print();

        int get_size() const;
        int& operator[](int id);
        const int& operator[](int id) const;
        int& back();
        int get_min() const;
        int get_max() const;

        void push_back(int num);
        void pop_back();
        void insert_at(int id, int num);
        void delete_at(int id);

        void bubble_sort();
        void quick_sort_imp(int left, int right);
        void quick_sort();
        void merge(int left, int mid, int right);
        void merge_sort_imp(int left, int right);
        void merge_sort();

};

#endif