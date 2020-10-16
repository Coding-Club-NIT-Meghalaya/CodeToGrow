#pragma once

/**
 * Author : Shanborlang Suja
 * NIT Meghalaya
*/

/**
 * The below shortest_path() function is implemented using Dijkstra algorithm
 * 
 * Pseudocode:
 * 
 * function Dijkstra(Graph, source):
 *      dist[source] <- 0       // Initialization
 *      create vertex set Q
 *      for each vertex v in Graph
 *          if v != source
 *              dist[v] <- INF              // Unknown distance from source to v
 *               prev[v] <- UNDEFINED          // Predecessor of v
 *          Q.add_with_priority(v, dist[v])
 * 
 *      while Q is not empty:             // The main loop
 *          u <- Q.extract_min()         // Remove and return best vertex
 *          for each neighbor v of u:   // only v that is still in Q
 *              alt <- dist[u] + length(u, v)
 *              if alt < dist[u]
 *                  dist[v] <- alt
 *                  prev[v] <- u
 *                  Q.decrease_priority(v, alt)
 * 
 *      return dist[], prev[]
 * 
 * 
 * The above pseudocode is refer from https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm
*/

#include "graph.hpp"

#include <set>
#include <algorithm>
#include <iostream>

template<typename Vertex, typename Weight>
void shortest_path(Graph<Vertex, Weight> const& g, Vertex const source, std::map<Vertex, Weight>& min_distance, std::map<Vertex, Vertex>& previous) {
    auto const n = g.vertex_count();    // Get the number of vertex
    auto const vertices = g.vertices(); // Get the vertices

    min_distance.clear();
    for(auto const& v : vertices) {
        min_distance[v] = Graph<Vertex, Weight>::INF;
    }
    min_distance[source] = 0;

    previous.clear();

    std::set<std::pair<Weight, Vertex>> vertex_queue;
    vertex_queue.insert(std::make_pair(min_distance[source], source));

    while(!vertex_queue.empty()) {
        auto [dist, u] = *(vertex_queue.begin());
        
        vertex_queue.erase(std::begin(vertex_queue));

        auto const& neighbors = g.neighbors(u);
        for(auto const& [v, w] : neighbors) {
            auto dist_via_u = dist + w;
            if(dist_via_u < min_distance[v]) {
                vertex_queue.erase(std::make_pair(min_distance[v], v));

                min_distance[v] = dist_via_u;
                previous[v] = u;
                vertex_queue.insert(std::make_pair(min_distance[v], v));
            }
        }
    }
}

// Some helper functions
template<typename Vertex>
void build_path(std::map<Vertex, Vertex> const& prev, Vertex const v, std::vector<Vertex>& result) {
    result.push_back(v);

    auto pos = prev.find(v);
    if(pos == std::end(prev)) return;

    build_path(prev, pos->second, result);
}

template<typename Vertex>
std::vector<Vertex> build_path(std::map<Vertex, Vertex> const& prev, Vertex const v) {
    std::vector<Vertex> result;
    build_path(prev, v, result);
    std::reverse(std::begin(result), std::end(result));
    return result;
}

template<typename Vertex>
void print_path(std::vector<Vertex> const& path) {
    for(size_t i = 0; i < path.size(); i++) {
        std::cout << path[i];
        if(i < path.size() - 1) std::cout << " -> ";
    }
}