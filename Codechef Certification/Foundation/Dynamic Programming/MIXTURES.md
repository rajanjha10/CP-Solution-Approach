# Problem
Harry Potter has n mixtures in front of him, arranged in a row. Each mixture has one of 100 different colors (colors have numbers from 0 to 99).

He wants to mix all these mixtures together. At each step, he is going to take two mixtures that stand next to each other and mix them together, and put the resulting mixture in their place.

When mixing two mixtures of colors a and b, the resulting mixture will have the color (a+b) mod 100.

Also, there will be some smoke in the process. The amount of smoke generated when mixing two mixtures of colors a and b is a * b.

Find out what is the minimum amount of smoke that Harry can get when mixing all the mixtures together.

### Input
There will be a number of test cases in the input.

The first line of each test case will contain n, the number of mixtures, 1 <= n <= 100.

The second line will contain n integers between 0 and 99 - the initial colors of the mixtures.

### Output
For each test case, output the minimum amount of smoke.

### Example
>Input:<br/>
2<br/>
18 19<br/>
3<br/>
40 60 20<br/>

>Output:<br/>
342<br/>
2400<br/>

In the second test case, there are two possibilities:
  - first mix 40 and 60 (smoke: 2400), getting 0, then mix 0 and 20 (smoke: 0); total amount of smoke is 2400
  - first mix 60 and 20 (smoke: 1200), getting 80, then mix 40 and 80 (smoke: 3200); total amount of smoke is 4400

The first scenario is a much better way to proceed.

#### `<Problem link>` : <https://www.spoj.com/problems/MIXTURES/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  In short the problem is a variation of matrix chain multiplication. We need to find the minimum cost of multiplying in any order while considering any two adjacent elements. The only catch is to fix the color.
  
  If we mix mixtures i…j into a single mixture, irrespective of the steps taken to achieve this, the final colour of the mixture is the same, equal to cumulative sum(i,j) = sum(colour(i…j)) mod 100.
  
  We use a 2d array dp[][] array to store the least amount of smoke produced while converting the mixtures from i…j into a single mixture. For achieving mixture of range i...j we try all combination of two mixtures which are resultants of ranges i…k and k+1…j where i≤k<j. Thus we can obtain the recurrence:

  `dp[i][j] = min(dp[i][k] + dp[k+1][j] + sum(i,k) * sum(k+1,j)).` where (k = i ≤ k < j)

  ###### Top Down
  
  The base case is when i==j. we don't have to combine any mixture and hence smoke produced is 0. We recur for all values of k and store the best in dp[i][j] where i≤k<j.
  
  ###### Bottom Up
  
  We build the dp table diagonally and the final answer is stored in dp[0][n-1]. The base case is `dp[i][j]=0` For each (i, j) we store the best corresponding color sum in sum[i][j].
  
  ### References
  
  >https://www.youtube.com/watch?v=XHjjIJxnAJY <br/>
  >https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/ <br/>
  
</details>
