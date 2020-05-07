# Problem
You have N (3 ≤ N ≤ 2,000) wooden sticks, which are labeled from 1 to N. The i-th stick has a length of L<sub>i</sub> (1 ≤ L<sub>i</sub> ≤ 1,000,000). Your friend has challenged you to a simple game: you will pick three sticks at random, and if your friend can form a triangle with them (degenerate triangles included), he wins; otherwise, you win. You are not sure if your friend is trying to trick you, so you would like to determine your chances of winning by computing the number of ways you could choose three sticks (regardless of order) such that it is impossible to form a triangle with them.

### Input

The input file consists of multiple test cases. Each test case starts with the single integer N, followed by a line with the integers L<sub>1</sub>, ..., L<sub>N</sub>. The input is terminated with N = 0, which should not be processed.

### Output

For each test case, output a single line containing the number of triples.

### Example
>Input:<br/>
3<br/>
4 2 10<br/>
3<br/>
1 2 3<br/>
4<br/>
5 2 9 6<br/>
0<br/>

>Output:<br/>
1<br/>
0<br/>
2<br/>

### Explanation
For the first test case, 4 + 2 < 10, so you will win with the one available triple. For the second case, 1 + 2 is equal to 3; since degenerate triangles are allowed, the answer is 0.

#### `<Problem link>` : <https://www.spoj.com/problems/NOTATRI/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  The sum of two sides of a triangle should be greater than the third. It can be equal if the triangle is degenerate which is allowed in this problem

  We sort the given input first.

  Then for all pairs of sticks **a** and **b** we try to find the third stick such that `c>a+b`. If such a **c** exists then we can't form a triangle with those three sticks.

  We binary search to find the count of values greater a+b and update our answer with count.
   
</details>
