<h3>Given an infix expression in the form of a string str. Conver this infix expression to postfix expression.
<br>
<b>Infix expression:</b> The expression of the form a op b. When an operator is in-between every pair of operands.
<b>Postfix expression:</b> The expression of the form a b op. When an operator is followed for every pair of operands.
</h3>
<p><strong>Input:</strong>
The first line of input contains an integer T denoting the number of test cases. The next T lines contains an infix expression.The expression contains all characters and ^,*,/,+,-.</p>

<p><strong>Output:</strong>
For each testcase, in a new line, output the infix expression to postfix expression.</p>
<pre>
Constraints:
1 <= T <= 100
1 <= length of str <= 103

Example:
Input:
2
a+b*(c^d-e)^(f+g*h)-i
A*(B+C)/D

Output:
abcd^e-fgh*+^*+i-
ABC+*D/
</pre>