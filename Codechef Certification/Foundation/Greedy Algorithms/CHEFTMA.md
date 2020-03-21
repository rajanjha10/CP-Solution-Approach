# Problem
Chef spent **N** days working really hard! He planned loads of tasks: as many as **A<sub>i</sub>** tasks to do on the **i<sub>th</sub>** day! Chef's work was brutal, so he only managed to finish **B<sub>i</sub>** tasks on the **i<sub>th</sub>** day.

The good news is that Chef has a Time Machine!

The Time Machine has **K** white buttons and **M** black buttons. Each button has a positive integer printed on it. Now Chef goes through all **N** days consequently and presses buttons. Each day Chef can only press **one** button (either white or black). After using a button once, it becomes inactive.

Pressing a white button with integer **x** printed on it reduces the number of planned tasks on the day it was pressed by exactly **x**. Note that this white button can only be pressed if number of planned tasks on the day are greater than or equal to x.

Pressing a black button with integer **x** printed on it increases the number of completed tasks on the day it was pressed by exactly **x**. Note that this black button can only be pressed if after pressing it, number of completed tasks don't exceed the number of tasks.

Chef is interested in finding the minimum possible amount of **total** uncompleted tasks he will still be left with after **N** days using the Machine in the best way?

Be careful! Time is sensitive! Chef **cannot** make a day when he completed more tasks then planned, as this may result in a more-work-than-planned paradox, killing all lazy people on the planet!

### Input
*   The first line of input contains a single integer **T**, denoting the number of test cases. Description of **T** test cases follows.
*   The first line of each test case contains three integers — **N, K, M** — denoting the number of days, white and black buttons appropriately.
*   The second line contains **N** space-separated integers **A<sub>1</sub>**, **A<sub>2</sub>**, … , **A<sub>N</sub>**, denoting the number of planned tasks.
*   The third line contains **N** space-separated integers **B<sub>1</sub>**, **B<sub>2</sub>**, … , **B<sub>N</sub>**, denoting the number of completed tasks.
*   The fourth line contains **K** space-separated integers **C<sub>1</sub>**, **C<sub>2</sub>**, … , **C<sub>K</sub>**, denoting the integers on white buttons.
*   The fifth and last line contains **M** space-separated integers **D<sub>1</sub>**, **D<sub>2</sub>**, … , **D<sub>M</sub>**, denoting the integers on black buttons.

### Output
*   In a single line, output an integer — the minimum possible amount of uncompleted tasks.

### Constraints
*   **1** ≤ **T** ≤ **4**
*   **1** ≤ **N, K, M** ≤ **10^5**
*   **1** ≤ **B<sub>i</sub>** ≤ **A<sub>i</sub>** ≤ **10^5**
*   **1** ≤ **C<sub>i</sub>**, **D<sub>i</sub>** ≤ **10^5**

### Subtasks

*   Subtask **N** ≤ **10**, **K, M** ≤ **5**. Points: **30**
*   Subtask **Original constraints**. Points: **70**

### Example
>Input:<br/>
1<br/>
4 2 2 <br/>
5 7 6 1<br/>
3 3 1 1<br/>
6 3<br/>
1 4<br/>

>Output:<br/>
3<br/>

### Explanation
**Example case 1.**<br/>
In this example Chef goes through the following steps:<br/>
Use black button **1** on the first day.<br/>
Use black button **4** on the second day.<br/>
Use white button **3** on the third day.<br/>
The arrays **A** and **B** are now effectively changed to:<br/>
5 7 3 1<br/>
4 7 1 1<br/>
So he will have **3** uncompleted tasks.<br/>

#### `<Problem link>` : <https://www.codechef.com/problems/CHEFTMA>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  >https://discuss.codechef.com/questions/78212/cheftma-editorial<br/>
  
</details>
