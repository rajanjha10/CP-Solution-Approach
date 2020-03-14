# Problem
To protect people from evil, a long and tall wall was constructed a few years ago. But just a wall is not safe, there should also be soldiers on it, always keeping vigil. The wall is very long and connects the left and the right towers. There are exactly **N** spots (numbered 1 to **N**) on the wall for soldiers. The K<sup>th</sup> spot is K miles far from the left tower and (**N**+1-K) miles from the right tower.

Given a permutation of spots P of {1, 2, ..., **N**}, soldiers occupy the **N** spots in that order. The P[i]<sup>th</sup> spot is occupied before the P[i+1]<sup>th</sup> spot. When a soldier occupies a spot, he is connected to his nearest soldier already placed to his left. If there is no soldier to his left, he is connected to the left tower. The same is the case with right side. A connection between two spots requires a wire of length equal to the distance between the two.

The realm has already purchased a wire of **M** miles long from Nokia, possibly the wire will be cut into smaller length wires. As we can observe, the total length of the used wire depends on the permutation of the spots P. Help the realm in minimizing the length of the unused wire. If there is not enough wire, output -1.

### Input
First line contains an integer **T** (number of test cases, 1 ≤ **T** ≤ 10 ). Each of the next **T** lines contains two integers **N** **M**, as explained in the problem statement (1 ≤ **N** ≤ 30 , 1 ≤ **M** ≤ 1000).

### Output
For each test case, output the minimum length of the unused wire, or -1 if the the wire is not sufficient.

### Example
>Input:<br/>
4<br/>
3 8<br/>
3 9<br/>
2 4<br/>
5 25

>Output:<br/>
0<br/>
0<br/>
-1<br/>
5

### Explanation
In the 1st case, for example, the permutation P = {2, 1, 3} will use the exact 8 miles wires in total.

In the 2nd case, for example, the permutation P = {1, 3, 2} will use the exact 9 miles wires in total.

To understand the first two cases, you can see the following figures:

![](http://www.codechef.com/download/NOKIA1.png)

![](http://www.codechef.com/download/NOKIA2.png)

In the 3rd case, the minimum length of wire required is 5, for any of the permutations {1,2} or {2,1}, so length 4 is not sufficient.

In the 4th case, for the permutation {1, 2, 3, 4, 5} we need the maximum length of the wire = 20. So minimum possible unused wire length = 25 - 20 = 5.

#### `<Problem link>` : <https://www.codechef.com/problems/NOKIA>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The problem is less recursion and more concept. Since **N** is less we can do simple brute force and the solution should pass(**Hopefully**). If you want the brute force implementation or if you have implemented it using brute force then comment down below.
  
  While solving the question on paper you will Identify that we can get any value in between the maximum and minimum value of sum by just using another permutation.
  
  Consider the table below: rows indicate n and columns indicate the number which is selected first
  |   | 1  | 2  | 3  | 4  |
  | ------------ | ------------ | ------------ | ------------ | ------------ |
  |  1 | 2  |   |   |   |
  |  2 |  5 | 5  |   |   |
  |  3 |  9 |  8 | 9  |   |
  |  4 | 14  | 12  | 12  | 14  |

  For ex: we can get sum 13 when **N**=4 (which is not in the table) by using P={4, 2, 3, 1}.
  
  Consider:
  - case 1 : if n==1, 
    max(1) = min(1) = 2;
  - case 2 : if n==2, 
    max(2) = min(2) = 5;
  - case 3 : if n==3, 
    max(3) = 9; min(3) = 8;

  So for **N**>3 if we go for solution then after dividing the problem we will surely reach some level where we have to solve for **N**=3 and then we will be able to create the difference of 1 (if all other branches are remained constant). Hence we can get all the numbers in [min(n),max(n)].
  
  Hence we need to find out the smallest and the largest value of sum and then we can deduce our answer accordingly.
  
  Consider the array A for **N** = 9.
  Initially A = |, 0, 0, 0, 0, 0, 0, 0, 0, 0, | <br/>
  and we need to fill the array with 1s in some order. Suppose if we set A[4] = 1, then A = |, 0, 0, 0, 1, 0, 0, 0, 0, 0, | and length     of wire on left side = 4, length of wire on right side = 6, so we need wire of length 4 + 6 = 10.

  Note that if we place the first soldier among **N** spots at any index, we need wire of length (**N**+1). We can divide the problem into same sub-problems with smaller range. If we take n spots, and choose the spot from either end, then the rest of the problem is for `n-1` spots.
  
  We can form the above table recursively and then find the min and max values in the table.
  We divide the problem into two subproblems of size `i-1` and `n-i` and add (n+1) to res for i<sup>th</sup> problem. We then solve the   subproblems recursively.
  
  Refere following pseduocode:
  ```cpp
    int make_table(int n){
      int res=0;
      for(int i=1; i<=n; i++){
        res = cal(i-1) + cal(n-i) + n+1;
        table[n][i] = res;
      }
      return res;
    }
  ```
  
  If you focus, you can notice that if we want to get the lowest value of the range, we have to divide the sub-problem into smallest possible parts (evenly). In one step having n spots,we can divide it into two sub-problems of ceil(n/2) spots.
  Example: for n = 3, 2 1 3 or 3 1 2 is a possible permutation for getting the minimum sum. We will get the minimum sum when we place soldiers at `n/2` in each subproblem.
  
  We will get the highest value of range when the permutation is sorted i.e P={1, 2, 3, ...., **N**}. So we can get maximum sum when we divide the problem into `n-1` subproblem and add `n+1` for the i<sup>th</sup> problem.
  
  For Finding the answer using min_sum and max_sum:
  - If `M<min_sum` then return **-1**
  - If `M<=max_sum` then return **0** (ALL values between min_sum and max_sum are possible to generate so we can get sum==**M**)
  - return `M-max_sum`
  
  ### References
  
  >https://discuss.codechef.com/t/nokia-editorial/314/9<br/>
  
</details>
