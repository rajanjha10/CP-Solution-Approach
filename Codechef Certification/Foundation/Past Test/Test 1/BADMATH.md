# Problem
In a far away Galaxy of Tilky Way, there was a planet Tarth where the sport of Tompetitive Toding was very popular. According to legends, there lived a setter known for his deep mathematical DP problems.

You are given a bit string **S** (string containing only **0**'s and **1**'s) of length **N** with some numbers missing. Each missing number/bit is replaced by a "\_". Find number of ways of filling the blanks with **0** or **1** such that the resulting number (which is in binary form) is divisible by **M**.

### Input
- The first line has a single integer **T**, denoting number of test cases per file.
- The first line of each testcase contains 2 integers, **N** and **M**.
- The next line of input contains the string **S**.

### Output
For each test case, in a new line, print a single integer, denoting number of ways of filling the blanks such that resulting number is divisible by **M**.

### Constraints
* **1 ≤ T ≤ 10** 
* **1 ≤ N, M ≤ 100**
* **S** consists only of **0 , 1 and _**
* Number of _ in a single string is ≤ **15**

### Subtasks
* **40% points** - N ≤ 20
* **60% points** - Original Constraints

### Example
>Input:<br/>
2<br/>
3 5<br/>
10_<br/>
3 2<br/>
1_0<br/>

>Output:<br/>
1<br/>
2<br/>

### Explanation
- For first case, we can fill the blank with **1** to get **(101)<sub>2</sub> ≡ 5** which is divisible by **5** (recall that the number is in binary!)
- For second test case, we can fill the blank with **0** or **1** and get **4** and **6** respectively, both of which are divisible by **2**.

#### `<Problem link>` : <https://www.codechef.com/FLPAST01/problems/BADMATH>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  Since the constraints says that the number of "\_" is at most 15 we can simply generate all the possible subsets to fill the "\_" with 0 or 1.
  
  After filling the blanks we need to check whether it is divisible by m. We can't convert the string to number as it will be very large. Hence, we will take the remainder using the binary stream. 

  When we move from left to right in a binary stream, if the bit is set then the remainder becomes `2*rem + 1` else it becomes `2*rem`. Then finally we check if rem%m==0 then we increment our answer.
   
  ### References
  
  >https://www.geeksforgeeks.org/check-divisibility-binary-stream/<br/>
  
</details>
