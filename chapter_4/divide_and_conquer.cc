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

#include "divide_and_conquer.h"

#include <limits.h>
#include <math.h>
#include <stdio.h>

#include <iostream>
#include <iterator>
#include <vector>

MaxSubarray FindMaxCrossingSubarrayC(const int* array, int left_bound,
        int middle, int right_bound) {
    int left_bound_sum = INT_MIN, right_bound_sum = INT_MIN;
    int left_bound_max_index = 0, right_bound_max_index = 0;
    int sum = 0;

    for (int i = middle; i >= left_bound; i--) {
        sum = sum + array[i];
        if (sum > left_bound_sum) {
            left_bound_sum = sum;
            left_bound_max_index = i;
        }
    }

    sum = 0;
    for (int i = middle + 1; i <= right_bound; i++) {
        sum = sum + array[i];
        if (sum > right_bound_sum) {
            right_bound_sum = sum;
            right_bound_max_index = i;
        }
    }
    MaxSubarray r = {
        left_bound_max_index,
        right_bound_max_index,
        left_bound_sum + right_bound_sum};
    return r;
}

MaxSubarray FindMaximumSubarrayC(const int* array, int left_bound, int right_bound) {
    MaxSubarray r = {0, 0, 0};

    if (left_bound == right_bound) {
        r = {left_bound, right_bound, array[left_bound]};
        return r;
    } else {
        int middle = (int)floor((left_bound + right_bound) / 2);
        MaxSubarray left = FindMaximumSubarrayC(
                array, left_bound, middle);
        MaxSubarray right = FindMaximumSubarrayC(
                array, middle + 1, right_bound);
        MaxSubarray cross = FindMaxCrossingSubarrayC(
                array, left_bound, middle, right_bound);
        if (left.sum >= right.sum && left.sum >= cross.sum) {
            printf("returning left side -- Max left [%d], Max right [%d], sum: %d\n",
                    left.max_left, left.max_right, left.sum);
            return left;
        } else if (right.sum >= left.sum && right.sum >= cross.sum) {
            printf("returning right side -- Max left [%d], Max right [%d], sum: %d\n",
                    right.max_left, right.max_right, right.sum);
            return right;
        } else {
            printf("returning cross side -- Max left [%d], Max right [%d], sum: %d\n",
                    cross.max_left, cross.max_right, cross.sum);
            return cross;
        }
    }
        return r;
}
