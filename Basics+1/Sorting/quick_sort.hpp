#pragma once 

#include <algorithm>

/**
 * Author : Shanborlang Suja
 *  NIT Meghalaya
 */

/**
 * Pseudocode :
 * algorithm quicksort(A, lo, hi) is
 * if lo < hi then
 *  p: = paritition(A, lo, hi)
 *  quicksort(A, lo, p)
 *  quicksort(A, p + 1, hi)
 *  
 * algorithm partition(A, lo, hi) is
 *  pivot := A[lo]
 *  i := lo - 1
 *  j := hi + 1
 *  loop forever
 *      do 
 *          i := i + 1
 *       while A[i] < pivot
 * 
 *      do 
 *          j := j - 1
 *      while A[j] > pivot
 * 
 *      if i >= j then
 *          return j
 * 
 */

// RECURSION VERSION


// Generic implemenation of quick sort(default : ascending order)

template<typename RandomIterator>
RandomIterator partition(RandomIterator first, RandomIterator last) {
    auto pivot = *first;
    auto i = first + 1;
    auto j = last - 1;
    while(i <= j) {
        while(i <= j && *i <= pivot) i++;
        while(i <= j && *j > pivot) j--;
        if(i < j) std::iter_swap(i, j);
    }
    std::iter_swap(i - 1, first);
    
    return i - 1;
}

template<typename RandomIterator>
void quick_sort(RandomIterator first, RandomIterator last) {
    if(first < last) {
        auto p = partition(first, last);
        quick_sort(first, p); 
        quick_sort(p + 1, last);
    }
}

// Generic implemenation of quick sort with user-defined comparison function
template<typename RandomIterator, typename Comparator>
RandomIterator partition_c(RandomIterator first, RandomIterator last, Comparator cmp) {
    auto pivot = *first;
    auto i = first + 1;
    auto j = last - 1;
    while(i <= j) {
        while(i <= j && cmp(*i, pivot)) i++;
        while(i <= j && !cmp(*j, pivot)) j--;
        if(i < j) std::iter_swap(i, j);
    }
    std::iter_swap(i - 1, first);

    return i - 1;
}

template<typename RandomIterator, typename Comparator>
void quick_sort(RandomIterator first, RandomIterator last, Comparator cmp) {
    if(first < last) {
        auto p = partition_c(first, last, cmp);
        quick_sort(first, p, cmp);
        quick_sort(p + 1, last, cmp);
    }
}