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
  
   
  
  ### References
  
  >http://discuss.codechef.com/problems/XORSUB<br/>
  
</details>
