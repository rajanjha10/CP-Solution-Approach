# Problem
Given a string **S** consisting of only **1s** and **0s**, find the number of substrings which start and end both in **1**.
In this problem, a substring is defined as a sequence of continuous characters **S<sub>i</sub>, S<sub>i</sub>+1, ..., S<sub>j</sub>** where **1 ≤ i ≤ j ≤ N**.

### Input
First line contains **T**, the number of testcases. Each testcase consists of **N**(the length of string) in one line and string in second line.

### Output
For each testcase, print the required answer in one line.

### Constraints
* **1 ≤ T ≤ 10<sup>5</sup>**
* **1 ≤ N ≤ 10<sup>5</sup>**
* Sum of **N** over all testcases ≤ **10<sup>5</sup>**

### Example
>Input:<br/>
2<br/>
4<br/>
1111<br/>
5<br/>
10001<br/>

>Output:<br/>
10<br/>
3<br/>

### Explanation
#test1: All substrings satisfy.

#test2: Three substrings S[1,1], S[5,5] and S[1,5] satisfy.

#### `<Problem link>` : <https://www.codechef.com/problems/CSUB>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We count the number of **1s** in the entire string, call it **n**. The total number of ways to consider all the substrings starting and ending with **1** can be given by `(n*(n+1))/2`.  
  
  ### References
  
  >https://discuss.codechef.com/t/csub-editorial/6299<br/>
  
</details>
