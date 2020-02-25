# Problem

Little chief has his own restaurant in the city. There are **N** workers there. Each worker has his own salary. The salary of the **i**-th worker equals to **W<sub>i</sub>**(**i** = **1**, **2**, ..., **N**). Once, chief decided to equalize all workers, that is, he wants to make salaries of all workers to be equal. But for this goal he can use only one operation: choose some worker and increase by 1 salary of each worker, except the salary of the chosen worker. In other words, the chosen worker is the loser, who will be the only worker, whose salary will be not increased during this particular operation. But loser-worker can be different for different operations, of course. Chief can use this operation as many times as he wants. But he is a busy man. That's why he wants to minimize the total number of operations needed to equalize all workers. Your task is to find this number.

### Input
The first line of the input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows. The first line of each test case contains a single integer **N** denoting the number of workers. The second line contains **N** space-separated integers **W<sub>1</sub>**, **W<sub>2</sub>** , ...,  **W<sub>N</sub>** denoting the salaries of the workers.

### Output
For each test case, output a single line containing the minimum number of operations needed to equalize all workers.

### Constraints
* 1 ≤ T ≤ 100
* 1 ≤ N ≤ 100
* 0 ≤ W<sub>i</sub> ≤ 10000 (10<sup>4</sup>)

### Example
>Input:<br/>
2<br/>
3<br/>
1 2 3<br/>
2<br/>
42 42<br/>

>Output:<br/>
3<br/>
0

### Explanation
**Example Case 1**. Chief can equalize all salaries in 3 turns:

| Turn ID | IDs of involved workers| Salaries after the move |
| ------- | ---------------------- | ------------------------|
| 1 | 1 2 | 2 3 3 |
| 2 | 1 2 | 3 4 3 |
| 3 | 1 3 | 4 4 4 |

**Example Case 2**. All salaries are already equal. He doesn't need to do anything.

#### `<Problem link>` : <https://www.codechef.com/problems/SALARY>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Instead of increasing all workers salary by 1 except the choosen one, we decrease the choosen one's salary by 1 and try to make all workers salary equal to the minimum of **W**. For each **i<sup>th</sup>** worker, the minimum number of moves in which it's salary becomes equal to min of **W** is **W<sub>i</sub>-minW**. Hence, the final answer is **sumW - N * minW**. 
  
  ### References
  
  ><https://discuss.codechef.com/t/salary-editorial/1356><br/>
  
</details>
