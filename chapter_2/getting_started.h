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

#ifndef ALGOS_CHAPTER_2_GETTING_STARTED_H_
#define ALGOS_CHAPTER_2_GETTING_STARTED_H_

#include <vector>

// Utility function for printing a C array
void PrintCPtrArray(const int*, int);

// Utility function for printing a C++ vector
void PrintVector(const std::vector<int>&);

// Insertion sort implementation using C pointers.
void InsertionSortC(int*, int);

// Insertion sort implementation using C++ std vectors
void InsertionSort(std::vector<int>*);

// 2.1-2 Rewrite the INSERTION_SORT procedure to sort into
// nonincreasing instead of non-decreasing order
void Exercise_2_1_2_InsertionSortC(int*, int);

// 2.1-2 using C++ and reverse iteration
void Exercise_2_1_2_InsertionSort(std::vector<int>*);

// 2.1-3 Linear Search using C pointers.
void Exercise_2_1_3_LinearSearchC(int*, int, int);

// 2.1-3 Linear Search using C++ std vectors
void Exercise_2_1_3_LinearSearch(std::vector<int>, int);

// 2.1-4 Adding to n-bit binary integers, stored in two n-element
// arrays A and B. The sum of the two integers should be stored in
// binary form in an (n + 1) element array C.
void Exercise_2_1_4_NBitBinaryAddC(int*, int*, int);

// 2.1-4 Using ternary operator in C++
void Exercise_2_1_4_NBitBinaryAdd(std::vector<int>, std::vector<int>);

// 2.2-2 Selection sort
void Exercise_2_2_2_SelectionSortC(int*, int);

// Merge function used in merge sort, using C
void MergeC(int*, int, int, int);

// Merge sort implementation using C.
void MergeSortC(int*, int, int);

// Merge function used in merge sort, using C++
void Merge(std::vector<int>*, int, int, int);

// Merge sort implementation using C++.
void MergeSort(std::vector<int>*, int, int);

// 2.3-2 Rewrite the MERGE procedure so that it does not use sentinels, instead
// stopping once either array L or R has had all its elements copied back to A
// and then copying the remainder of the other array back into A.
void Exercise_2_3_2_MergeC(int*, int, int, int);

void Exercise_2_3_2_MergeSortC(int*, int, int);

// 2.3-5 Referring back to the searching problem (see Exercise 2.1-3), observe
// that if the sequence A is sorted, we can check the midpoint of the sequence
// against # and eliminate half of the sequence from further consideration. The
// binary search algorithm repeats this procedure, halving the size of the
// remaining portion of the sequence each time. Write pseudocode, either
// iterative or recursive, for binary search. Argue that the worst-case running
// time of binary search is O(lg n).
void Exercise_2_3_5_LinearSearchC(int*, int, int);
#endif  // ALGOS_CHAPTER_2_GETTING_STARTED_H_
