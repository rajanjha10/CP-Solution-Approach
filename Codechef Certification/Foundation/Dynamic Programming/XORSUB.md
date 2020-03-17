# Problem
You have an array of integers **A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>**. The function **F(P)**, where **P** is a subset of **A**, is defined as the XOR (represented by the symbol **⊕**) of all the integers present in the subset. If **P** is empty, then **F(P)**=0.

Given an integer **K**, what is the maximum value of **K ⊕ F(P)**, over all possible subsets **P** of **A**?

### Input
The first line contains **T**, the number of test cases. Each test case consists of **N** and **K** in one line, followed by the array **A** in the next line.

### Output
For each test case, print the required answer in one line.

### Constraints
- **1 ≤ T ≤ 10**
- **1 ≤ K, A<sub>i</sub> ≤ 1000**
- Subtask 1 (30 points):**1 ≤ N ≤ 20**
- Subtask 2 (70 points):**1 ≤ N ≤ 1000**

### Example
>Input:<br/>
1<br/>
3 4<br/>
1 2 3<br/>

>Output:<br/>
7<br/>

### Explanation
Considering all subsets:<br/>
F({}) = 0 ⇒ 4 **⊕** 0 = 4<br/>
F({1}) = 1 ⇒ 4 **⊕** 1 = 5<br/>
F({1,2}) = 3 ⇒ 4 **⊕** 3 = 7<br/>
F({1,3}) = 2 ⇒ 4 **⊕** 2 = 6<br/>
F({1,2,3}) = 0 ⇒ 4 **⊕** 0 = 4<br/>
F({2}) = 2 ⇒ 4 **⊕** 2 = 6<br/>
F({2,3}) = 1 ⇒ 4 **⊕** 1 = 5<br/>
F({3}) = 3 ⇒ 4 **⊕** 3 = 7<br/>
Therefore, the answer is 7.<br/>

#### `<Problem link>` : <https://www.codechef.com/problems/XORSUB>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Since the maximum value of **A<sub>i</sub>** is 1000 and we will get maximum xor when all bits are set the maximum value of the xor can be 1023.
  
  ###### Top Down
  We will use the include exclude recursion along with dp to account for the xor we have already seen. We can start with the first element by including or excluding it in our current xor and then again recurse on the `n-1` subproblem. We will use a 2D array `dp[][]` to mark the index and current xor pair in order to prevent resolving of the same subproblem
  
  ###### Bottom Up
  We can reduce the state space by solving bottom up. We will use array dp[] to account for the xor's which are possible. dp[0] is always possible for an empty set. If **j** (0...1024) exists then `j^a[i]` will also exist for all i = 0..n-1. We will find out all the xor's possible.
  
  We will find the maximum value of `i xor k` for all i's that are possible and print the answer.
  
  ### References
  
  >http://discuss.codechef.com/problems/XORSUB<br/>
  
</details>
