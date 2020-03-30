# Problem
You're given an array of **N** integers, and a number **K**.

The **maximum K-product** of the array is the maximum product of any **K** length subsequence of the array. For example, the maximum 2-product of the array **\[-5, 3, 4, -6\]** is **30** because the product of the subsequence **\[-5, -6\]** is **30** and it is impossible to achieve larger subsequence product.

What is the **maximum **K**\-product** you can achieve? Since the answer can be very large, output it modulo **10<sup>9</sup> + 7**.

_Note:_ Recall that the result of a modulo operation is always non-negative. For example, **\-8 mod 5 = 2**.

### Input
The first line of the input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows.

The first line of each test case contains two space separated integers **N** and **K**.

The second line contains **N** space-separated integers **A<sub>1</sub>**, **A<sub>2</sub>**, ..., **A<sub>N</sub>**, denoting the elements of the array.

### Output
For each test case, output a single line containing the **maximum K-product** of the array.

### Constraints
*   **1** ≤ **T** ≤ **10<sup>5</sup>**
*   **1** ≤ **K** ≤ **N** ≤ **10<sup>5</sup>**
*   **\-10<sup>9</sup>** ≤ **A<sub>i</sub>** ≤ **10<sup>9</sup>**
*   The sum of the **N**s over all the test cases in a single test file is ≤ **5×10<sup>5</sup>** 

### Example
>Input:<br/>
4<br/>
4 2<br/>
5 -3 -4 6<br/>
4 2<br/>
-5 3 4 -6<br/>
3 2<br/>
10000 100000 100000<br/>
2 1<br/>
-1 -2<br/>

>Output:<br/>
30<br/>
30<br/>
999999937<br/>
1000000006<br/>

### Explanation
**Example case 1.** The maximum 2-product of the array **\[5, -3, -4, 6\]** is **30** and is achieved by the subsequence **\[5, 6\]**.

**Example case 2.** The maximum 2-product of the array **\[-5, 3, 4, -6\]** is **30** and is achieved by the subsequence **\[-5, -6\]**.

**Example case 3.** The maximum 2-product of the array **\[10000, 100000, 100000\]** is **10000000000** and is achieved by the subsequence **\[100000,100000\]**. Modulo **10<sup>9</sup> + 7**, this is **999999937**.

**Example case 4.** The maximum 1-product of the array **\[-1, -2\]** is **\-1** and is achieved by the subsequence **\[-1\]**. Modulo **10<sup>9</sup> + 7**, this is **1000000006**.

The reason why **\-1 mod (10<sup>9</sup> + 7) = 1000000006** is that for positive **m**, **a mod m** is defined as the smallest nonnegative integer **b** such that **a - b** is divisible by **m**.

#### `<Problem link>` : <https://www.codechef.com/problems/MMPROD>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We will greedily sort the array in descending order based on absolute values.
  
  Cases when the first **k** characters work after sorting:
  - When all of them are positive
  - When we have even negative numbers
  - When we have a zero in first k characters indicating the array has only zero's left in the remaining array.
  - When k==n
  
  Cases when the last **k** characters work after sorting:
  - When all values are negative
  - When k==n
  
  If we get a negative product from first k values then we can turn it into positive product by replacing a negative value inside k at index say **nk** with a positive value outside k at index say **pok** or by replacing a positive value inside k at index say **pk** with a negative value outside k at index say **nok**.
  
  To get the maximum product we choose largest existing **nk** and **pk** to replace with smallest existing **pok** and **nok** (index wise).
  
  If all the values pok, nok, nk and pk exists then we need to find out replacement of which will give maximum product.
 
 Ex: n=6, k=3<br/>
 sorted a[] = {-8, 7, 6, -5, 4, 3}
 nk = 0, pk = 2, nok = 3, pok = 4<br/>
 a[nk] * a[nok] (-8 * -5) > a[pk] * a[pok] (6 * 4)<br/>
 Hence we replace a[pk] with a[nok] in the product of first k elements<br/>
 The maximum product is for sequence {-8, 7, -5} i.e 280.
 
 The algorithm works as follows;
 ```cpp
 - if(first k characters work)
       return first k characters product
 - if((pk==-1 || nok==-1) && (nk==-1 || pok==-1)) //all values are negative or k==n
       return last k characters product
 - if(pk==-1 || nok==-1) // no replacement for positive value inside k
       replace a[nk] with a[pok] in product
 - else if(nk==-1 || pok==-1) // no replacement for negative value inside k
       replace a[pk] with a[nok] in product
 - else if(a[nk]*a[nok] > a[pk]*a[pok]) // check which replacement gives better product
       replace a[pk] with a[nok] in product
 - else
       replace a[nk] with a[pok] in product 
 ```
 
  ### References
  
  >https://discuss.codechef.com/questions/82151/mmprod-editorial<br/>
  
</details>
