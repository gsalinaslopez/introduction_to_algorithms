#include "getting_started.h"

#include <stdio.h>

void PrintCPtrArray(const int* array, int length){
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void InsertionSortCPtr(int* array, int length){
    for (int j = 1; j < length; j++){
        int key = array[j];
        int i = j - 1;
        while(i >= 0 && array[i] > key){
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
        PrintCPtrArray(array, length);
    }
}
