# Problem
Petya recieved a gift of a string *s* with length up to 10<sup>5</sup> characters for his birthday. He took two more empty strings *t* and *u* and decided to play a game. This game has two possible moves:

- Extract the **first** character of *s* and append *t* with this character.
- Extract the **last** character of *t* and append *u* with this character.

Petya wants to get strings *s* and *t* empty and string *u* lexicographically minimal.

You should write a program that will help Petya win the game.

### Input
First line contains non-empty string *s* (**1** ≤ |*s*| ≤ **10<sup>5</sup>**), consisting of lowercase English letters.

### Output
Print resulting string *u*.

### Example
>Input:<br/>
cab<br/>
>Output:<br/>
abc<br/>

>Input:<br/>
acdb<br/>
>Output:<br/>
abdc<br/>

#### `<Problem link>` : <https://codeforces.com/contest/797/problem/C>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  First let's go through the example to make question clear:
  |  i | s  | t  | u  |
  | ------------ | ------------ | ------------ | ------------ |
  | 0  | cab  |   |   |
  | 1  | ab  | c  |   |
  | 2  | b  | ca  |   |
  | 3  |   | cb  | a  |
  | 4  |   | c  | ab  |
  | 5  |   |   | abc  |
  
  We will maintain a stack for *t* and perform two operations after each iteration.
  - At every point while processing string we will check if the current top of the stack is the minimal character in the remaining string **s**. If so then we will continue to pop from *t* and append to *u* as long as the condition holds.
  - We will push the current character in *s* onto the stack *t*
  
  After processing the string we will pop the elements from *t* and append it to *u*.
  
  When we do the above opeartions we make sure that we choose the minimal character possible thus maintaing the property of being lexicographically minimal.
  
  For checking First condition we use **suffix array** or we can check using a count array.
  
  ### References
  
  >https://codeforces.com/blog/entry/51588<br/>
  
</details>
