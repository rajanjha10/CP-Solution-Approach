# Problem
The city of **Y-O** is a network of two-way streets and junctions with the following properties:

1.  There is no more than one street between each pair of junctions.
2.  Every junction is connected to every other junction either directly via a street or through other junctions by a unique path.
3.  When a light is placed at a junction, all the streets meeting at this junction are also lit.

A valid lighting is a set of junctions such that if lights were placed at these, all the streets would be lit. An optimal lighting is a valid lighting such that it contains the least number of junctions.

The task is divided into two subtasks:

1.  Find the number of lights in an optimal lighting.
2.  Find the total number of such optimal lightings in the city.

### Input
*   The first line of the input contains a positive integer **t <= 20**, denoting the number of test cases.
*   The description of the test cases follows one after the other.
*   **Network Description:**
    *   The first line of description of a network consists of a positive integer **n <= 100010** denoting the number of junctions in the network.
    *   Each junction is numbered with a unique integer between **1** and **n**.
    *   The following **n-1** lines contain a pair of integers **u v (1 <= u,v <= n)** separated by a single space denoting that there is a street between junction **u** and junction **v**.

### Output
The output must consist of **t** lines, the **k<sup>th</sup>** line corresponding to the **k<sup>th</sup>** network; **(1 <= k <= t)**. The **k<sup>th</sup>** line must contain two integers separated by a single space. The first integer on the **k<sup>th</sup>** line must be the number of junctions in an optimal lighting of network **k**. The second integer must be **N%10007**, which is the remainder left by the number of optimal lightings when divided by **10007**.

### Constraints
* 

### Example
>Input:<br/>
2  <br/>
4  <br/>
1 2  <br/>
2 3  <br/>
3 4  <br/>
3  <br/>
1 2  <br/>
1 3<br/>

>Output:<br/>
2 3  <br/>
1 1<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/VOCV/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
