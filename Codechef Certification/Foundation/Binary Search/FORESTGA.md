# Problem
Chef is the head of commercial logging industry that recently bought a farm containing **N** trees. You are given initial height of the i-th tree by **H<sub>i</sub>** and the rate of growth of height as **R<sub>i</sub>** meters per month. For simplicity, you can assume that all the trees are perfect cylinders of equal radius. This allows us to consider only the height of trees when we talk about the amount of wood.

In Chef's country, laws don't allow one to cut a tree partially, so one has to cut the tree completely for gathering wood. Also, laws prohibit cutting trees of heights (strictly) lower than **L** meters.

Today Chef received an order of **W** meters (of height) of wood. Chef wants to deliver this order as soon as possible. Find out how minimum number of months he should wait after which he will able to fulfill the order. You can assume that Chef's company's sawing machines are very efficient and take negligible amount of time to cut the trees.

### Input

There is a single test case per test file.

The first line of the input contains three space separated integers **N**, **W** and **L** denoting the number of trees in the farm, the amount of wood (in meters) that have to be gathered and the minimum allowed height of the tree to cut.

Each of next **N** lines contain two space separated integers denoting **H<sub>i</sub>** and **R<sub>i</sub>** respectively.

### Output

Output a single integer denoting the number of months that have to pass before Chef will be able to fulfill the order.

### Constraints

*   **1** ≤ **N** ≤ **10<sup>5</sup>**
*   **1** ≤ **W**, **L** ≤ **10<sup>18</sup>**
*   **1** ≤ **H<sub>i</sub>**, **R<sub>i</sub>** ≤ **10<sup>9</sup>**

### Subtasks

*   **Subtask #1 \[40 points\]:** **1 ≤** **N**, **W**, **L** ≤ **10<sup>4</sup>**
*   **Subtask #2 \[60 points\]:** No additional constraints

### Example
>Input:<br/>
3 74 51<br/>
2 2<br/>
5 7<br/>
2 9<br/><br/>

>Output:<br/>
7<br/>

### Explanation

After **6** months, heights of each tree will be **14**, **47** and **56** respectively. Chef is allowed to cut only the third tree, sadly it is not enough to fulfill an order of 74 meters of wood.

After **7** months, heights of each tree will be **16**, **54** and **65** respectively. Now Chef is allowed to cut second and third trees. Cutting both of them would provide him **119** meters of wood, which is enough to fulfill the order.

#### `<Problem link>` : <https://www.codechef.com/problems/FORESTGA>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We simply binary search on all the values from 0 to 10<sup>18</sup> and find out if we can accumulate the required number of woods **W** till current day. If yes, then we try to minimize the number of days.

We use an eval function which loops through the array **H** and find's the height of the tree on day `mid = (low + high)/2`. If the height of the tree is greater than equal to **L** then we include it in our answer or else we exclude it. If at any point we have the required number of woods then we return true or else we return false.
   
  ### References
  
  >https://discuss.codechef.com/questions/81382/forestga-editorial<br/>
  
</details>
