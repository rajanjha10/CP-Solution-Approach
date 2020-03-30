# Problem
A flock of chickens are running east along a straight, narrow road. Each one is running with its own constant speed. Whenever a chick catches up to the one in front of it, it has to slow down and follow at the speed of the other chick. You are in a mobile crane behind the flock, chasing the chicks towards the barn at the end of the road. The arm of the crane allows you to pick up any chick momentarily, let the chick behind it pass underneath and place the picked up chick back down. This operation takes no time and can only be performed on a pair of chicks that are immediately next to each other, even if 3 or more chicks are in a row, one after the other.

Given the initial locations (**X<sub>i</sub>**) at time 0 and natural speeds (**V<sub>i</sub>**) of the chicks, as well as the location of the barn (**B**), what is the minimum number of swaps you need to perform with your crane in order to have at least **K** of the **N** chicks arrive at the barn no later than time **T**?

You may think of the chicks as points moving along a line. Even if 3 or more chicks are at the same location, next to each other, picking up one of them will only let one of the other two pass through. Any swap is instantaneous, which means that you may perform multiple swaps at the same time, but each one will count as a separate swap.

### Input
The first line of the input gives the number of test cases, **C**. **C** test cases follow. Each test case starts with 4 integers on a line -- **N**, **K**, **B** and **T**. The next line contains the **N** different integers **X<sub>i</sub>**, in increasing order. The line after that contains the **N** integers **V<sub>i</sub>**. All distances are in meters; all speeds are in meters per second; all times are in seconds.

### Output
For each test case, output one line containing "Case #x: **S**", where x is the case number (starting from 1) and **S** is the smallest number of required swaps, or the word "IMPOSSIBLE".

### Limits
1 ≤ **C** ≤ 100;  <br/>
1 ≤ **B** ≤ 1,000,000,000;  <br/>
1 ≤ **T** ≤ 1,000;  <br/>
0 ≤ **X<sub>i</sub>** < **B**;  <br/>
1 ≤ **V<sub>i</sub>** ≤ 100;  <br/>
1 ≤ **N** ≤ 50;  <br/>
0 ≤ **K** ≤ **N**;<br/>

All the **X<sub>i</sub>**'s will be distinct and in increasing order.

### Example
>Input:<br/>
3  <br/>
5 3 10 5  <br/>
0 2 5 6 7  <br/>
1 1 1 1 4  <br/>
5 3 10 5  <br/>
0 2 3 5 7  <br/>
2 1 1 1 4  <br/>
5 3 10 5  <br/>
0 2 3 4 7  <br/>
2 1 1 1 4<br/>

>Output:<br/>
Case #1: 0  <br/>
Case #2: 2  <br/>
Case #3: IMPOSSIBLE<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/GCJ101BB/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  End of the road(barn) is **B** and the inputs **X** are given in increasing order. We start by finding out the distance that a chick still has to cover to reach the barn i.e `rem[i] = B - x[i]`. We then divide the remaining distance with speed for all i to get the time which we need to cover the distance.
  
  Once we have the time needed by each chick we check if we have atleast **K** chicks requiring not more than **T** time. If no then the answer is **IMPOSSIBLE**.
  
  We start from the extreme right cause that's towards the end of the road and iterate through the array. We need to place the chicks with **t<=T** in front of the chicks with **t>T**. Hence we count the number of chicks having **t>T** and when we find a chick having **t<=T** then we need to do count number of swaps so that the later chick is ahead of the former.
  
  Ex: N = 5, K = 3, B = 10, T = 5<br/>
      x[] = {0, 2, 3, 5, 7}<br/>
      v[] = {2, 1, 1, 1, 4}<br/>
      rem[] = {10, 8, 7, 5, 3}<br/>
      time[] = {5, 8, 7, 5, 1}<br/>
      After swapping: time[] = {8, 7, 5, 5, 1}<br/>
      ans = swap = 2
        
</details>
