#ifndef SORT_H
#define SORT_H

#include <vector>

void print(const std::vector<int>& nums);

void bubble_sort(std::vector<int>& nums);

void insertion_sort(std::vector<int>& nums);

void selection_sort(std::vector<int>& nums);

void quick_sort_imp(std::vector<int>& nums, int left, int right);

void quick_sort(std::vector<int>& nums);

void merge(std::vector<int>& nums, int left, int mid, int right);

void merge_sort_imp(std::vector<int>& nums, int left, int right);

void merge_sort(std::vector<int>& nums);


#endif