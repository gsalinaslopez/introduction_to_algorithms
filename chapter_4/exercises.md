# Exercises

## 4.1-1

It returns the biggest of all the negative numbers. When finding the crossing
subarray it will always be smaller than any of the base case ones. It bottoms out
at one base case until it finds the single biggest number and 1 index.

## 4.1-3

A problem of size *n = 3* will result in:

5 operations for the recursive algorithm

1. return base case *A[0]*
2. return base case *A[1]*
3. return crossing *A[0..1]*
4. return base case *A[2]*
5. return crossing *A[0..2]*

6 operations for the brute-force algorithm

1. check range *A[0] - A[0]*
2. check range *A[0] - A[1]*
3. check range *A[0] - A[2]*
4. check range *A[1] - A[1]*
5. check range *A[1] - A[2]*
6. check range *A[2] - A[2]*
