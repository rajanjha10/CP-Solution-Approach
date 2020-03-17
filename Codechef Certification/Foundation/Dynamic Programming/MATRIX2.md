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
  
  Concentrate.
  
  Let's call the square submatrix having all one's above and on diagonal be a good matrix.
  
  We will use a 2D array dp[][] which will store the maximum number of good matrices we can get if we consider (i, j) as the top left corner of the good matrix. The base case is `dp[i][j] = a[i][j]`. If a[i][j] is **1** then we can get a good matrix of atleast size **1** or else **0**. Since we are focusing on the part of matrix above and on the diagonal we will process the input matrix from bottom to top, right to left to make sure we have processed the values of the matrix before reaching it's top left corner. 
  
  If `a[i][j]==1` then for each (i, j) where (i = n-2...0), (j = m-2...0) if it's neighbouring matrix is not a good matrix then dp[i][j+1] will be **0** or If the matrix following the diagonal is not a good matrix then dp[i+1][j+1] will be **0**. In any of the cases our matrix at (i, j) is also not a good matrix.
  
  Hence `dp[i][j] = min(dp[i][j+1], dp[i+1][j+1]) + 1` if a[i][j]==1. We add all the values of dp[i][j] to get the total good submatrices.
  
  Simulation:<br/>
  Input 1: 
  |  i/j | 1  | 2  | 3  |
  | ------------ | ------------ | ------------ | ------------ |
  | 1  | 1  | 1  | 1  |
  | 2 | 1  | 1  | 1  |
  | 3  | 1  | 1  | 1  |
  
  Output 1:
  |  i/j | 1  | 2  | 3  |
  | ------------ | ------------ | ------------ | ------------ |
  | 1  | 3  | 2  | 1  |
  | 2 | 2  | 2  | 1  |
  | 3  | 1  | 1  | 1  |
  
  Input 2:
  |  i/j | 1  | 2  | 3  |
  | ------------ | ------------ | ------------ | ------------ |
  | 1  | 0  | 1  | 1  |
  |  2 | 1  | 1  | 1  |
  
  Output 2:
  |  i/j | 1  | 2  | 3  |
  | ------------ | ------------ | ------------ | ------------ |
  | 1  | 0  | 2  | 1  |
  |  2 | 1  | 1  | 1  |

  ### References
  
  >http://discuss.codechef.com/problems/MATRIX2<br/>
  
</details>
