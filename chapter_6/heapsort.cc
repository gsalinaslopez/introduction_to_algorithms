/*
 * MIT License
 *
 * Copyright (c) [2020] [Giovanni Salinas]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#include "heapsort.h"

#include <limits.h>
#include <math.h>
#include <stdio.h>
/* #include <string.h> */

/* #include <iostream> */
/* #include <iterator> */
/* #include <vector> */

void PrintCPtrArray(const int* array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int GetNodeParentIndexC(int index) {
    return ((int)floor((index + 1) / 2) - 1);
}

int GetNodeLeftChildIndexC(int index) {
    return (2 * index) + 1;
}

int GetNodeRightChildIndexC(int index) {
    return 2 * (index + 1);
}

void MaxHeapify(int* array, int array_length, int index) {
    int left = GetNodeLeftChildIndexC(index);
    int right = GetNodeRightChildIndexC(index);
    int largest = 0;

    // base case - bottoms out
    if ((left > (array_length - 1)) && (right > ( - 1))) {
        /* printf("broke -- left:%d, right:%d, length:%d\n", left, right, heap->length); */
        return;
    }

    if (left > (array_length - 1)) {
        left = index;
    }

    if (right > (array_length - 1)) {
        right = index;
    }

    // TODO: check for heap size
    if (array[left] > array[index]) {
        largest = left;
    } else {
        largest = index;
    }

    // TODO: check for heap size
    if (array[right] > array[largest]) {
        largest = right;
    }

    if (largest != index) {
        int temp = array[largest];
        array[largest] = array[index];
        array[index] = temp;

       MaxHeapify(array, array_length, largest);
    }
}

void MaxHeapifyIterative(Heap* heap, int index) {
        /* int dummy; */
        /* printf("went into heap: "); */
        /* PrintCPtrArray(heap->elements, heap->length); */
        /* printf("and index [%d]", index); */
        /* scanf("%d", &dummy); */

    while(true) {
        int left = GetNodeLeftChildIndexC(index);
        int right = GetNodeRightChildIndexC(index);
        int largest = 0;
        /* printf("left:%d, right:%d, length:%d\n", left, right, heap->length); */
        /* scanf("%d", &dummy); */

        // base case - bottoms out
        if ((left > (heap->length - 1)) && (right > (heap->length - 1))) {
            /* printf("broke -- left:%d, right:%d, length:%d\n", left, right, heap->length); */
            break;
        }

        if (left > (heap->length - 1)) {
            left = index;
        }

        if (right > (heap->length - 1)) {
            right = index;
        }

        // TODO: check for heap size
        if (heap->elements[left] > heap->elements[index]) {
            largest = left;
        } else {
            largest = index;
        }

        // TODO: check for heap size
        if (heap->elements[right] > heap->elements[largest]) {
            largest = right;
        }

        /* printf("largest: %d\n", largest); */
        /* scanf("%d", &dummy); */

        if (largest != index) {
            int temp = heap->elements[largest];
            heap->elements[largest] = heap->elements[index];
            heap->elements[index] = temp;

           /* MaxHeapify(array, array_length, largest); */
            index = largest;
            continue;
        }
        break;
    }
}

void BuildHeap(Heap* heap) {
    heap->size = heap->length;
    int leaf_ends_index = ((int)(floor(heap->length) / 2) - 1);
    int dummy;

    for (int i = leaf_ends_index; i >= 0; i--) {
        /* printf("build heap progress on [%d]:\n", i); */
        /* scanf("%d", &dummy); */
        MaxHeapifyIterative(heap, i);
        printf("build heap progress on [%d]:\n", i);
        PrintCPtrArray(heap->elements, heap->length);
        /* scanf("%d", &dummy); */
    }
}
