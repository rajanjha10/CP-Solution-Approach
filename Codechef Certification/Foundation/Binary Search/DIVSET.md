# Problem
You are given **N** integers. In each step you can choose some **K** of the remaining numbers and delete them, if the following condition holds: Let the **K** numbers you've chosen be **a<sub>1</sub>**, **a<sub>2</sub>**, **a<sub>3</sub>**, ..., **a<sub>K</sub>** in sorted order. Then, for each i ≤ **K** - 1, **a<sub>i+1</sub>** must be greater than or equal to **a<sub>i</sub> \* C**.

You are asked to calculate the maximum number of steps you can possibly make.

### Input

*   The first line of the input contains an integer **T**, denoting the number of test cases. The description of each testcase follows.
*   The first line of each testcase contains three integers: **N**, **K**, and **C**
*   The second line of each testcase contains the **N** initial numbers

### Output

For each test case output the answer in a new line.

### Subtasks

**Subtask #1** (40 points):

*   1 ≤ **N** ≤ 10<sup>3</sup>
*   1 ≤ Sum of **N** over all test cases ≤ 10<sup>3</sup>

**Subtask #2** (60 points):

*   Original constraints

### Constraints

*   1 ≤ **T** ≤ 100
*   1 ≤ **N** ≤ 3 \* 10<sup>5</sup>
*   1 ≤ **K** ≤ 64
*   2 ≤ **C** ≤ 50
*   1 ≤ **a<sub>i</sub>** ≤ 10<sup>18</sup>
*   1 ≤ Sum of **N** over all test cases ≤ 3 \* 10<sup>5</sup>

### Example
>Input:<br/>
2<br/>
6 3 2<br/>
4 1 2 2 3 1<br/>
6 3 2<br/>
1 2 2 1 4 4<br/>

>Output:<br/>
1<br/>
2<br/>

### Explanation
**Testcase 1:** You can make one step by choosing **{1, 2, 4}**.

**Testcase 2:** You can make one step by choosing **{1, 2, 4}** and another by choosing **{1, 2, 4}**.

#### `<Problem link>` : <https://www.codechef.com/problems/DIVSET>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  The basic idea is to binary search in the range of all possible values and find the maximum.

In each iteration of binary search we will check if we can make `x = mid = low + (high-low)/2` valid sets. We will use a eval function which tells us if we are able to form x number of valid sets.

We make use of two arrays:
- last[x], which stores last element of each set as we only need the last element for deciding the inclusion - exclusion of other elements in the set
- count[x], which stores the count of elements in set.

We sort the array in increasing order. If there is no element in the set or if the (current element) `a[i] >= last[index]*c` (last element of the set multiplied by c) then we will include a[i] in our set represented by index. If not then we will simply ignore the element as it cannot be included in any of the sets.

The reason why this works is at every iteration we choose the minimum value for index and hence last[index]<=last[index+1]<=.....last[x] i.e last is in increasing order (when count[i] is same for all i: (index....x)). Hence if a[i] cannot be included in a set represented by index as it is smaller than last[index]\*c then it will be smaller for all last[i]\*c where i: (index+1, x) and hence cannot be included in any set.

Each time we add an element to the set we increment count[index] and when `count[index] >= k` then we increment the valid_sets counter. When `valid_sets==x` we return true.
   
  ### References
  
  >https://discuss.codechef.com/problems/DIVSET<br/>
  
</details>
