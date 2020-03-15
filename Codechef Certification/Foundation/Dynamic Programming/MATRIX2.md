# Problem
You are given a matrix **A** that consists of **N** rows and **M** columns. Every number in the matrix is either zero or one. Calculate the number of such triples (**i**, **j**, **h**) where for all the pairs (**x**, **y**), where both **x** and **y** belong to \[**1**; **h**\] if **y >= x**, **A\[i+x-1\]\[j+y-1\]** equals to one. Of course, the square (**i**, **j**, **i+h-1**, **j+h-1**) should be inside of this matrix. In other words, we're asking you to calculate the amount of square submatrices of a given matrix which have ones on and above their main diagonal.

### Input
The first line of the input consists of two integers - **N** and **M**.

The following **N** lines describe the matrix. Each line consists of **M** characters that are either zero or one.

### Output
Output should consist of a single integer - the answer to the problem.

### Example
>Input:<br/>
2 3<br/>
011<br/>
111<br/>

>Output:<br/>
6<br/>

### Scoring
Subtask 1 (9 points): 1 <= **N,M** <= 2000, All the numbers in the matrix are equal to one.  <br/>
Subtask 2 (12 points): 1 <= **N,M** <= 10.  <br/>
Subtask 3 (34 points): 1 <= **N,M** <= 30.  <br/>
Subtask 4 (17 points): 1 <= **N,M** <= 150.  <br/>
Subtask 5 (28 points): 1 <= **N,M** <= 2000.<br/>

#### `<Problem link>` : <https://www.codechef.com/problems/MATRIX2>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  >http://discuss.codechef.com/problems/MATRIX2<br/>
  
</details>
