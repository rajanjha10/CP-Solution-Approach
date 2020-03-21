# Problem
Chef has two piles of stones with him, one has **n<sub>1</sub>** stones and the other has **n<sub>2</sub>** stones. Fired up by boredom, he invented a game with the two piles.

Before the start of the game Chef chooses an integer **m**.

In the **j**\-th move:

*   He chooses a number **x<sub>j</sub>** such that **1 ≤ x<sub>j</sub> ≤ m**, and removes **x<sub>j</sub>** stones from both the piles (this is only possible when both the piles have ≥ **x<sub>j</sub>** stones).
*   The number chosen must be unique over all the moves in the game. That is, for all **k < j, x<sub>j</sub> ≠ x<sub>k</sub>**.

  
The game stops when Chef is unable to make any more moves.

Chef wants to make the moves in such a way that the sum of the number of stones remaining in the two piles is minimized. Please help Chef find this.

### Input
*   The first line of input contains an integer **T** denoting the number of test cases.
*   Each test case consists of 1 line with three integers — **n<sub>1</sub>, n<sub>2</sub>** and **m** — separated by single spaces.

### Output
For each test case, output a single line containing the minimum sum of the number of stones of two piles.

### Constraints
**Subtask 1** : (5 pts)

*   **1** ≤ **T** ≤ **100**
*   **0** ≤ **m** ≤ **18**
*   **0** ≤ **n<sub>1</sub>, n<sub>2</sub>** ≤ **100**

**Subtask 2** : (25 pts)

*   **1** ≤ **T** ≤ **1000**
*   **0** ≤ **m** ≤ **10000**
*   **0** ≤ **n<sub>1</sub>, n<sub>2</sub>** ≤ **10000**

**Subtask 3** : (70 pts)

*   **1** ≤ **T** ≤ **10<sup>5</sup>**
*   **0** ≤ **m** ≤ **10<sup>9</sup>**
*   **0** ≤ **n<sub>1</sub>, n<sub>2</sub>** ≤ **10<sup>18</sup>**

### Example
>Input:<br/>
3<br/>
1 1 1<br/>
1 2 1<br/>
4 5 2<br/>

>Output:<br/>
0<br/>
1<br/>
3<br/>

### Explanation
**Example case 1.** : Remove 1 stone from each of the piles. Now 0 stones are remaining, so chef cannot remove any more stones from the piles. Hence, answer is 0+0 = 0

**Example case 2.** : Again, remove 1 stone from both the piles to get (0,1) stones. Now chef cannot remove any more stones from pile 1, so he stops. Hence, answer is 0+1 = 1.

**Example case 3.** : First remove 1 stone from both the piles to get (3,4) stones. Now, remove 2 stones from both the piles so that (1,2) stones are remaining. Now chef cannot remove any more stones owing to the condition that he cannot remove the same number of stones twice. So, the answer is 1+2 = 3.

#### `<Problem link>` : <https://www.codechef.com/problems/CHEFST>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  >https://discuss.codechef.com/questions/77629/chefst-editorial<br/>
  
</details>
