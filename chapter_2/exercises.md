# Exercises

## 2.1-1

1. [31, 41, 59, 26, 41, 58], key = 41, j = 1
2. [31, 41, 59, 26, 41, 58], key = 59, j = 2
3. [31, 41, 59, 26, 41, 58], key = 26, j = 3
    - [31, 41, 59, 59, 41, 58], key = 26, i = 2
    - [31, 41, 41, 59, 41, 58], key = 26, i = 1
    - [31, 31, 41, 59, 41, 58], key = 26, i = 0
    - [26, 31, 41, 59, 41, 58], key = 26, i = -1
4. [26, 31, 41, 59, 41, 58], key = 41, j = 4
    - [26, 31, 41, 59, 59, 58], key = 26, i = 3
    - [26, 31, 41, 41, 59, 58], key = 26, i = 2
5. [26, 31, 41, 41, 59, 58], key = 58, j = 5
    - [26, 31, 41, 41, 59, 59], key = 58, i = 4
    - [26, 31, 41, 41, 58, 59], key = 58, i = 3
6. [26, 31, 41, 41, 58, 59]

## 2.2-1

O(n^2)

## 2.2-2

Loop invariant: all elements from *A*[0..*i*] are smaller than any other number in *A*[*i* + 1..n]

The loop invariant tells us that when *i = n* all elements (*A*[*n*] in this case) will be greater than those on *A*[0..*i*], thus making it unnecesary to run until *A*[*n*].

Best-Case: *O*(*n*^2), need to check every element to make sure we picked the smallest one.

Worst-Case: *O*(*n*^2), same as Best-Case.

## 2.2-3

On average: Half the elements (*n/2*), the target *v* could be at the beginning as well as at the end.

Worst-Case: All the elements, the target *v* happens to be at the very end.

Running time: *O*(*n*) for both average-case and worst-case.


## 2.2-4

Difficult to achieve since we cannot know in advance how "sorted" the input array is at the beginning.

## 2.3-3

Base case:

*T*(2) = 2 \* *lg*2 = 2 * 1 = 2 == 2

Inductive hypothesis:

*T*(2^(*i* + 1)) = 2*T*(2^(*i* + 1) / 2) + 2^(*i* + 1) = 2*T*(2^*i*) + 2^(*i* + 1)

Substitute *T*(2^*i*) with 2^*i* \* lg2^*i*

*T*(2^(*i* + 1)) = 2 \* (2^*i* \* lg2^*i*) + 2^(*i* + 1) = 2 \* (2^*i* \* *i*) + 2^(*i* + 1)

*T*(2^(*i* + 1)) = (2^(*i* + *1*) \* *i*) + 2^(*i* + 1) = 2^(*i* + 1) \* (*i* + *1*)

*T*(2^(*i* + 1)) = 2^(*i* + 1) \* (lg2^*i* + lg2) = 2^(*i* + 1) \* (lg2^(*i* + *1*))

## 2.3-4

*T*(*n*) = ...

1 for *n* = 1

(*n* - 1) + *T*(*n* - 1) for *n* > 1
