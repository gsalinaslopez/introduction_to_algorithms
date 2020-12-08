#include "getting_started.h"

#include <stdio.h>

int main(int argc, char** argv){
    printf("%d \n", argc);
    for(int i = 0; i < argc; i++){ 
        printf("%s\n", argv[i]);
    }


    int array[] = {5, 2, 4, 6, 1, 3};
    
    InsertionSortCPtr(array, 6);
    return 0;
}
