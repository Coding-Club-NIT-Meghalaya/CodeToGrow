<h3>Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”</h3>

<p><b>Input:</b>
The first line of input contains an integer T denoting the number of test cases.  Each test case consists of a string of expression, in a separate line.
</p>
<p><b>Output:</b>
Print 'balanced' without quotes if the pair of parenthesis is balanced else print 'not balanced' in a separate line.</p>
<pre>
Constraints:
1 ≤ T ≤ 100
1 ≤ |s| ≤ 105

Example:
Input:
3
{([])}
()
([]

Output:
balanced
balanced
not balanced</pre>