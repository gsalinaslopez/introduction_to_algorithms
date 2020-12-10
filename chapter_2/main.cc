#include "getting_started.h"

#include <stdio.h>

int main(int argc, char** argv) {
    int array[] = {5, 2, 4, 6, 1, 3};
    InsertionSortCPtr(array, 6);
    PrintCPtrArray(array, 6);

    printf("----------------------------\n");

    std::vector<int> v = {5, 2, 4, 6, 1, 3};
    InsertionSort(&v);
    PrintVector(v);
    return 0;
}
