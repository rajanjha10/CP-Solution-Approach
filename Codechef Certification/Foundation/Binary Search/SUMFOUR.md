# Problem
The SUM problem can be formulated as follows: given four lists A, B, C, D of integer values, compute how many quadruplet (a, b, c, d ) belongs to A x B x C x D are such that a + b + c + d = 0 . In the following, we assume that all lists have the same size n

### Input

The first line of the input file contains the size of the lists n (this value can be as large as 4000). We then have n lines containing four integer values (with absolute value as large as 2<sup>28</sup> ) that belong respectively to A, B, C and D .

(**Edited:** n <= 2500)

### Output

Output should be printed on a single line.

### Example
>Input:<br/>
6<br/>
-45 22 42 -16<br/>
-41 -27 56 30<br/>
-36 53 -37 77<br/>
-36 30 -75 -46<br/>
26 -38 -10 62<br/>
-32 -54 -6 45<br/>

>Output:<br/>
5<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/SUMFOUR/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We can rewrite the equation as `-(a+b) = (c+d)`.

  We then generate **-(a+b)** and **c+d** for all pairs of values of a, b, c and d and store then in sumsab and sumscd respectively.

  We then binary search for all the values in sumsab and find the count of the values that are equal to it in sumscd and update our answer.
   
</details>
