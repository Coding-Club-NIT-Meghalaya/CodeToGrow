#include<iostream>

#include "graph.hpp"
#include "shortest_path.hpp"

int main() {

    // TEST 1
    Graph<char, double> g;
    std::cout << "TEST 1\n";
    g.add_edge('A', 'B', 7);
    g.add_edge('A', 'C', 9);
    g.add_edge('A', 'F', 14);
    g.add_edge('B', 'C', 10);
    g.add_edge('B', 'D', 15);
    g.add_edge('C', 'D', 11);
    g.add_edge('C', 'F', 2);
    g.add_edge('D', 'E', 6);
    g.add_edge('E', 'F', 9);

    char source = 'A';
    std::map<char, double> min_distance;
    std::map<char, char> previous;
    shortest_path(g, source, min_distance, previous);

    for (auto const &[first, second] : min_distance)
    {
        std::cout << source << " -> " << first << " : " << second << '\t';

        print_path(build_path(previous, first));

        std::cout << std::endl;
    }


    // TEST 2
    Graph<char, double> graph;
    graph.add_edge('0', '1', 4);
    graph.add_edge('1', '7', 11);
    graph.add_edge('0', '7', 8);
    graph.add_edge('1', '2', 8);
    graph.add_edge('2', '3', 7);
    graph.add_edge('2', '8', 2);
    graph.add_edge('8', '6', 6);
    graph.add_edge('7', '8', 7);
    graph.add_edge('2', '5', 4);
    graph.add_edge('6', '5', 2);
    graph.add_edge('3', '5', 14);
    graph.add_edge('3', '4', 9);
    graph.add_edge('5', '4', 10);
    graph.add_edge('7', '6', 1);

    char src = '0';
    std::map<char, double> min_dist;
    std::map<char, char> prev;
    shortest_path(graph, src, min_dist, prev);
    std::cout << "\nTEST 2" << std::endl;
    for (auto const &[first, second] : min_dist)
    {
        std::cout << src << " -> " << first << " : " << second << '\t';

        print_path(build_path(prev, first));

        std::cout << std::endl;
    }
}