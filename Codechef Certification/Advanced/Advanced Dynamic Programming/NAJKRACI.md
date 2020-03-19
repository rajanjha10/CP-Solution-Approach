# Problem
A road network in a country consists of N cities and M one-way roads. The cities are numbered 1 through N. For each road we know the origin and destination cities, as well as its length.

We say that the road F is a continuation of road E if the destination city of road E is the same as the origin city of road F. A path from city A to city B is a sequence of road such that origin of the first road is city A, each other road is a continuation of the one before it, and the destination of the last road is city B. The length of the path is the sum of lengths of all roads in it.

A path from A to B is a shortest path if there is no other path from A to B that is shorter in length.

Your task is to, for each road, output how many different shortest paths containing that road, modulo 1000000007.

### Input
The first line contains two integers N and M (1 ≤ N ≤ 1500, 1 ≤ M ≤ 5000), the number of cities and roads.

Each of the following M lines contains three positive integers O, D and L. These represent a one-way road from city O to city D of length L. The numbers O and D will be different and L will be at most 10000.

### Output
Output M integers, each on its own line – for each road, the number of different shortest paths containing it, modulo 1000000007. The order of these numbers should match the order of roads in the input.

### Example
>Input:<br/>
4 4<br/>
1 2 5<br/>
2 3 5<br/>
3 4 5<br/>
1 4 8<br/>

>Output:<br/>
2<br/>
3<br/>
2<br/>
1<br/>

>Input:<br/>
5 8<br/>
1 2 20<br/>
1 3 2<br/>
2 3 2<br/>
4 2 3<br/>
4 2 3<br/>
3 4 5<br/>
4 3 5<br/>
5 4 20<br/>

>Output:<br/>
0<br/>
4<br/>
6<br/>
6<br/>
6<br/>
7<br/>
2<br/>
6<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/NAJKRACI/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
