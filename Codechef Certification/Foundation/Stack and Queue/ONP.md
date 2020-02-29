# Problem
Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).

### Input
t [the number of expressions <= **100**]
expression [length <= **400**]
[other expressions]
Text grouped in [ ] does not appear in the input file.

### Output
The expressions in RPN form, one per line.

### Example
>Input:<br/>
3<br/>
(a+(b*c))<br/>
((a+b)*(z+x))<br/>
((a+t)*((b+(a+c))^(c+d)))<br/>

>Output:<br/>
abc*+<br/>
ab+zx+*<br/>
at+bac++cd+^*<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/ONP/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  All the operators enclosed within brackets appear after it in the output. So we use a stack to store all the operators including the opening brace `(`. The operands appear in the output in the same order as in the input. Once we encounter the closing brace `)`, we pop all the operands upto the nearest `(` and including the `(`. The obtained expression is the required ans.  
  
</details>
