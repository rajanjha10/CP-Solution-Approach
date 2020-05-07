# Problem
Chef Ciel wants to put a fancy neon signboard over the entrance of her restaurant. She has not enough money to buy the new one so she bought some old neon signboard through the internet. Ciel was quite disappointed when she received her order - some of its letters were broken. But she realized that this is even better - she could replace each broken letter by any letter she wants. So she decided to do such a replacement that the resulting signboard will contain the word **"CHEF"** as many times as possible.

We can model the signboard as a string **S** having capital letters from **'A'** to **'Z'**, inclusive, and question marks **'?'**. Letters in the string indicate the intact letters at the signboard, while question marks indicate broken letters. So Ciel will replace each question mark with some capital letter and her goal is to get the string that contains as many substrings equal to **"CHEF"** as possible. If there exist several such strings, she will choose the lexicographically smallest one.

**Note 1.** The string **S = S<sub>1</sub>...S<sub>N</sub>** has the substring **"CHEF"** if for some **i** we have **S<sub>i</sub>S<sub>i+1</sub>S<sub>i+2</sub>S<sub>i+3</sub> = "CHEF"**. The number of times **"CHEF"** is the substring of **S** is the number of those **i** for which **S<sub>i</sub>S<sub>i+1</sub>S<sub>i+2</sub>S<sub>i+3</sub> = "CHEF"**.

**Note 2.** The string **A = A<sub>1</sub>...A<sub>N</sub>** is called lexicographically smaller than the string **B = B<sub>1</sub>...B<sub>N</sub>** if there exists **K** from **1** to **N**, inclusive, such that **A<sub>i</sub> = B<sub>i</sub>** for **i = 1, ..., K-1**, and **A<sub>K</sub> < B<sub>K</sub>**. In particular, **A** is lexicographically smaller than **B** if **A<sub>1</sub> < B<sub>1</sub>**. We compare capital letters by their positions in the English alphabet. So **'A'** is the smallest letter, **'B'** is the second smallest letter, ..., **'Z'** is the largest letter.

### Input
The first line of the input contains an integer **T** denoting the number of test cases. The description of **T** test cases follows. The only line of each test case contains a string **S**.

### Output
For each test case, output a single line containing the content of the signboard Chef Ciel will come up with. That is you should output the lexicographically smallest string that could be obtained from the input string by replacing all its question marks by some capital letters and having as many substrings equal to **"CHEF"** as possible.

### Constraints
*   **1** ≤ **T** ≤ **2013**
*   **1** ≤ length of **S** ≤ **2013**
*   Each character in **S** is either a capital letter from **'A'** to **'Z'**, inclusive, or the question mark **'?'**.

### Example
>Input:<br/>
5<br/>
????CIELIS???E?<br/>
????CIELISOUR???F<br/>
T?KEITE?SY<br/>
????????<br/>
???C???<br/>

>Output:<br/>
CHEFCIELISACHEF<br/>
CHEFCIELISOURCHEF<br/>
TAKEITEASY<br/>
CHEFCHEF<br/>
AAACHEF<br/>

### Explanation
**Example Case 1.** Here the resulting string can have at most 2 substrings equal to **"CHEF"**. For example, some possible such strings are:

*   **CHEF**CIELISA**CHEF**
*   **CHEF**CIELISQ**CHEF**
*   **CHEF**CIELISZ**CHEF**

However, lexicographically smallest one is the first one.

**Example Case 3.** Here the resulting string cannot have **"CHEF"** as its substring. Therefore, you must simply output the lexicographically smallest string that can be obtained from the given one by replacing question marks with capital letters.

#### `<Problem link>` : <https://www.codechef.com/FLMOCK03/problems/MANYCHEF>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The two important things to note is:
  - Since all "CHEF" characters are distinct, all occurrences of "CHEF"s in S must be non-overlapping. Hence, each time we can replace the current positions of string with “CHEF”, it is optimal to replace with it.
  - To get the lexicographically smallest answer we iterate backwards inserting chef wherever possible and then replace remaining "?" with "A" so that "A"'s appear at the start of the string.
  
  We can simply bruteforce the string from backwards and greedily change every possible replacement to "CHEF". Fill the remaining "?" with "A".
  
  The pseudo code is:
  ```cpp
    for(i = N-4; i ≥ 0; i--){
        if can_replace(S[i....i+3], "CHEF")
            replace(S[i..i+3], "CHEF")
    }
    
    for(i = 0; i < N; i++){
        if (S[i] == '?')
            S[i] = 'A'
    }
    
  ``` 
  
  ### References
  
  >https://discuss.codechef.com/questions/5606/manychef-editorial<br/>
  
</details>
