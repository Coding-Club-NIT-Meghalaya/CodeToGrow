#include "priority_queue.hpp"

#include <iostream>
#include <cassert>

int main() {
    priority_queue<int> queue;

    // Pushing random elements to the queue
    for(auto i : {1, 4, 3, 10, 6, 7}) {
        queue.push(i);
    }

    // Test 
    assert(!queue.empty()); 
    assert(queue.size() == 6);
    assert(queue.top() == 10);

    // Display the elements
    while(!queue.empty()) {
        std::cout << queue.top() << ' ';
        queue.pop();
    }
}