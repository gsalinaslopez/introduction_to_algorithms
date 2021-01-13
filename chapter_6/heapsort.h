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

#ifndef CHAPTER_6_HEAPSORT_H_
#define CHAPTER_6_HEAPSORT_H_

struct Heap {
    int size = 0;
    int length = 0;
    int* elements;
};

typedef Heap Heap;

/* #include <vector> */
// Utility function for printing a C array
void PrintCPtrArray(const int*, int);

// Helper functions for binary tree array representation
int GetNodeParentIndexC(int);

int GetNodeLeftChildIndexC(int);

int GetNodeRightChildIndexC(int);

// Heapsort Max Heapify function
void MaxHeapify(int*, int, int);

// 6_2_5 Heapsort Max Heapify function - interative
void MaxHeapifyIterative(Heap*, int);

// Build Heap function
void BuildHeap(Heap*);

#endif  // CHAPTER_6_HEAPSORT_H_
