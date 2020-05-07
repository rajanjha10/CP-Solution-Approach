# Problem
Chef taught his brother Chefu about right angled triangle and its properties. Chefu says that he has understood everything about right angled triangles. Chef wants to check learning of his brother by asking the following question "Can you find a right angled triangle whose length of hypotenuse is **H** and its area is **S**?"

Chefu is confused how to solve it. I hope you are not. Please solve this by finding a right angled triangle with hypotenuse **H** and area **S**. If it not possible to do so, then output -1.

### Input

The first line of the input contains a single integer **T** denoting the number of test-cases. **T** test cases follow.

For each test case, there will be a single line containing two space separated integers **H** and **S**.

### Output

Output the answer for each test-case in a single line. If it is not possible to find such a triangle, output -1. Otherwise print 3 real numbers corresponding to the lengths of the sides of the triangle sorted in non-decreasing order. Please note that the length of the triangle sides should not differ by more than **0.01** in absolute value from the correct lengths.

### Constraints

*   **1** ≤ **T** ≤ **10<sup>5</sup>**
*   **1** ≤ **H** ≤ **10<sup>6</sup>**
*   **1** ≤ **S** ≤ **10<sup>12</sup>**

### Example
>Input:<br/>
4<br/>
5 6<br/>
6 10<br/>
258303 89837245228<br/>
616153 77878145466 <br/>

>Output:<br/>
3.00000 4.00000 5.00000<br/>
-1<br/>
-1<br/>
285168.817674 546189.769984 616153.000000 <br/>

#### `<Problem link>` : <https://www.codechef.com/problems/RIGHTTRI>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  The maximum area will be when the triangle is isosceles, i.e., base B and perpendicular P are equal. This implies that the maximum area will be when `B = P = sqrt((h*h)/2)` follows from Pythagoras theorem.
 
For all other bases from 0 up to this limit, the area monotonically increases. Also, beyond this limit, area monotonically decreases.

Hence we can binary search for all values in range 0 to B to find the combination of b and p which gives area S.

Since the maximum area which can be formed is when `B = P = sqrt((h*h)/2)`, hence max_Area = 1/2 * B * P = 1/2 * sqrt((h\*h)/2) * sqrt((h\*h)/2) = (h\*h)/4. If the given area is greater than this then return -1.
  
  ### References
  
  >https://discuss.codechef.com/questions/82375/righttri-editorial<br/>
  
</details>
