# Problem
You want to build a temple for snakes. The temple will be built on a mountain range, which can be thought of as **n** blocks, where height of i-th block is given by **h**<sub>i</sub>. The temple will be made on a consecutive section of the blocks and its height should start from 1 and increase by exactly 1 each time till some height and then decrease by exactly 1 each time to height 1, i.e. a consecutive section of 1, 2, 3, .. x-1, x, x-1, x-2, .., 1 can correspond to a temple. Also, heights of all the blocks other than of the temple should have zero height, so that the temple is visible to people who view it from the left side or right side.

You want to construct a temple. For that, you can reduce the heights of some of the blocks. In a single operation, you can reduce the height of a block by 1 unit. Find out minimum number of operations required to build a temple.

### Input

The first line of the input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows.

The first line of each test case contains an integer **n**.

The next line contains **n** integers, where the i-th integer denotes **h**<sub>i</sub>

### Output

For each test case, output a new line with an integer corresponding to the answer of that testcase.

### Constraints

*   1 ≤ **T** ≤ 10
*   2 ≤ **n** ≤ 10<sup>5</sup>
*   1 ≤ **h**<sub>i</sub> ≤ 10<sup>9</sup>

### Example
>Input:<br/>
3<br/>
3<br/>
1 2 1<br/>
4<br/>
1 1 2 1<br/>
5<br/>
1 2 6 2 1<br/>

>Output:<br/>
0<br/>
1<br/>
3<br/>

### Explanation
**Example 1**. The entire mountain range is already a temple. So, there is no need to make any operation.

**Example 2**. If you reduce the height of the first block to 0. You get 0 1 2 1. The blocks 1, 2, 1 form a temple. So, the answer is 1.

**Example 3**. One possible temple can be 1 2 3 2 1. It requires 3 operations to build. This is the minimum amount you have to spend in order to build a temple.

#### `<Problem link>` : <https://www.codechef.com/problems/SNTEMPLE>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  Let a magic sequence of order m, denoted also by magic(m), be a sequence of a integers starting from 1 and increasing by 1 up to m and then decreasing from m to 1. For example, the magic sequence of order 5 is: 1, 2, 3, 4, 5, 4, 3, 2, 1. Notice that magic(m) has length 2\*m - 1.

We will binary search over all possible orders of m and find the minimum number of operations.

We will use a eval function which returns true if a temple of order m can be made else it returns false.

We will use two boolean arrays left[] and right[]. We will traverse from left for left[] and from right for right[]. We start with all false values. If at any index **i**, we can form a temple of order m then left[i] or right[i] for left processing or right processing respectively will be set to true.

The pseudocode for left processing is:
```cpp
    for(int i=0, k=0; i<n; i++){
        if(h[i]>=k+1){
            k++;
            if(k==mid){
                left[i] = 1;
                k--;
            }
        }
        else
            k = h[i];
    }
``` 

We can similarly process right[]. If the current height can be made a part of the magic sequence then we increment k else it is set to h[i] as we have to rebuild our magic sequence from h[i]. If the magic sequence becomes of order m then `left[i] = 1` and `k = k-1` to find other indices satisfying the magic sequence of order m.

We then traverse both the arrays left[] and right[]. If for any i, left[i] = right[i] = true then eval returns true else false.
   
  ### References
  
  >https://discuss.codechef.com/questions/99456/sntemple-editorial<br/>
  
</details>
