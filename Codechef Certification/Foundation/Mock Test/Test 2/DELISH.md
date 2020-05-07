# Problem
It's finally summer in Chefland! So our chef is looking forward to prepare some of the best "beat-the-heat" dishes to attract more customers. He summons the Wizard of Dessert to help him with one such dish.

The wizard provides the chef with a sequence of **N** ingredients where the **i<sup>th</sup>** ingredient has a delish value of **D[i]**. The preparation of the dish takes place in two phases.

**Phase 1** : The chef chooses two indices **i** and **j** and adds the ingredients **i, i+1, ..., j** to his dish. He also finds the sum of the delish value in this range i.e **D[i] + D[i+1] + ... + D[j]**.

**Phase 2** : The chef chooses two more indices **k** and **l** and adds the ingredients **k, k+1, ..., l** to his dish. He also finds the sum of the delish value in this range i.e **D[k] + D[k+1] + ... + D[l]**.

Note that **1 ≤ i ≤ j < k ≤ l ≤ N**.

The total delish value of the dish is determined by the absolute difference between the values obtained in the two phases. Obviously, the chef wants to maximize the total delish value for his dish. So, he hires you to help him.

### Input
First line of input contains an integer **T** denoting the number of test cases. For each test case, the first line contains an integer **N** denoting the number of ingredients. The next line contains **N** space separated integers where the **i<sup>th</sup>** integer represents the delish value **D[i]** of the **i<sup>th</sup>** ingredient.

### Output
Print the maximum delish value of the dish that the chef can get.

### Constraints
- **1 ≤ T ≤ 50**
- **2 ≤ N ≤ 10000**
- **-1000000000 (−10<sup>9</sup>) ≤ D[i] ≤ 1000000000 (10<sup>9</sup>)**

### Example
>Input:<br/>
2<br/>
5<br/>
1 2 3 4 5<br/>
4<br/>
1 1 -1 -1<br/>

>Output:<br/>
13<br/>
4<br/>

### Explanation
**Example case 1**.<br/>
Chef can choose **i = j = 1, k = 2, l = 5**.<br/>
The delish value hence obtained is **| (2+3+4+5) − (1) | = 13**.<br/>

**Example case 2**.<br/>
Chef can choose **i = 1, j = 2, k = 3, l = 4**.<br/>
The delish value hence obtained is **| ( ( −1 ) + ( −1 ) ) − ( 1 + 1 ) | = 4**.<br/>

#### `<Problem link>` : <https://www.codechef.com/FLMOCK02/problems/DELISH>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Let us say we have picked i, j, k, l, with k-j > 1. Now, consider sum S = D[j+1] + D[j+2] + … + D[k-1]. If S >= 0, then it can be added to the larger of the two segments [i…j], [k…l]. If S <= 0, then the segment can be added to the smaller of the two segments [i…j], [k…l]. In both cases, it gives us a Delish value atleast as good as the Optimal. Hence, the two segments we choose are consecutive.
  
  What is the best we can do in terms of sum upto `i` from prefix minus what is the best we can do upto in terms of sum upto `i+1` from suffix will give us the best possible answer. Since we are considering absolute values we will use 4 arrays:
  - Maximum Sum Contiguous Subarray for prefix
  - Minimum Sum Contiguous Subarray for prefix
  - Maximum Sum Contiguous Subarray for suffix
  - Minimum Sum Contiguous Subarray for suffix
  
  We will have the best min and max for prefix and suffix at each i in the array. To maximize the delish value we will try to create the maximum possible difference between both the values. Hence we will choose the max(absolute value of (maximum of prefix at each i - minimum of suffix at each i+1) or max(absolute value of (minimum of prefix at each i - maximum of suffix at each i+1) where i = 0..n-1
  
  ### References
  
  >http://discuss.codechef.com/problems/DELISH<br/>
  >https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
  
</details>
