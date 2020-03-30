# Problem
A fashion show rates participants according to their level of hotness. Two different fashion shows were organized, one for men and the other for women. A date for the third is yet to be decided ;) .

Now the results of both fashion shows are out. The participants of both the fashion shows have decided to date each other, but as usual they have difficuly in choosing their partners. The Maximum Match dating serive (MMDS) comes to their rescue and matches them in such a way that that maximizes the hotness bonds for all couples.

If a man has been rated at hotness level x and a women at hotness level y, the value of their hotness bond is x\*y.

Both fashion shows contain **N** participants each. MMDS has done its job and your job is to find the sum of hotness bonds for all the couples that MMDS has proposed.

### Input
The first line of the input contains an integer **t**, the number of test cases. **t** test cases follow.

Each test case consists of 3 lines:

*   The first line contains a single integer **N** (1 <= **N** <= 1000).
*   The second line contains **N** integers separated by single spaces denoting the hotness levels of the men.
*   The third line contains **N** integers separated by single spaces denoting the hotness levels of the women.

All hotness ratings are on a scale of 0 to 10.

### Output
For each test case output a single line containing a single integer denoting the sum of the hotness bonds for all pairs that MMDS has proposed.

### Example
>Input:<br/>
2<br/>
2<br/>
1 1<br/>
3 2<br/>
3<br/>
2 3 2<br/>
1 3 2<br/>

>Output:<br/>
5<br/>
15<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/FASHION/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The MMDS is a shitty software and does nothing. We sort the hotness of men and women in the same order and form pairs with their corresponding ones.
  
  For all i, we get `ans += men[i]*women[i]` after sorting.
  
</details>
