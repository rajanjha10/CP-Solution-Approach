# Problem
Given an array **A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>**, count the number of subarrays of array **A** which are non-decreasing.  
A subarray **A\[i, j\]**, where **1 ≤ i ≤ j ≤ N** is a sequence of integers **A<sub>i</sub>, A<sub>i+1</sub>, ..., A<sub>j</sub>**.

A subarray **A\[i, j\]** is non-decreasing if **A<sub>i</sub> ≤ A<sub>i+1</sub> ≤ A<sub>i+2</sub> ≤ ... ≤ A<sub>j</sub>**. You have to count the total number of such subarrays.

### Input

The first line of input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows.

The first line of each test case contains a single integer **N** denoting the size of array.

The second line contains **N** space-separated integers **A<sub>1</sub>**, **A<sub>2</sub>**, ..., **A<sub>N</sub>** denoting the elements of the array.

### Output

For each test case, output in a single line the required answer.

### Constraints

*   **1** ≤ **T** ≤ **5**
*   **1** ≤ **N** ≤ **10<sup>5</sup>**
*   **1** ≤ **A<sub>i</sub>** ≤ **10<sup>9</sup>**

### Subtasks

*   **Subtask 1** (20 points) : **1** ≤ **N** ≤ **100**
*   **Subtask 2** (30 points) : **1** ≤ **N** ≤ **1000**
*   **Subtask 3** (50 points) : Original constraints

### Example
>Input:<br/>
2<br/>
4<br/>
1 4 2 3<br/>
1<br/>
5<br/>

>Output:<br/>
6<br/>
1<br/>

### Explanation
**Example case 1.**  
All valid subarrays are **A\[1, 1\], A\[1, 2\], A\[2, 2\], A\[3, 3\], A\[3, 4\], A\[4, 4\]**.  
Note that singleton subarrays are identically non-decreasing.

**Example case 2.**  
Only single subarray **A\[1, 1\]** is non-decreasing.

#### `<Problem link>` : <https://www.codechef.com/FLMOCK04/problems/SUBINC>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We create an array dp[] which stores the size of the subarray at index i for all 0 <= i < N.

  We initialize our array with all 1 to show subarray of size 1. We traverse from left to right and if the current value is greater than equal to it's previous value we set `dp[i] = dp[i-1] + 1`.

  Finally we take the sum of all the values in dp[].
  
  ### References
  
  >http://discuss.codechef.com/problems/SUBINC<br/>
  
</details>
