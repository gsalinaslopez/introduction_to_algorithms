#include "getting_started.h"

#include <stdio.h>

void AlgorithmInsertionSort() {
    printf("----------------------------\n");
    printf("Insertion Sort\n");

    int array[] = {5, 2, 4, 6, 1, 3};
    InsertionSortC(array, 6);
    PrintCPtrArray(array, 6);

     printf("\n");

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

     printf("\n");

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

     printf("\n");

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

     printf("\n");

    std::vector<int> v_a = {1, 1, 1, 0, 1, 0, 1, 0};
    std::vector<int> v_b = {1, 1, 0, 0, 1, 1, 0, 0};
    Exercise_2_1_4_NBitBinaryAdd(v_a, v_b);
}

void Exercise_2_2_2() {
    printf("----------------------------\n");
    printf("2_2_2\n");

    int array[] = {5, 2, 4, 6, 1, 3};
    Exercise_2_2_2_SelectionSortC(array, 6);
    PrintCPtrArray(array, 6);
}

void AlgorithmMergeSort() {
    printf("----------------------------\n");
    printf("Merge Sort\n");

    int array[] = {2, 4, 5, 7, 1, 2, 3, 6};
    MergeSortC(array, 0, 7);

    int array2[] = {3, 41, 52, 26, 38, 57, 9, 49};
    MergeSortC(array2, 0, 7);
    /* MergeC(array, 0, 3, 7); */

    printf("----------------------------\n");
    std::vector<int> v = {2, 4, 5, 7, 1, 2, 3, 6};
    MergeSort(&v, 0, v.size() - 1);
    /* Merge(&v, 0, 3, 7); */

    std::vector<int> v2 = {3, 41, 52, 26, 38, 57, 9, 49};
    MergeSort(&v2, 0, 7);
    /* Merge(&v2, 0, 3, 7); */

}

int main(int argc, char** argv) {
    AlgorithmInsertionSort();
    Exercise_2_1_2();
    Exercise_2_1_3();
    Exercise_2_1_4();
    Exercise_2_2_2();
    AlgorithmMergeSort();
    return 0;
}
