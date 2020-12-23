#include "getting_started.h"

#include <limits.h>
#include <math.h>
#include <stdio.h>

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

void PrintCPtrArray(const int* array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void PrintVector(const std::vector<int>& v) {
    std::for_each(v.begin(), v.end(), [](const int& n) {
            std::cout << n << ' '; });
    std::cout << '\n';
}

void InsertionSortC(int* array, int length) {
    for (int j = 1; j < length; j++) {
        int key = array[j];
        int i = j - 1;

        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
    }
}

void InsertionSort(std::vector<int>* v) {
    for (auto j = std::next(v->begin()); j != v->end(); j++) {
        int key = *j;
        std::vector<int>::iterator i = std::prev(j);

        while (*i > key) {
            *std::next(i)  = *i;
            if (i == v->begin()) {
                i--;
                break;
            }
            i--;
        }
        *std::next(i) = key;
    }
}

void Exercise_2_1_2_InsertionSortC(int* array, int length) {
    for (int j = 1; j < length; j++) {
        int key = array[j];
        int i = j - 1;

        while (i >= 0 && array[i] < key) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
    }
}

void Exercise_2_1_2_InsertionSort(std::vector<int>* v) {
    for (auto j = std::next(v->rbegin()); j != v->rend(); j++) {
        int key = *j;
        std::vector<int>::reverse_iterator i = std::prev(j);

        while (*i > key) {
            *std::next(i)  = *i;
            if (i == v->rbegin()) {
                i--;
                break;
            }
            i--;
        }
        *std::next(i) = key;
    }
}

void Exercise_2_1_3_LinearSearchC(int* array, int length, int target) {
    printf("target: %d, array: ", target);
    PrintCPtrArray(array, length);

    int* found_index = NULL;
    for (int i = 0; i < length; i++) {
        if (array[i] == target) {
            found_index = &i;
            break;
        }
    }

    if (found_index == NULL) {
        printf("NIL\n");
    } else {
        printf("%d\n", *found_index);
    }
}

void Exercise_2_1_3_LinearSearch(std::vector<int> v, int target) {
    std::cout << "target: " << target << " array: ";
    PrintVector(v);

    for (auto i = v.begin(); i != v.end(); i++) {
        if (*i == target) {
            std::cout << target << '\n';
            return;
        }
    }
    std::cout << "NIL" << '\n';
}

void Exercise_2_1_4_NBitBinaryAddC(int* a, int* b, int length) {
    printf("a: 0 ");
    PrintCPtrArray(a, length);
    printf("b: 0 ");
    PrintCPtrArray(b, length);

    int* c = (int*)malloc((sizeof(int) * length) + sizeof(int));

    int carry = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (a[i] == b[i]) {
            if (carry == 1) {
                c[i + 1] = 1;
            } else {
                c[i + 1] = 0;
            }
            carry = a[i];
        } else {
            if (carry == 1) {
                c[i + 1] = 0;
            } else {
                c[i + 1] = 1;
            }
        }
    }

    c[0] = carry;
    printf("c: ");
    PrintCPtrArray(c, length + 1);
}

void Exercise_2_1_4_NBitBinaryAdd(std::vector<int> a, std::vector<int> b) {
    std::cout << "a: 0 ";
    PrintVector(a);
    std::cout << "b: 0 ";
    PrintVector(b);

    std::vector<int> c;

    int carry = 0;
    for (auto a_it = a.rbegin(), b_it = b.rbegin();
           a_it != a.rend() && b_it != b.rend();
           a_it++, b_it++) {
        c.insert(c.begin(), (*a_it == *b_it) ? carry : carry ^ 1);
        carry = (*a_it == *b_it) ? *a_it : carry;
    }
    c.insert(c.begin(), carry);

    std::cout << "c: ";
    PrintVector(c);
}

