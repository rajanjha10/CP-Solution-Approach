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
  
   
  
  ### References
  
  ><br/>
  
</details>
