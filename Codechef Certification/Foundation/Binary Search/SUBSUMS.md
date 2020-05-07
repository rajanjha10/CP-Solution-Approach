# Problem
Given a sequence of N (1 ≤ N ≤ 34) numbers S<sub>1</sub>, ..., S<sub>N</sub> (-20,000,000 ≤ S<sub>i</sub> ≤ 20,000,000), determine how many subsets of S (including the empty one) have a sum between A and B (-500,000,000 ≤ A ≤ B ≤ 500,000,000), inclusive.

### Input

The first line of standard input contains the three integers N, A, and B. The following N lines contain S<sub>1</sub> through S<sub>N</sub>, in order.

### Output

Print a single integer to standard output representing the number of subsets satisfying the above property. Note that the answer may overflow a 32-bit integer.

### Example
>Input:<br/>
3 -1 2<br/>
1<br/>
-2<br/>
3<br/>

>Output:<br/>
5<br/>

### Explanation
The following 5 subsets have a sum between -1 and 2:

*   0 = 0 (the empty subset)
*   1 = 1
*   1 + (-2) = -1
*   \-2 + 3 = 1
*   1 + (-2) + 3 = 2

#### `<Problem link>` : <https://www.spoj.com/problems/SUBSUMS/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We will use the meet in the middle approach to solve this problem.

  We divide the input into two sets of size n/2 and n-n/2. We then generate the sums of all the subsets in each set. 

  We combine the result by combining the sums and checking whether they satisfy a <= sum <=b. 

  We do it by first sorting the sums and then we binary search for all the values to find their corresponding values which when added satisfy a<= sum_set_1 + sum_set_2 <=b.
   
  ### References
  
  >https://www.geeksforgeeks.org/meet-in-the-middle/<br/>
  
</details>