void Exercise_2_2_2_SelectionSortC(int* array, int length) {
    int smallest = INT_MAX;
    int smallest_it = 0;

    for (int i = 0; i < length - 1; i++) {
        for (int j = i; j < length; j++) {
            if (array[j] < smallest) {
                smallest = array[j];
                smallest_it = j;
            }
        }
        int temp = array[i];
        array[i] = array[smallest_it];
        array[smallest_it] = temp;

        smallest = INT_MAX;
        smallest_it = 0;
    }
}

void MergeC(int* array, int left_bound, int pivot, int right_bound) {
    int left_subarray_size = ((pivot - left_bound) + 2);
    int* left_subarray = (int*)malloc(
            (sizeof(int)) * (left_subarray_size));
    int right_subarray_size = ((right_bound - pivot) + 1);
    int* right_subarray = (int*)malloc(
            (sizeof(int)) * (right_subarray_size));

    for (int i = 0; i < left_subarray_size - 1; i++) {
        left_subarray[i] = array[left_bound + i];
    }
    left_subarray[left_subarray_size - 1] = INT_MAX;

    for (int i = 0; i < right_subarray_size - 1; i++) {
        right_subarray[i] = array[pivot + 1 + i];
    }
    right_subarray[right_subarray_size - 1] = INT_MAX;

    PrintCPtrArray(array, (right_bound - left_bound) + 1);
    PrintCPtrArray(left_subarray, left_subarray_size);
    PrintCPtrArray(right_subarray, right_subarray_size);

    int i = 0, j = 0;
    for (int k = left_bound; k <= right_bound; k++) {
        if (left_subarray[i] <= right_subarray[j]) {
            array[k] = left_subarray[i++];
        } else {
            array[k] = right_subarray[j++];
        }
    }
    PrintCPtrArray(array, (right_bound - left_bound) + 1);
}

void MergeSortC(int* array, int left_bound, int right_bound) {
    if (left_bound < right_bound) {
        int pivot = (int)floor((left_bound + right_bound) / 2);
        MergeSortC(array, left_bound, pivot);
        printf("Out of left-side recursion with l: %d, p: %d, r: %d\n",
                left_bound, pivot, right_bound);
        MergeSortC(array, pivot + 1, right_bound);
        printf("Out of right-side recursion with l: %d, p: %d, r: %d\n",
                left_bound, pivot, right_bound);
        MergeC(array, left_bound, pivot, right_bound);
    }
}

void Merge(std::vector<int>* v, int left_bound, int pivot, int right_bound) {
    int left_vector_size = ((pivot - left_bound) + 2);
    std::vector<int> left_vector(left_vector_size - 1);
    int right_vector_size = ((right_bound - pivot) + 1);
    std::vector<int> right_vector(right_vector_size - 1);

    std::copy_n(v->begin() + left_bound, left_vector_size - 1, left_vector.begin());
    left_vector.push_back(INT_MAX);

    std::copy_n(v->begin() + (pivot + 1), right_vector_size - 1,
            right_vector.begin());
    right_vector.push_back(INT_MAX);

    PrintVector(*v);
    PrintVector(left_vector);
    PrintVector(right_vector);

    auto left_vector_it = left_vector.begin();
    auto right_vector_it = right_vector.begin();
    auto merge_modify_vector =
        [&l = left_vector_it, &r = right_vector_it](int& n) {
            n = (*l <= *r) ? *(l++) : *(r++);
        };
    std::for_each(v->begin() + left_bound,
            v->begin() + right_bound + 1, merge_modify_vector);

    PrintVector(*v);
}

void MergeSort(std::vector<int>* v, int left_bound, int right_bound) {
    if (left_bound < right_bound) {
        int pivot = (int)floor((left_bound + right_bound) / 2);
        MergeSort(v, left_bound, pivot);
        printf("Out of left-side recursion with l: %d, p: %d, r: %d\n",
                left_bound, pivot, right_bound);
        MergeSort(v, pivot + 1, right_bound);
        printf("Out of right-side recursion with l: %d, p: %d, r: %d\n",
                left_bound, pivot, right_bound);
        Merge(v, left_bound, pivot, right_bound);
    }
}
