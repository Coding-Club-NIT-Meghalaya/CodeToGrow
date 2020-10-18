## Question
1. You are given a number n and a number m representing number of rows and columns in a maze.
2. You are standing in the top-left corner and have to reach the bottom-right corner. 
3. In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..). 
4.  write getMazePath function to get the list of all paths that can be used to move from top-left to bottom-right.
Use sample input and output to take idea about output.

## Input Format
A number n
A number m
## Output Format
Contents of the arraylist containing paths as shown in sample output
## Constraints
0 <= n <= 10
0 <= m <= 10
## Sample Input
2
2
## Sample Output
[h1v1, v1h1, d1]