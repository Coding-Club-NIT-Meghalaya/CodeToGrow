#pragma once

#include <vector>
#include <algorithm>
#include <functional>

//  Implementation for a priority Queue using max heap
template<typename T, typename Compare = std::less<typename std::vector<T>::value_type>>
class priority_queue {
    using value_type = typename std::vector<T>::value_type;
    using size_type = typename std::vector<T>::size_type;
    using reference = typename std::vector<T>::reference;
    using const_reference = typename std::vector<T>::const_reference;

public:
    bool empty() const noexcept { return data.empty(); }
    size_type size() const noexcept { return data.size(); }

    // Inserts new element to the queue
    void push(value_type const& value) {
        data.push_back(value);
        std::push_heap(std::begin(data), std::end(data), cmp);
    }

    // Delete element from the queue
    void pop() {
        std::pop_heap(std::begin(data), std::end(data), cmp);
        data.pop_back();
    }

    // Get the topmost value of the queue
    const_reference top() const { return data.front(); }

    // Swaps data between two queue
    void swap(priority_queue& other) noexcept {
        swap(data, other.data); // Swaps the data
        swap(cmp, other.cmp);   // Swaps the comparator
    }

private:
    std::vector<T> data;
    Compare cmp;
};

template<class T, class Compare>
void swap(priority_queue<T, Compare>& lhs, priority_queue<T, Compare>& rhs) noexcept {
    lhs.swap(rhs);
}