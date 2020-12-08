#include <stdio.h>

void insertion_sort(int* a, int length){
    int key = 0;
    for (int j = 1; j < length; j++){
        key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key){
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
        printf("iteration so far");
        for(int j = 0; j < length; j++){
            printf("%d,", a[j]);
        }
        printf("\n");
    }
}

int main(void) {
    int array[] = {5, 2, 4, 6, 1, 3};
    
    insertion_sort(array, 6);
    return 0;
}

