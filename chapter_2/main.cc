#include "getting_started.h"

#include <stdio.h>

void AlgorithmInsertionSort() {
    printf("----------------------------\n");
    printf("Insertion Sort\n");

    int array[] = {5, 2, 4, 6, 1, 3};
    InsertionSortC(array, 6);
    PrintCPtrArray(array, 6);

    std::vector<int> v = {5, 2, 4, 6, 1, 3};
    InsertionSort(&v);
    PrintVector(v);
}

void Exercise_2_1_2() {
    printf("----------------------------\n");
    printf("2_1_2\n");

    int array[] = {5, 2, 4, 6, 1, 3};
    Exercise_2_1_2_InsertionSortC(array, 6);
    PrintCPtrArray(array, 6);

    std::vector<int> v = {5, 2, 4, 6, 1, 3};
    Exercise_2_1_2_InsertionSort(&v);
    PrintVector(v);
}

void Exercise_2_1_3() {
    printf("----------------------------\n");
    printf("2_1_3\n");

    int array[] = {5, 2, 4, 6, 1, 3};
    Exercise_2_1_3_LinearSearchC(array, 6, 6);
    Exercise_2_1_3_LinearSearchC(array, 6, 7);

    std::vector<int> v = {5, 2, 4, 6, 1, 3};
    Exercise_2_1_3_LinearSearch(v, 6);
    Exercise_2_1_3_LinearSearch(v, 7);
}

void Exercise_2_1_4() {
    printf("----------------------------\n");
    printf("2_1_4\n");

     int a[] = {1, 1, 1, 0, 1, 0, 1, 0};
     int b[] = {1, 1, 0, 0, 1, 1, 0, 0};
     Exercise_2_1_4_NBitBinaryAddC(a, b, 8);

    std::vector<int> v_a = {1, 1, 1, 0, 1, 0, 1, 0};
    std::vector<int> v_b = {1, 1, 0, 0, 1, 1, 0, 0};
    Exercise_2_1_4_NBitBinaryAdd(v_a, v_b);
}
int main(int argc, char** argv) {
    AlgorithmInsertionSort();
    Exercise_2_1_2();
    Exercise_2_1_3();
    Exercise_2_1_4();
    return 0;
}
