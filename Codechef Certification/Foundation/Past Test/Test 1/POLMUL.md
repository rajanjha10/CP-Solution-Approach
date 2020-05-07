# Problem
In a far away Galaxy of Tilky Way, there was a planet Tarth where the sport of Tompetitive Toding was very popular. According to legends, there lived a setter known for his love for crispy mathematical and implementation problems.

Radhesh was applying for a research project for polynomial multiplication under the world renowned professor Ms Geethakoomaree. However, she only prefers to take the top cream layer of applicants, and hence designs a test for him.

Given 2 polynomials **P(x)** and **Q(x)**, you need to print their product.

### Input
* The first line has a single integer **T**, denoting number of test cases per file.
* Next line has 2 integers **N** and **M**, each denoting number of terms in the polynomials **P** and **Q** respectively. Note that the highest degree of those polynomials will be **N−1** and **M−1** respectively.
* The next line has **N** space separated integers denoting coefficients of the polynomial **P**, starting from lowest power to highest power (i.e. the first number corresponds to coefficient of **x<sup>0</sup>**, the **N<sup>th</sup>** one corresponds to coefficient of **x<sup>N−1</sup>**)
* The next line has **M** space separated integers denoting coefficients of the polynomial **Q**, starting from lowest power to highest power (i.e. the first number corresponds to coefficient of **x<sup>0</sup>**, the **M<sup>th</sup>** one corresponds to coefficient of **x<sup>M−1</sup>**)

### Output
Output **N + M − 1** integers, denoting the product of polynomials. The first number should correspond to coefficient of **x<sup>0</sup>** and similarly the last number should correspond to coefficient of **x<sup>N+M−2</sup>** (Recall that **N** and **M** were number of terms and hence highest degree of **P(x)** and **Q(x)** was **N−1** and **M−1** respectively).

### Constraints
* **1 ≤ T ≤ 10** 
* **1 ≤ N, M ≤ 1000**
* Absolute value of coefficients of polynomial **P(x)** and **Q(x)** are ≤ **10<sup>5</sup>**

### Subtasks
* **100% points** - Original Constraints.

### Example
>Input:<br/>
3<br/>
2 2<br/>
1 -1<br/>
1 1<br/>
3 2<br/>
1 2 1<br/>
0 1<br/>
3 3<br/>
1 2 1<br/>
1 -2 1<br/>

>Output:<br/>
1 0 -1 <br/>
0 1 2 1 <br/>
1 0 -2 0 1 <br/>

### Explanation
The first case corresponds to multiplication of **(1−x)** and **(1+x)**. The answer for this is **(1−x<sup>2</sup>)**. The coefficients, starting from **x<sup>0</sup>** are **1**, **0** and **−1** and the same is printed.

The second test case corresponds to multiplication of **(1 + 2x + x<sup>2</sup>)** and **(x)**. the result is **(0 + x + 2x<sup>2</sup> + x<sup>3</sup>)**

#### `<Problem link>` : <https://www.codechef.com/FLPAST01/problems/POLMUL>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  When we are calculating value for a particular index in the answer representing the coefficient of x<sup>i</sup>, we take into account all the other powers which can affect it.

  For all the coefficients in Q(x) we find out the coefficients it affect in P(x).

  The key observation is that a value at index i in P(x) affects only the powers greater than equal to i in Q(x).

  Ex: n=3, m=3<br/>
  P(x) = 1 2 1<br/>
  Q(x) = 1 -2 1<br/>

  | i/j  | 0  | 1  | 2  | 3  | 4  |
| ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
| 0  | 1  | 2  | 1  | 0  | 0  |
| 1  | 1  | 0  | -3  | -2  | 0  |
| 2  | 1  | 0  | -2  | 0  | 1  |
  
</details>
