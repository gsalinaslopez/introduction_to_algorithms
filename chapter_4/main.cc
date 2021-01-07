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

#include "./divide_and_conquer.h"

#include <stdio.h>

void AlgorithmFindMaximumSubarray() {
    printf("----------------------------\n");
    printf("Algorithm Find Maximum Subarray\n");

    int array[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15,
        -4, 7};
    MaxSubarray result;

    result = FindMaxCrossingSubarrayC(array, 3, 7, 12);

    /* printf("Max left [%d], Max right [%d], sum: %d", */
            /* result.max_left, result.max_right, result.sum); */

    /* int array2[] = {-25, 20}; */
    /* result = FindMaxCrossingSubarrayC(array, 2, 2, 3); */
    /* printf("Max left [%d], Max right [%d], sum: %d", */
    /*         result.max_left, result.max_right, result.sum); */

    /* result = FindMaxCrossingSubarrayC(array, 0, 7, 15); */
    /* printf("Max left [%d], Max right [%d], sum: %d", */
    /*         result.max_left, result.max_right, result.sum); */
    result = FindMaximumSubarrayC(array, 0, 15);
}

void Exercise_4_1_2() {
    printf("----------------------------\n");
    printf("4_1_2\n");
    int array[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15,
        -4, 7};
    Exercise_4_1_2_FindMaximumSubarrayBruteForceC(array, 16);
}
void Exercise_4_1_3() {
    printf("----------------------------\n");
    printf("4_1_3\n");
    int array[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15,
        -4, 7};
    printf("running 413\n");
    Exercise_4_1_3_FindMaximumSubarrayRecursiveAndBruteForceC(array, 0, 15);
}
int main(int argc, char** argv) {
    AlgorithmFindMaximumSubarray();
    Exercise_4_1_2();
    Exercise_4_1_3();
    return 0;
}
