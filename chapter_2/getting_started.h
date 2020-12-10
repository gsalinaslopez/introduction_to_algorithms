#ifndef ALGOS_CHAPTER_2_GETTING_STARTED_H_
#define ALGOS_CHAPTER_2_GETTING_STARTED_H_

#include <vector>

// Utility function for printing a C array
void PrintCPtrArray(const int*, int);

// Utility function for printing a C++ vector
void PrintVector(std::vector<int>);

// Insertion sort implementation using C pointers.
void InsertionSortCPtr(int*, int);

// Insertion sort implementation using C++ std vectors
void InsertionSort(std::vector<int>);
#endif // ALGOS_CHAPTER_2_GETTING_STARTED_H_
