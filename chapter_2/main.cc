#include "getting_started.h"

#include <stdio.h>

int main(int argc, char** argv) {
    printf("----------------------------\n");
    printf("Insertion Sort\n");

    int array[] = {5, 2, 4, 6, 1, 3};
    InsertionSortCPtr(array, 6);
    PrintCPtrArray(array, 6);

    std::vector<int> v = {5, 2, 4, 6, 1, 3};
    InsertionSort(&v);
    PrintVector(v);

    printf("----------------------------\n");
    printf("2_1_2\n");

    int array_2_1_2[] = {5, 2, 4, 6, 1, 3};
    InsertionSortCPtr2_1_2(array_2_1_2, 6);
    PrintCPtrArray(array_2_1_2, 6);

    std::vector<int> v_2_1_2 = {5, 2, 4, 6, 1, 3};
    InsertionSort2_1_2(&v_2_1_2);
    PrintVector(v_2_1_2);
    return 0;
}
