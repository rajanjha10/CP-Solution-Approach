# Problem
There is an integer K. You are allowed to add to K any of its divisors not equal to 1 and K. The same operation can be applied to the resulting number and so on. Notice that starting from the number 4, we can reach any composite number by applying several such operations. For example, the number 24 can be reached starting from 4 using 5 operations: 4->6->8->12->18->24.

You will solve a more general problem. Given ints **N** and **M**, return the minimal number of the described operations necessary to transform **N** into **M**. Return -1 if **M** can't be obtained from **N**.

### Definition   	
Class:	DivisorInc<br/>
Method:	countOperations<br/>
Parameters:	int, int<br/>
Returns:	int<br/>
Method signature:	int countOperations(int **N**, int **M**)<br/>
(be sure your method is public)<br/>

### Constraints
-	**N** will be between 4 and 100000, inclusive.
-	**M** will be between **N** and 100000, inclusive.

### Examples
>4<br/>
>24<br/>
>Returns: 5<br/>
>The example from the problem statement.

>4<br/>
>576<br/>
>Returns: 14<br/>
>The shortest order of operations is: 4->6->8->12->18->27->36->54->81->108->162->243->324->432->576.

>8748<br/>
>83462<br/>
>Returns: 10<br/>
>The shortest order of operations is: 8748->13122->19683->26244->39366->59049->78732->83106->83448->83460->83462.

>235<br/>
>98234<br/>
>Returns: 21

>4<br/>
>99991<br/>
>Returns: -1<br/>
>The number 99991 can't be obtained because it is prime.

>82736<br/>
>82736<br/>
>Returns: 0<br/>
>We don't need any operations. **N** and **M** are already equal.

#### `<Problem link>` : <https://community.topcoder.com/stat?c=problem_statement&pm=6186&rd=9823>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Let's build a graph where vertices are numbers from **N** to **M** and there is an edge from vertex v1 to vertex v2 if v2 can be obtained from v1 using exactly one operation from the problem statement. To solve the problem you just need find the shortest path from the vertex **N** to the vertex **M** in this graph. This can be done using breadth first search algorithm.

  We use a queue for BFS. For a divisor **X** of **N** we add **X**+**N** to the queue if it is less than equal to **M**. We stop when either the queue is empty or front of queue is equal to **M**.
  
  The subtask of the finding of all natural divisors of a number K can be solved using O(sqrt(K)) operations (each divisor p greater than sqrt(K) has one correpsonding divisor K/p less than sqrt(K)). 
  
  ### References
  
  >https://www.topcoder.com/tc?module=Static&d1=match_editorials&d2=srm302<br/>
  
</details>
