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

#endif  // ALGOS_CHAPTER_2_GETTING_STARTED_H_
