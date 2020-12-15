#include "getting_started.h"

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
    PrintCPtrArray(c, length + 1);
}

void Exercise_2_1_4_NBitBinaryAdd(std::vector<int> a, std::vector<int> b) {
    std::vector<int> c;

    int carry = 0;
    int val = 0;
    for (auto a_it = a.rbegin(), b_it = b.rbegin();
           a_it != a.rend() && b_it != b.rend();
           a_it++, b_it++) {
        c.insert(c.begin(), val = (*a_it == *b_it) ? carry : carry ^ 1);
        carry = (*a_it == *b_it) ? *a_it : carry;
    }
    c.insert(c.begin(), carry);
    PrintVector(c);
}
