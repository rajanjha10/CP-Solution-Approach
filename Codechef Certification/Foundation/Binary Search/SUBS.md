# Problem
Let **A** and **B** be two strings made up of alphabets such that **A = A<sub>[1-n]</sub>, B = B<sub>[1-m]</sub>**. We say **B** is a subsequence of **A** if there exists a sequence of indices **i<sub>1</sub> < i<sub>2</sub> <..m** of **A** such that **A\[i<sub>k</sub>\] = B\[k\]**.

Given **B\[1-m\]**, a string of characters from some alphabets, **B^i** is defined as string with the characters of **B** each repeating **i** times. For example, **(abbacc)^3 = aaabbbbbbaaacccccc**. Also, **B^0** is the empty string.

Given strings **X**, **Y** made up of characters from **'a' - 'z'** find the maximum value of **M** such that **X^M** is a subsequence of **Y**.

### Input

-   The first line of the input contains a positive integer **t <= 20**, denoting the no. of test cases.
-   The following **2t** lines contain the value of **X** and **Y** for the cases.
-   The description of the test cases follow one after the other.
    -   Line **2k** contains the value of **X** for case **k**; **(1 <= k <= t)**
    -   Line **2k+1** contains the value of **Y** for case **k**; **(1 <= k <= t)**.
    -   The no. of characters in **X** , **Y** will be **<= 500010**.

### Output

The output must contain **t** lines, each line corresponding to a test case. The value on the **k<sup>th</sup>** line should be the value of **M** for the **k<sup>th</sup>** pair of **X** and **Y**.

### Example
>Input:<br/>
3  <br/>
abc  <br/>
aabbcc  <br/>
abc  <br/>
bbccc  <br/>
abcdef  <br/>
abc<br/>

>Output:<br/>
2<br/>
0<br/>
0<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/SUBS/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We binary search for all the values of M to find the maximum. The range of binary search is from 0 to length(y)/length(x).

  We use an eval function function which returns true when x<sup>mid</sup> is a subsequence of y where `mid = (low+high)/2`. 
  
</details>
