# Problem
You are given a set S of integers between -30000 and 30000 (inclusive).

Find the total number of sextuples ![](https://i.ibb.co/7JbFB1x/1.png) that satisfy: 

![](https://i.ibb.co/4KCXYLz/2.jpg)

### Input

The first line contains integer N (1 ≤ N ≤ 100), the size of a set S.

Elements of S are given in the next N lines, one integer per line. Given numbers will be distinct.

### Output

Output the total number of plausible sextuples.

### Example
>Input:<br/>
1<br/>
1<br/>
Output:<br/>
1<br/>

>Input:<br/>
2<br/>
2<br/>
3<br/>
Output:<br/>
4<br/>

>Input:<br/>
2<br/>
-1<br/>
1<br/>
Output:<br/>
24<br/>

>Input:<br/>
3<br/>
5<br/>
7<br/>
10<br/>
Output:<br/>
10<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/ABCDEF/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We can rewrite the equation as:
  `(a*b)+c = (f+e)*d` where d!=0

  We brute force using three loops to make all triples and store them in lhs and the rhs.  
  
  Then for each value in the lhs we binary search for the count of same values in the rhs and update our answer. 
   
</details>
