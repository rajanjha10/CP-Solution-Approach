# Problem
You are given a string **S** of length **N** consisting only of **0**s and **1**s. You are also given an integer **K**.

You have to answer **Q** queries. In the **i**<sup>th</sup> query, two integers **L<sub>i</sub>** and **R<sub>i</sub>** are given. Then you should print the number of substrings of **S\[L, R\]** which contain at most **K** **0**s and at most **K** **1**s where **S\[L, R\]** denotes the substring from **L**<sup>th</sup> to **R**<sup>th</sup> characters of the string **S**.  
In other words, you have to count number of pairs **(i, j)** of integers such that **L ≤ i ≤ j ≤ R** such that no character in substring **S\[i, j\]** occurs more than **K** times.

### Input
The first line of input contains an integer **T**, denoting the number of test cases. Then **T** test cases follow.

The first line of each test case contains three space-separated integers **N**, **K** and **Q** as described in the problem. The second line contains a string **S** of length **N**. Then the next **Q** lines describe the query, where the **i**<sup>th</sup> line of them contains two space-separated integers **L<sub>i</sub>** and **R<sub>i</sub>**.

### Output
For each query, print the required answer in a single line.

### Constraints and Subtasks

*   **1 ≤ T ≤ 10<sup>5</sup>**
*   **1 ≤ K ≤ N ≤ 10<sup>5</sup>**
*   **1 ≤ Q ≤ 10<sup>5</sup>**
*   **1 ≤ L<sub>i</sub> ≤ R<sub>i</sub> ≤ N**
*   Sum of **N** over all test cases in one test file does not exceed **10<sup>5</sup>**
*   Sum of **Q** over all test cases in one test file does not exceed **10<sup>5</sup>**
*   **S** consists only of **0**s and **1**s.

  
**Subtask 1: 10 points**

*   Sum of **N** over all test cases in one test file does not exceed **100**

  
**Subtask 2: 10 points**

*   **Q = 1**
*   **1 ≤ K ≤ min(5, N)**

  
**Subtask 3: 20 points**

*   **1 ≤ Q ≤ 10**

  
**Subtask 4: 60 points**

*   Original constraints.


### Example
>Input:<br/>
1<br/>
8 2 3<br/>
01110000<br/>
1 4<br/>
2 4<br/>
5 8<br/>

>Output:<br/>
8<br/>
5<br/>
7<br/>

### Explanation
**Query 1:** Consider substring **P = S\[1, 4\] = "0111"**.  
Out of **10** total substrings of **P**, substrings **P\[1, 4\]** and **P\[2, 4\]** are not valid because both contain more than two **1**s.  
Other substrings contains at most two **0**s and at most two **1**s, thus the answer is **8**.

**Query 2:** Consider substring **P = S\[2, 4\] = "111"**.  
Out of **6** total substrings of **P**, substrings **P\[1, 3\]** is not valid because it contains more than two 1s.

**Query 3:** Consider substring **P = S\[5, 8\] = "0000"**.  
Out of **10** total substrings of **P**, substrings **P\[1, 3\]**, **P\[1, 4\]** and **P\[2, 4\]** are not valid because all contain more than two **0**s.

#### `<Problem link>` : <https://www.codechef.com/problems/STRSUB>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We will mark some important observations:
- valid strings are at most 2K in length.
- The substring of a valid string is also valid
- The superstring of any invalid string is also invalid

Therefore, if S[i, j] is valid, then S[i+1, j] is also valid. Keeping this in mind we will calculate for each index **i** the farthest index **j** which forms a valid string from S[i..j]. We will not check for it's substrings as they are also valid.

We use an array far[] which stores index **j+1** for every **i** such that **j** is the farthest index of a valid string from **i**. We can use this index to calculate the count of all valid strings from **L** to **R**. The pseudocode is as follows:

```cpp
    answer = 0
    for i in L...R
        j = min(far[i], R+1)
        answer += j - i
    return answer
```

The expression `j-i` gives the count of different sizes of strings that can be formed from index **i**. 

If `far[i] = j` then it means S[i, j-1] is valid. When **i** increases to **i+1**, we know that the string S[i+1, j-1] is also valid (observation 2) and far[i+1] has the only possibility of being greater than or equal to **j**. Hence, far[] is monotonically non decreasing. 

Using this, we can get rid of the min in expression `j = min(far[i], R+1)` by calculating maximum index **k** such that far[k]<=R using binary search in `O(logN)`.
Hence, we can use `j = far[i]` for i: (L...k)  and `j = R+1` for i: (k+1...R).

We can find out the sum of far[i] between any two ranges using prefix sum. We first add the sum of far[i] for all i: (L...K) and then we add the sum of R for all i: (k+1..R) to the answer. Finally we subtract the sum of all i's from our answer. The overall expression becomes:

`answer = sumfar[k] - sumfar[L-1] + (R-k)*(R+1) - (R*(R+1)/2 - L*(L-1)/2)`

We can answer each query in `O(logN)` with `O(N)` preprocessing. Hence,the overall time complexity is `O(N + QlogN)`.
   
  ### References
  
  >https://discuss.codechef.com/questions/66064/strsub-editorial<br/>
  
</details>
