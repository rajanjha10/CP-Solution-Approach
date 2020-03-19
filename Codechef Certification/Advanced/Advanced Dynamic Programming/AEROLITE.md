# Problem
A huge aerolite had fallen in Antarctica!!!Many disasters happened and lots of people lost their lives, homes or even everything.Blue Mary, the well-known scientist, is to work out the secret of this aerolite for further study.

Blue Mary has found out that their are some numbers on this aerolite, 5 per line:

    1 1 1 1 6
    0 0 6 3 57
    8 0 11 3 2845

With her genius, Blue Mary knows that the 5th number is the key to solve the problem, but in some lines the 5th numbers were destoryed and we cannot know what they are instantly.

After some days, she finds out the way to calculate the 5th number finally, which is:

*   A Regular Expression(RE) is a string which only contains characters '{','\[','(',')','\]','}' and satisfies the rules below.
*   An empty string is an RE.
*   If there's no character '\[','\]','{','}' in RE A, then (A) is an RE.
*   If there's no character '{','}' in RE A, then \[A\] is an RE.
*   If A is an RE, {A} is an RE.
*   If both A and B are REs, AB is an RE.

For example "()(())\[\]", "{()\[()\]}", "{{\[\[(())\]\]}}"(all without quotes) are REs and "()(\[\])()","\[()" are not REs.

The deep of an RE A, D(A), is defined as below:

*   If A is an empty string,D(A)=0;
*   If A can be written as BC, D(A)=max(D(B),D(C));
*   If A can be written as (B) or \[B\] or {B}, D(A)=D(B)+1.

Such as D("(){()}\[\]")=2.

Suppose the first 4 numbers in current line are L1,L2,L3 and D, then the 5th number in current line is the number of REs modudo 11380.Each of the REs must have a depth of D and is made of L1 {}, L2 \[\] and L3 ().

Now Mary needs your help to work out the 5th number.

### Input
Input contains exactly 10 test cases.Each test case contains one line, which contains 4 numbers L1,L2,L3,D(0<=L1,L2,L3<=10, 0<=D<=30), separated by single spaces.

### Output
Ten lines, each contains a single integer denoted the 5th number.

### Example
>Input:<br/>
1 1 1 1<br/>
0 0 6 3<br/>
1 1 1 2<br/>
[and 7 test cases more]<br/>

>Output:<br/>
6<br/>
57<br/>
8<br/>
[and 7 test cases more]<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/AEROLITE/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
