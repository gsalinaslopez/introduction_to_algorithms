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

void InsertionSortCPtr(int* array, int length) {
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
