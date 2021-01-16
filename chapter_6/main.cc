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

#include "./heapsort.h"

#include <stdio.h>

void AlgorithmMaxHeapify() {
    printf("----------------------------\n");
    printf("Algorithm Max Heapify \n");

    int array[] = {27, 17, 3, 16, 13, 10, 1, 5, 7, 12, 4, 8, 9, 0};
    Heap heap = {14, 14, array};

    /* PrintCPtrArray(array, 14); */
    MaxHeapify(&heap, 2);
    PrintCPtrArray(array, 14);
}

void Exercise_6_1_5() {
    printf("----------------------------\n");
    printf("6_2_5\n");

    int array[] = {27, 17, 3, 16, 13, 10, 1, 5, 7, 12, 4, 8, 9, 0};
    Heap heap = {14, 14, array};
    PrintCPtrArray(heap.elements, 14);
    MaxHeapifyIterative(&heap, 2);
    PrintCPtrArray(heap.elements, 14);
}

void AlgorithmBuildHeap() {
    printf("----------------------------\n");
    printf("Algorithm Build Heap \n");

    int array[] = {4, 1, 3, 2, 16, 9, 10, 14, 8, 7};
    Heap heap = {0, 10, array};

    BuildHeap(&heap);

}

void AlgorithHeapsort() {
    printf("----------------------------\n");
    printf("Algorithm Heapsort\n");

    int array[] = {27, 17, 3, 16, 13, 10, 1, 5, 7, 12, 4, 8, 9, 0};
    Heap heap = {0, 14, array};
    PrintCPtrArray(heap.elements, 14);

    Heapsort(&heap);
    PrintCPtrArray(heap.elements, 14);
}

int main(int argc, char** argv) {
    AlgorithmMaxHeapify();
    Exercise_6_1_5();
    AlgorithmBuildHeap();
    AlgorithHeapsort();
    return 0;
}
