# Graphs Alogrithm

---

## **Problem 1**: Shortest path between nodes
Given a network of nodes and the distances between **them**, computes and display the shortest
distance from a specified node to all **others**, as well as the path between the **start** and end **node**.

### **Example**
<p>Consider the following graph as input:[TEST 2]</p>
<img src="https://www.geeksforgeeks.org/wp-content/uploads/Fig-11.jpg" alt="Picture" width="200" height="100"/>

### Output :
<h4> Format : <bold>origin -> destination : cost&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;path</bold></h4>
<pre>
0 -> 0 : 0      0
0 -> 2 : 12     0 -> 1 -> 2
0 -> 3 : 19     0 -> 1 -> 2 -> 3
0 -> 4 : 21     0 -> 7 -> 6 -> 5 -> 4
0 -> 5 : 11     0 -> 7 -> 6 -> 5
0 -> 6 : 9      0 -> 7 -> 6
0 -> 7 : 8      0 -> 7
0 -> 8 : 14     0 -> 1 -> 2 -> 8
</pre>

### Solution : `graph.hpp`, `shortest_path.hpp` and `test.cpp`

