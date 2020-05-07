# Problem
Bear Limak has a string **S**. Each character of **S** is a digit '0' or '1'.

Help Limak and check if all the '1' digits form a single non-empty segment (consecutive subsequence) in the string. For each test case, print "YES" or "NO" accordingly.

### Input

The first line of the input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows.

The only line of each test case contains one string **S**, consisting of digits '0' and '1' only.

### Output

For each test case, output a single line containing the answer — "YES" if all the '1' digits form a single non-empty segment, and "NO" otherwise. Don't print the quotes.

### Constraints

*   1 ≤ **T** ≤ 10
*   1 ≤ |**S**| ≤ 10<sup>5</sup> (here, |**S**| denotes the length of **S**)

### Subtasks

*   Subtask #1 (50 points): 1 ≤ |**S**| ≤ 50
*   Subtask #2 (50 points): Original constraints.

### Example
>Input:<br/>
6<br/>
001111110<br/>
00110011<br/>
000<br/>
1111<br/>
101010101<br/>
101111111111<br/>

>Output:<br/>
YES<br/>
NO<br/>
NO<br/>
YES<br/>
NO<br/>
NO<br/>

### Explanation
The answer is "YES" for strings 001111110 and 1111.

The answer is "NO" for 00110011 because the '1' digits form two disjoint segments (while they should all be consecutive, with no '0' digits between them).

The answer is "NO" for 000 because the segment formed by the '1' digits must be non-empty (as written in the statement).

#### `<Problem link>` : <https://www.codechef.com/FLMOCK04/problems/SEGM01>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We use a flag seen which is initially 0. When we encounter the first 1 we traverse to it's adjacent cells as long as they are all 1 and set the seen flag to 1 representing that all the one's encountered till now are together.

  If we again encounter a 1 and seen==1 then we set seen to 2 representing all the one's are not together.
   
  If seen==2 or seen==0 then ans is "NO" else the ans is "YES".

  ### References
  
  >https://discuss.codechef.com/problems/SEGM01<br/>
  
</details>
