#ifndef ALGOS_CHAPTER_2_GETTING_STARTED_H_
#define ALGOS_CHAPTER_2_GETTING_STARTED_H_

#include <vector>

// Utility function for printing a C array
void PrintCPtrArray(const int*, int);

// Utility function for printing a C++ vector
void PrintVector(const std::vector<int>&);

// Insertion sort implementation using C pointers.
void InsertionSortCPtr(int*, int);

// Insertion sort implementation using C++ std vectors
void InsertionSort(std::vector<int>*);

// 2.1-2 Rewrite the INSERTION_SORT procedure to sort into 
// nonincreasing instead of non-decreasing order
void InsertionSortCPtr_2_1_2(int*, int);

// 2.1-2 using C++ and reverse iteration
void InsertionSort_2_1_2(std::vector<int>*);

// 2.1-3 Linear Search using C pointers.
void LinearSearchCPtr_2_1_3(int*, int, int);

// 2.1-3 Linear Search using C++ std vectors
void LinearSearch_2_1_3(std::vector<int>, int);

#endif // ALGOS_CHAPTER_2_GETTING_STARTED_H_
