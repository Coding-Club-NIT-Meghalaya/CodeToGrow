#include "quick_sort.hpp"

#include <algorithm>

#include <vector>
#include <array>
#include <string_view>

#include <iostream>

template<typename Iterator>
void print(std::string_view test_name, Iterator first, Iterator last) {
    std::cout << test_name << std::endl;
    std::for_each(first, last, [](const int& n) { std::cout << n << " "; });
    std::cout << std::endl;
}

int main() {
    // Quick sort ------ TEST
    std::vector<int> v{1,5,6,2,10,9,7,4};
    quick_sort(std::begin(v), std::end(v));
    print("vector", std::begin(v), std::end(v));

    std::array<int, 9> a{1,2,3,4,5,6,7,8,9};
    quick_sort(std::begin(a), std::end(a));
    print("std::array", std::begin(a), std::end(a));

    int arr[] {9,8,7,6,5,4,3,2,1};
    quick_sort(std::begin(arr), std::end(arr));
    print("normal array", std::begin(arr), std::end(arr));


    // Quick Sort with user-defined comparision  ------ TEST
    std::vector<int> v1{1,5,6,2,10,9,7,4};
    quick_sort(std::begin(v1), std::end(v1), std::greater<>()); // Sort in descending order
    print("vector(with comparator)", std::begin(v1), std::end(v1));
}