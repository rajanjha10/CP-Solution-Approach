# Problem
What is the maximum number of squares of size **2x2** that can be fit in a right angled isosceles triangle of base **B**.
One side of the square must be parallel to the base of the isosceles triangle.
Base is the shortest side of the triangle

### Input
First line contains **T**, the number of test cases.
Each of the following **T** lines contains 1 integer **B**.

### Output
Output exactly **T** lines, each line containing the required answer.

### Constraints
* 1 ≤ **T** ≤ 103
* 1 ≤ **B** ≤ 104

### Example
>Input:<br/>
11<br/>
1<br/>
2<br/>
3<br/>
4<br/>
5<br/>
6<br/>
7<br/>
8<br/>
9<br/>
10<br/>
11<br/>

>Output:<br/>
0<br/>
0<br/>
0<br/>
1<br/>
1<br/>
3<br/>
3<br/>
6<br/>
6<br/>
10<br/>
10<br/>

#### `<Problem link>` : <https://www.codechef.com/problems/TRISQ>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  A right angled isosceles triangle with base **B** will also have height **B**.
  First consider the right angle triangle ΔXYZ, where YZ is the base of triangle. Suppose length of the base is B. If we consider the position of first square with the vertex Y, we will have `B/2 - 1` squares in the base, and we will be left with another isosceles right angle triangle having base length `B-2`.

Let f(B) = Number of squares which can be fitted in triangle having base length **B**.

`f(B) = f(B-2) + (B/2 - 1)`
  
  ### References
  
  >https://discuss.codechef.com/t/trisq-editorial/9632<br/>
  
</details>
