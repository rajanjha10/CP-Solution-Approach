# Problem
Our chef has recently opened a new restaurant with a unique style. The restaurant is divided into **K** compartments (numbered from **1** to **K**) and each compartment can be occupied by at most one customer.

Each customer that visits the restaurant has a strongly preferred compartment **p** (**1 ≤ p ≤ K**), and if that compartment is already occupied, then the customer simply leaves. Now obviously, the chef wants to maximize the total number of customers that dine at his restaurant and so he allows (or disallows) certain customers so as to achieve this task. You are to help him with this.

Given a list of **N** customers with their arrival time, departure time and the preferred compartment, you need to calculate the maximum number of customers that can dine at the restaurant.

### Input
The first line contains an integer **T** denoting the number of test cases. Each of the next **T** lines contains two integers **N** and **K** , the number of customers that plan to visit the chef's restaurant and the number of compartments the restaurant is divided into respectively. Each of the next **N** lines contains three integers **s<sub>i</sub>**, **f<sub>i</sub>** and **p<sub>i</sub>** , the arrival time, departure time and the strongly preferred compartment of the **i<sup>th</sup>** customer respectively.  
Note that the **i<sup>th</sup>** customer wants to occupy the **p<sub>i</sub><sup>th</sup>** compartment from **\[s<sub>i</sub>, f<sub>i</sub>)** i.e the **i<sup>th</sup>** customer leaves just before **f<sub>i</sub>** so that another customer can occupy that compartment from **f<sub>i</sub>** onwards.

### Output
For every test case, print in a single line the maximum number of customers that dine at the restaurant.

### Constraints
*   **1** ≤ **T** ≤ **30**
*   **0** ≤ **N** ≤ **10<sup>5</sup>**
*   **1** ≤ **K** ≤ **10<sup>9</sup>**
*   **0** ≤ **s<sub>i</sub>** < **f<sub>i</sub>** ≤ **10<sup>9</sup>**
*   **1** ≤ **p<sub>i</sub>** ≤ **K**

### Example
>Input:<br/>
2<br/>
3 3<br/>
1 3 1<br/>
4 6 2<br/>
7 10 3<br/>
4 2<br/>
10 100 1<br/>
100 200 2<br/>
150 500 2<br/>
200 300 2<br/>

>Output:<br/>
3<br/>
3<br/>

### Explanation
**Example case 1.**  
All three customers want different compartments and hence all 3 can be accommodated.

**Example case 2.**  
If we serve the **1<sup>st</sup>**, **2<sup>nd</sup>** and **4<sup>th</sup>** customers, then we can get a maximum of 3.

#### `<Problem link>` : <https://www.codechef.com/problems/FGFS>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  >http://discuss.codechef.com/problems/FGFS<br/>
  
</details>
