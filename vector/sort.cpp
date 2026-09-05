#include "sort.h"
#include <iostream>

void print(const std::vector<int>& nums) {
    if (nums.empty()) {
        std::cout << "empty\n";
        return;
    }
    for (int num: nums) {
        std::cout << num << ' ';
    }
    std::cout << '\n';
}

void bubble_sort(std::vector<int>& nums) {
    for (int i=0; i< nums.size()-1; i++) {
        for (int u=i+1; u< nums.size(); u++) {
            if (nums[u] < nums[u-1]) {
                std::swap(nums[u], nums[u-1]);
            }
        }
    }
}

void insertion_sort(std::vector<int>& nums);

void selection_sort(std::vector<int>& nums);

void quick_sort_imp(std::vector<int>& nums, int left, int right) {
    if (left >= right) {
        return;
    }
    int l = left;
    int r = right;
    int pivot = nums[l + (r-l)/2];

    while (l <= r) {
        while (nums[l] < pivot) {
            l++;
        }
        while (nums[r] > pivot) {
            r--;
        }
        if (l <= r) {
            std::swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }

    quick_sort_imp(nums, left, r);
    quick_sort_imp(nums, l, right);
}

void quick_sort(std::vector<int>& nums) {
    quick_sort_imp(nums, 0, nums.size()-1);
}

void merge(std::vector<int>& nums, int left, int mid, int right) {
    std::vector<int> aux;
    int l = left;
    int r = mid +1;

    while (l <= mid && r <= right) {
        if (nums[l] <= nums[r]) {
            aux.push_back(nums[l]);
            l++;
        }
        else {
            aux.push_back(nums[r]);
            r++;
        }
    }
    while (l <= mid) {
        aux.push_back(nums[l]);
        l++;
    }
    while (r <= right) {
        aux.push_back(nums[r]);
        r++;
    }
    for (int i=0; i<aux.size(); i++) {
        nums[i +left] = aux[i];
    }
}

void merge_sort_imp(std::vector<int>& nums, int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right -left)/2;
    merge_sort_imp(nums, left, mid);
    merge_sort_imp(nums, mid+1, right);
    merge(nums, left, mid, right);
}

void merge_sort(std::vector<int>& nums) {
    merge_sort_imp(nums, 0, nums.size()-1);
}
