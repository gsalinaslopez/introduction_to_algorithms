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

#ifndef CHAPTER_3_DIVIDE_AND_CONQUER_H_
#define CHAPTER_3_DIVIDE_AND_CONQUER_H_

#include <vector>

// Structure definition for maximum subarray variables
struct MaxSubarray {
    int max_left;
    int max_right;
    int sum;
};

typedef MaxSubarray MaxSubarray;

// Maximum Crossing Subarray implementation in C
MaxSubarray FindMaxCrossingSubarrayC(const int*, int, int, int);

// Maximum Subarray Algorithm in C
MaxSubarray FindMaximumSubarrayC(const int*, int, int);

// 4_1_2 Write pseudocode for the brute-force method of solving the
// maximum-subarray problem. Your procedure should run in O(n2) time.
MaxSubarray Exercise_4_1_2_FindMaximumSubarrayBruteForceC(const int*, int);

// 4_1_3 Change the base case of the recursive algorithm to use the brute-force
// algorithm whenever the problem size is less than n0
MaxSubarray Exercise_4_1_3_FindMaximumSubarrayRecursiveAndBruteForceC(
        const int*, int, int);

// 4_1_5 4.1-5 Use the following ideas to develop a nonrecursive, linear-time 
// algorithm for the maximum-subarray problem. Start at the left end of the 
// array, and progress toward the right, keeping track of the maximum subarray 
// seen so far. Knowing a maximum subarray of A[1..j], extend the answer to 
// find a maximum subarray ending at index j + 1 by using the following 
// observation: a maximum subarray of A[1..j + 1] is either a maximum subarray 
// of A[1..j] or a subarray A[i..j + 1], for some 1 <= i <= j + 1. Determine a 
// maximum subarray of the form A[i..j + 1] in constant time based on knowing
// a maximum subarray ending at index j.

#endif  // CHAPTER_3_DIVIDE_AND_CONQUER_H_
