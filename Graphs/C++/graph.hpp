#pragma once

/**
 *  Author : Shanborlang Suja
 *  NIT Meghalaya
*/

// Generic Graph data structure works for both DAG and non DAG
// Helps in adding vertices and edges, and can return the list of vertices and the neighbours of a specified vertex

#include <map>
#include <vector>
#include <stdexcept>
#include <numeric>

template<typename Vertex = int, typename Weight = double>
class Graph {
public:
    using vertex_type = Vertex;
    using weight_type = Weight;
    using neighbor_type = std::pair<Vertex, Weight>;
    using neighbor_list_type = std::vector<neighbor_type>;

    void add_edge(Vertex const source, Vertex const target, Weight const weight, bool const bidirectional = true) {
        adjacency_list[source].push_back(std::make_pair(target, weight));
        if(bidirectional) adjacency_list[target].push_back(std::make_pair(source, weight));         // for non DAG
    }

    size_t vertex_count() const { return adjacency_list.size(); }

    std::vector<Vertex> vertices() const {
        std::vector<Vertex> keys;
        for(auto const& [first, second] : adjacency_list) 
            keys.push_back(first);
        return keys;
    }

    neighbor_list_type const& neighbors(Vertex const& v) const {
        auto pos = adjacency_list.find(v);
        if(pos == adjacency_list.end())
            throw std::runtime_error("vertex not found");
        return pos->second;
    }

    constexpr static Weight INF = std::numeric_limits<Weight>::infinity();      // This is basically max size of the type of Weight

private:
    std::map<vertex_type, neighbor_list_type> adjacency_list;
};

/**
 * Usage: 
 * 
 * Graph<int, int> graph;          --> Create a graph data structure
 * 
 * 
 * // Add value to the graph
 * graph.add_edge(0, 1, 4);
 * graph.add_edge(1, 7, 11);
 * graph.add_edge(0, 7, 8);
 * graph.add_edge(1, 2, 8);
 * graph.add_edge(2, 3, 7);
 * graph.add_edge(2, 8, 2);
 * graph.add_edge(8, 6, 6);
 * graph.add_edge(7, 8, 7);
 * graph.add_edge(2, 5, 4);
 * graph.add_edge(6, 5, 2);
 * graph.add_edge(3, 5, 14);
 * graph.add_edge(3, 4, 9);
 * graph.add_edge(5, 4, 10);
*/