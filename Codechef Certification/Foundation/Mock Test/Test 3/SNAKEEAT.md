# Problem
The Chef has acquired a vicious bunch of snakes, and these snakes are ever hungry and end up eating each other. In particular, each snake i has a length **L<sub>i</sub>**, whose initial value is given to you. A snake can eat any other snake which is not longer than itself. That is, snake i can eat snake j (i ≠ j), if **L<sub>i</sub>** ≥ **L<sub>j</sub>**. And when a snake eats another snake, its length increases by 1. That is, **L<sub>i</sub>** increases by 1. A snake can eat multiple other snakes.

The Chef doesn't care about snakes eating each other. All he wants is to have as many snakes as possible, which are at least some particular lengths long. You are given **Q** values: **K<sub>1</sub>, K<sub>2</sub>, .., K<sub>Q</sub>**. Treat each of them independently and output the answer for each. That is, for each **K<sub>i</sub>**, assume that you start out from the beginning with all the snakes alive and the lengths as the initial values given in the input, and find out the maximum number of snakes you can get whose length is at least **K<sub>i</sub>**.

### Input

*   The first line contains an integer **T**, which is the number of testcases. The description of each testcase follows.
*   The first line of each testcase contains two integers: **N** and **Q**, which denote the number of snakes initially, and the number of queries, respectively.
*   The second line contains **N** space separated integers: **L<sub>1</sub>, L<sub>2</sub>, .., L<sub>N</sub>**, the initial lengths of the snakes.
*   The i-th of the next **Q** lines contains a single integer, **K<sub>i</sub>**.

### Output

*   For each testcase, output **Q** lines, the i-th of which should have a single integer: The maximum number of snakes the Chef can get which are of length at least **K<sub>i</sub>**.

### Constraints

*   1 ≤ **T** ≤ 5
*   1 ≤ **N, Q** ≤ 10<sup>5</sup>
*   1 ≤ **L<sub>i</sub>** ≤ 10<sup>9</sup>
*   1 ≤ **K<sub>i</sub>** ≤ 10<sup>9</sup>

### Example
>Input:<br/>
2<br/>
5 2<br/>
21 9 5 8 10<br/>
10<br/>
15<br/>
5 1<br/>
1 2 3 4 5<br/>
100<br/>

>Output:<br/>
3<br/>
1<br/>
0<br/>

### Explanation

In the first testcase, first query, the second snake (length 9) can eat the fourth snake (length 8), and hence make its length 10. Now, there are four snakes left, and their lengths are {21, 10, 5, 10}. So, we have three snakes with length ≥ 10: Two snakes of length 10 and one snake of length 21. This is the best you can do.

In the second query, no matter what happens, you cannot get more than one snake of length ≥ 15.

In the second testcase, no matter what happens, you cannot get any snake of length ≥ 100. Hence the answer is 0.

#### `<Problem link>` : <https://www.codechef.com/FLMOCK03/problems/SNAKEEAT>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  The brute force solution is pretty straight forward. We sort the snakes based on their length. We ignore the snakes which are already greater than equal to k as their increase in size won't affect our answer. We then target the snakes having `l<k` and try to feed them `k-l` smallest snakes available. We choose the smallest snake available as it has the least chances of reaching k. If we can feed `k-l` snakes then we increment our answer or else we stop.

The Time Complexity of the above solution is `O(NlogN + Q*N)`.

We can do better by binary searching for two things
- The number of snakes greater than equal to k.
- The number of snakes that can reach k.

The first part can be handles by finding lower_bound of k. The snake having length less than k is at `index = lower_bound-1` then we have `n - index - 1` snakes greater than equal to k.

For the second part, we binary search in the range of [0, index] on indices considering the left portion to be eaten by snakes to make all the snakes in the right portion to reach k. If possible then we try to make more snakes reach k by binary searching in the left portion or else by binary searching in the right portion.

Consider mid to be the index under consideration. Now how do we decide if we can make [mid+1, index] snakes reach k using [0, mid] snakes. We use prefix sum array to get the sum of length of snakes in [mid+1, index]. We calculate the number of snakes in between [mid+1, index] using `no = index-mid`. The required number of snakes will be k\*no - &sum; l[i] where i: [mid+1, index]. If we have more than or equal to the required snakes(indices) in the left portion [0, mid] then we can make snakes reach k or else not. 

The time complexity of this solution is `O(NlogN + QlogN)`.
  
  ### References
  
  >https://discuss.codechef.com/questions/98802/snakeeat-editorial<br/>
  
</details>
