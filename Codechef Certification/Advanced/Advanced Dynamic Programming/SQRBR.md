# Problem
You are given:

*   a positive integer n,
*   an integer k, 1<=k<=n,
*   an increasing sequence of k integers 0 < s<sub>1</sub> < s<sub>2</sub> < ... < s<sub>k</sub> <= 2n.

What is the number of proper bracket expressions of length 2n with opening brackets appearing in positions s<sub>1</sub>, s<sub>2</sub>,...,s<sub>k</sub>?

### Illustration

Several proper bracket expressions:

    [[]][[[]][]] 
    [[[][]]][][[]]

An improper bracket expression:

    [[[][]]][]][[]]

There is exactly one proper expression of length 8 with opening brackets in positions 2, 5 and 7.

### Task

Write a program which for each data set from a sequence of several data sets:

*   reads integers n, k and an increasing sequence of k integers from input,
*   computes the number of proper bracket expressions of length 2n with opening brackets appearing at positions s<sub>1</sub>, s<sub>2</sub>,...,s<sub>k</sub>,
*   writes the result to output.

### Input
The first line of the input file contains one integer d, 1 <= d <= 10, which is the number of data sets. The data sets follow. Each data set occupies two lines of the input file. The first line contains two integers n and k separated by single space, 1 <= n <= 19, 1 <= k <= n. The second line contains an increasing sequence of k integers from the interval [1;2n] separated by single spaces.

### Output
The i-th line of output should contain one integer - the number of proper bracket expressions of length 2n with opening brackets appearing at positions s<sub>1</sub>, s<sub>2</sub>,...,s<sub>k</sub>.

### Example
>Input:<br/>
5 <br/>
1 1 <br/>
1 <br/>
1 1 <br/>
2 <br/>
2 1 <br/>
1 <br/>
3 1 <br/>
2 <br/>
4 2 <br/>
5 7<br/>

>Output:<br/>
5 <br/>
1 1 <br/>
1 <br/>
1 1 <br/>
2 <br/>
2 1 <br/>
1 <br/>
3 1 <br/>
2 <br/>
4 2 <br/>
5 7<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/SQRBR/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
