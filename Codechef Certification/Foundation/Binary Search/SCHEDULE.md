# Problem
Chef is a well-known chef, and everyone wishes to taste his dishes.

As you might know, cooking is not an easy job at all and cooking everyday makes the chef very tired. So, Chef has decided to give himself some days off.

Chef has made a schedule for the next **N** days: On **i**\-th day if **A**<sub>i</sub> is equal to **1** then Chef is going to cook a delicious dish on that day, if **A**<sub>i</sub> is equal to **0** then Chef is going to rest on that day.

After Chef made his schedule he discovered that it's not the best schedule, because there are some big blocks of consecutive days where Chef will cook which means it's still tiring for Chef, and some big blocks of consecutive days where Chef is going to rest which means chef will be bored doing nothing during these days.

Which is why Chef has decided to make changes to this schedule, but since he doesn't want to change it a lot, he will flip the status of at most **K** days. So for each day which Chef chooses, he will make it **1** if it was **0** or he will make it **0** if it was **1**.

Help Chef by writing a program which flips the status of at most **K** days so that the size of the maximum consecutive block of days of the same status is minimized.

### Input

The first line of the input contains an integer **T** denoting the number of test cases.

The first line of each test case contains two integers: **N** denoting the number of days and **K** denoting maximum number of days to change.

The second line contains a string of length **N** , of which the **i**\-th character is **0** if chef is going to rest on that day, or **1** if chef is going to work on that day

### Output

For each test case, output a single line containing a single integer, which is the minimum possible size of maximum block of consecutive days of the same status achievable.

### Constraints

*   **1** ≤ **T** ≤ **11,000**
*   **1** ≤ **N** ≤ **10<sup>6</sup>**
*   The sum of **N** in all test-cases won't exceed **10<sup>6</sup>**.
*   **0** ≤ **K** ≤ **10<sup>6</sup>**
*   **0** ≤ **A<sub>i</sub>** ≤ **1**

### Subtasks

*   Subtask #1 (20 points): **N** ≤ 10
*   Subtask #2 (80 points): Original Constraints

### Example
>Input:<br/>
2<br/>
9 2<br/>
110001111<br/>
4 1<br/>
1001 <br/>

>Output:<br/>
2<br/>
2<br/>

### Explanation

**Example case 1:** The answer is 2 because we can change the string to: 110101011

**Example case 2:** If we don't change the input string at all, the answer will be 2. It is the best value we can achieve under the given conditions.

#### `<Problem link>` : <https://www.codechef.com/problems/SCHEDULE>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  There are only two cases when it is possible to get a block of size 1, when we can convert the input string in format 101010.. or 010101...

We simply eliminate those cases by finding out if we can convert our given string into any one of the above format. If we can the answer is one.

Else we Binary Search for all the values of block sizes in range 2 to n to check if it is possible to flip at most k bits such that the maximum size of continuous block is `mid = (low+high)/2`. If we can then we search for smaller possible block size or for larger possible block size.

The crucial observation is that for any L and any block of A with length M, `M /(L+1)` flips are necessary to convert that block into a substring without blocks of length greater than L. We can use it to find the cost of conversion of an input string into blocks of size at most L.

The solution works because if it is not possible to use at most K swaps to get A with L=X, then it is also not possible to use at most K swaps to get A with L\<X where X is desired block size after at most K flips and A is overall block length.
  
  ### References
  
  >https://discuss.codechef.com/questions/92702/schedule-editorial<br/>
  
</details>
