# Problem
Bike loves looking for the second maximum element in the sequence. The second maximum element in the sequence of distinct numbers x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>k</sub> (k > 1) is such maximum element x<sub>j</sub>, that the following inequality holds: ![](https://espresso.codeforces.com/41e9a774451aa769280692592b29103e0a6ecf97.png).

The lucky number of the sequence of distinct positive integers x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>k</sub> (k > 1) is the number that is equal to the bitwise excluding OR of the maximum element of the sequence and the second maximum element of the sequence.

You've got a sequence of distinct positive integers s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>n</sub> (n > 1). Let's denote sequence s<sub>l</sub>, s<sub>l+1</sub>, ..., s<sub>r</sub> as s[l..r] (1 ≤ l < r ≤ n). Your task is to find the maximum number among all lucky numbers of sequences s[l..r].

Note that as all numbers in sequence s are distinct, all the given definitions make sence.

### Input
The first line contains integer n (1 < n ≤ 10<sup>5</sup>). The second line contains n distinct integers s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>n</sub> (1 ≤ s<sub>i</sub> ≤ 10<sup>9</sup>).

### Output
Print a single integer — the maximum lucky number among all lucky numbers of sequences s[l..r].

### Examples
>Input:<br/>
5<br/>
5 2 1 4 3<br/>
>Output:<br/>
7<br/>

>Input:<br/>
5<br/>
9 8 3 5 7<br/>
>Output:<br/>
15<br/>

### Explanation
For the first sample you can choose s[4..5] = {4, 3} and its lucky number is (4 xor 3) = 7. You can also choose s[1..2].

For the second sample you must choose s[2..5] = {8, 3, 5, 7}.

#### `<Problem link>` : <https://codeforces.com/problemset/problem/281/D>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We only need the first and second max in every possible sequence s[l..r]. So apparently, there must be a lot of meaningless interval which we needn’t check them at all. But how can we skip them? Maintain a **monotone-decreasing-stack** can help us. Whenever we get a new element we check its xor with the top element of the stack(if it exists obviously) and update `maxXor` accordingly. If the new element is greater than the element at the top of the stack than we continue to pop from the stack and check for `maxXor` as long as the condition holds. We finally see that we have checked for all the sequences considering their respective first and second max.
  
  ### References
  
  >https://assets.codeforces.com/statements/280-281/Tutorial.pdf?_ga=2.212757840.576033943.1582733921-1013642611.1580586557<br/>
  
</details>
