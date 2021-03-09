a_ = []

def partition(a, left_bound, right_bound):
    global a_
    a_ = a.copy()
    i = left_bound - 1
    for j in range(left_bound, right_bound):
        if a_[j] <= a_[right_bound]:
            i = i + 1
            temp = a_[j]
            a_[j] = a_[i]
            a_[i] = temp
    temp = a_[right_bound]
    a_[right_bound] = a_[i + 1]
    a_[i + 1] = temp

    # print(a_)
    return i + 1


def quicksort(a, left_bound, right_bound):
    global a_
    a_ = a.copy()
    if left_bound < right_bound:
        pivot = partition(a_, left_bound, right_bound)
        quicksort(a_, left_bound, pivot - 1)
        quicksort(a_, pivot + 1, right_bound)
    return a_
