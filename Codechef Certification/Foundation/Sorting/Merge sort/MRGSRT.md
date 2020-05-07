# Problem
You must be aware of the sorting technique, called merge sort where we sort an input array by first dividing it into two halves, and then sorting the each half recursively before finally merging these sorted halves.

A GEU student, Mohan want to understand this recursive algorithm more clearly and is interested to know how the recursive function calls are getting called during the merge sort program execution for the given input parameters - input array (A), begin index (s) and the end index (t).  
  
When the function merge\_sort(A,s,t) is called, the recursive functions calls would be executed as per the input parameters. Mohan is interested to take a snapshot of the function calling stack when merge\_sort(A,i,i) is being executed, where s <= i <= t. Mohan also wants to know the recursive function depth at that point of time.  
Assume that, if the input array consists of odd number of elements then it is divide in such a way that the left half contains one element more than the right half.

### Input
The first line of input contains T, the number of test cases. T lines follow, each line containing three values corresponding to s, t and i.

### Output
For each test case, output in separate lines, the begin and end index input parameters of the merge\_sort() that would have been called till it reaches sorting ith index element. Mention these in same sequence as the function calls were called, and also then include in the next line the recursive function depth at that time.  
Return -1 if it could not have been called.

weL and R (separated by a space) X times, where X is the number of calls made to the function mergeSort(). For each call print L and R in a new line. Post that print the heightest height achieved by the stack after all calls to the function mergeSort() has has been made.

### Constraints
*   **1** ≤ **T** ≤ **1000**
*   **1** ≤ **t ,i** ≤ **1000**
*   **0** ≤ **s** ≤ **1000**

### Example
>Input:<br/>
4<br/>
0 4 3<br/>
7 15 14<br/>
1 16 9<br/>
7 14 3<br/>

>Output:<br/>
0 4<br/>
3 4<br/>
3 3<br/>
3 <br/>
7 15<br/>
12 15<br/>
14 15<br/>
14 14<br/>
4<br/>
1 16<br/>
9 16<br/>
9 12<br/>
9 10<br/>
9 9<br/>
5<br/>
-1<br/>

### Explanation
**Explanation for first test case**<br/>
If we take the snapshot of the function calling stack   
 when merge\_sort(A,3,3) would have been called during the execution of merge\_sort(A,0,4),   
 then there would be seen - the  function merge\_sort(A,0,4) calling merge\_sort(A,3,4),  
 which would then be calling merge\_sort(A,3,3). So, in this case, the recursive depth would be 3.

#### `<Problem link>` : <https://www.codechef.com/problems/MRGSRT>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We simply recur for s and t values which comprise of i. In each recursion we calculate mid as follows: `mid = (s+t)/2`.

If **i** is in between s and mid then we recur for (s, mid, i) else we recur for (mid+1, t, i). In each recursion we increment count which represents recursion depth.
   
  ### References
  
  >http://discuss.codechef.com/problems/MRGSRT<br/>
  
</details>
