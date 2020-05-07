# Problem
All submissions for this problem are available.

Chef has gone shopping with his 5-year old son. They have bought **N** items so far. The items are numbered from **1** to **N**, and the item **i** weighs **W<sub>i</sub>** grams.

Chef's son insists on helping his father in carrying the items. He wants his dad to give him a few items. Chef does not want to burden his son. But he won't stop bothering him unless he is given a few items to carry. So Chef decides to give him some items. Obviously, Chef wants to give the kid less weight to carry.

However, his son is a smart kid. To avoid being given the bare minimum weight to carry, he suggests that the items are split into two groups, and one group contains exactly **K** items. Then Chef will carry the heavier group, and his son will carry the other group.

Help the Chef in deciding which items should the son take. Your task will be simple. Tell the Chef the maximum possible difference between the weight carried by him and the weight carried by the kid.

### Input
The first line of input contains an integer **T**, denoting the number of test cases. Then **T** test cases follow. The first line of each test contains two space-separated integers **N** and **K**. The next line contains **N** space-separated integers **W<sub>1</sub>**, **W<sub>2</sub>**, ..., **W<sub>N</sub>**.

### Output
For each test case, output the maximum possible difference between the weights carried by both in grams.

### Constraints
*   **1 ≤ T ≤ 100**
*   **1 ≤ K < N ≤ 100**
*   **1 ≤ W<sub>i</sub> ≤ 100000 (10<sup>5</sup>)** 

### Example
>Input:<br/>
2<br/>
5 2<br/>
8 4 5 2 10<br/>
8 3<br/>
1 1 1 1 1 1 1 1<br/>

>Output:<br/>
17<br/>
2<br/>

### Explanation
**Case #1:** The optimal way is that Chef gives his son **K=2** items with weights **2** and **4**. Chef carries the rest of the items himself. Thus the difference is: **(8+5+10) − (4+2) = 23 − 6 = 17**.

**Case #2:** Chef gives his son **3** items and he carries **5** items himself.

#### `<Problem link>` : <https://www.codechef.com/FLMOCK01/problems/MAXDIFF>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The two ways in which we can maximize the difference is:
  1. Assign k smallest weights to son
  2. Assign k greatest weights to father
    
  Ex: n=4, k=3 <br/>
      w[] = {2, 3, 4, 5}<br/>
      we assign k greatest weights `3, 4, 5` to father to get max `diff = 12 - 2 = 10` as opposed to assigning k smallest weights `2, 3, 4` to son to get `diff = 9 - 5 = 4`.
      
  We make sure that we include more and greater weights in father's set. Hence, when `k>n/2` it is optimal to assign **k** greatest weights to father else we assign **k** smallest weights to son to maximize the difference. 
  
  ### References
  
  >https://discuss.codechef.com/questions/8114/maxdiff-editorial<br/>
  
</details>
