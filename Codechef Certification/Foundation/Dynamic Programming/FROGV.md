# Problem
Nobody knows, but **N** frogs live in Chef's garden.

Now they are siting on the X-axis and want to speak to each other. One frog can send a message to another one if the distance between them is less or equal to **K**.

Chef knows all **P** pairs of frogs, which want to send messages. Help him to define can they or not!

**Note** : More than 1 frog can be on the same point on the X-axis.

### Input
* The first line contains three integers **N**, **K** and **P**.
* The second line contains **N** space-separated integers **A<sub>1</sub>**, **A<sub>2</sub>**, ..., **A<sub>N</sub>** denoting the x-coordinates of frogs".
* Each of the next **P** lines contains two integers **A** and **B** denoting the numbers of frogs according to the input.

### Output
* For each pair print "Yes" without a brackets if frogs can speak and "No" if they cannot.

### Constraints
* **1** ≤ **N, P** ≤ **10^5**
* **0** ≤ **A<sub>i</sub>, K** ≤ **10^9**
* **1** ≤ **A, B** ≤ **N** 

### Example
>Input:<br/>
5 3 3<br/>
0 3 8 5 12<br/>
1 2<br/>
1 3<br/>
2 5<br/>

>Output:<br/>
Yes<br/>
Yes<br/>
No<br/>

### Explanation
For pair **(1, 2)** frog **1** can directly speak to the frog **2** as the distance between them is **3 - 0 = 3 <= K** . 

For pair **(1, 3)** frog **1** can send a message to frog **2**, frog **2** can send it to frog **4** and it can send it to frog **3**.

For pair **(2, 5)** frogs can't send a message under current constraints. 

#### `<Problem link>` : <https://www.codechef.com/problems/FROGV>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We will use the idea similar to connected component. We will use an array dp[]. The frogs which are in range of one another are deemed to be connected and have the same value in dp[].
  
  We sort the input along with corresponding indices in decreasing order of **X** coordinate so that we can start with the farthest frog and close in towards (0, 0) co-ordinate. Hence for each frog at **i** we will get the maximum range it can cover with the help of it's subordinates satisfying the requirement of a maximum gap of **k**. If the requirement is satisfied then `dp[j] = dp[j-1]` indicating same connected component else `dp[j] = dp[j-1] + 1` indicating different connected component where j is index of **X** coordinate in array.
  
  If the values in dp[] for two frogs are same then they can communicate and the answer is **Yes** else the answer is **No**.
  
  ### References
  
  >http://discuss.codechef.com/problems/FROGV<br/>
  
</details>
