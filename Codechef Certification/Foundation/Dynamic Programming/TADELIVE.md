# Problem
Andy and Bob are the only two delivery men of Pizza-chef store. Today, the store received **N** orders. It's known that the amount of tips may be different when handled by different delivery man. More specifically, if Andy takes the **i<sup>th</sup>** order, he would be tipped **A<sub>i</sub>** dollars and if Bob takes this order, the tip would be **B<sub>i</sub>** dollars.

They decided that they would distribute the orders among themselves to maximize the total tip money. One order will be handled by only one person. Also, due to time constraints Andy cannot take more than **X** orders and Bob cannot take more than **Y** orders. It is guaranteed that **X + Y** is greater than or equal to **N**, which means that all the orders can be handled by either Andy or Bob.

Please find out the maximum possible amount of total tip money after processing all the orders.

### Input
- The first line contains three integers **N, X, Y**.
- The second line contains **N** integers. The i<sup>th</sup> integer represents **A<sub>i</sub>**.
- The third line contains **N** integers. The i<sup>th</sup> integer represents **B<sub>i</sub>**.

### Output
Print a single integer representing the maximum tip money they would receive.

### Constraints
**All test:**
- **1 ≤ N ≤ 10<sup>5</sup>**
- **1 ≤ X, Y ≤ N; X + Y ≥ N**
- **1 ≤ A<sub>i</sub>, B<sub>i</sub> ≤ 10<sup>4</sup>**

**10 points:**
- **1 ≤ N ≤ 20**

**30 points:**
- **1 ≤ N ≤ 5000**

**60 points:**
- **1 ≤ N ≤ 10<sup>5</sup>** 

### Example
>Input:<br/>
5 3 3<br/>
1 2 3 4 5<br/>
5 4 3 2 1<br/>

>Output:<br/>
21<br/>

### Explanation
Bob will take the first three orders (or the first two) and Andy will take the rest (of course).

#### `<Problem link>` : <https://www.codechef.com/problems/TADELIVE>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  >http://discuss.codechef.com/problems/TADELIVE<br/>
  
</details>
