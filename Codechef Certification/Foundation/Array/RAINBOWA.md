# Problem

Chef likes all arrays equally. But he likes some arrays more equally than others. In particular, he loves Rainbow Arrays.

An array is Rainbow if it has the following structure:

- First **a<sub>1</sub>** elements equal **1**.
- Next **a<sub>2</sub>** elements equal **2**.
- Next **a<sub>3</sub>** elements equal **3**.
- Next **a<sub>4</sub>** elements equal **4**.
- Next **a<sub>5</sub>** elements equal **5**.
- Next **a<sub>6</sub>** elements equal **6**.
- Next **a<sub>7</sub>** elements equal **7**.
- Next **a<sub>6</sub>** elements equal **6**.
- Next **a<sub>5</sub>** elements equal **5**.
- Next **a<sub>4</sub>** elements equal **4**.
- Next **a<sub>3</sub>** elements equal **3**.
- Next **a<sub>2</sub>** elements equal **2**.
- Next **a<sub>1</sub>** elements equal **1**.
- **a<sub>i</sub>** can be any non-zero positive integer.
- There are no other elements in array.

Help Chef in finding out if the given array is a Rainbow Array or not.

### Input

- The first line of the input contains an integer **T** denoting the number of test cases.
- The first line of each test case contains an integer **N**, denoting the number of elements in the given array.
- The second line contains **N** space-separated integers **A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>** denoting the elements of array.

### Output

- For each test case, output a line containing "yes" or "no" (without quotes) corresponding to the case if the array is rainbow array or not.

### Constraints
* 1 ≤ **T** ≤ 100
* 7 ≤ **N** ≤ 100
* 1 ≤ **A<sub>i</sub>** ≤ 10

### Subtasks

- **Subtask 1** (100 points) : Original constraints

### Example
>Input:<br/>
3<br/>
19<br/>
1 2 3 4 4 5 6 6 6 7 6 6 6 5 4 4 3 2 1<br/>
14<br/>
1 2 3 4 5 6 7 6 5 4 3 2 1 1<br/>
13<br/>
1 2 3 4 5 6 8 6 5 4 3 2 1<br/>

>Output:<br/>
yes<br/>
no<br/>
no<br/>

### Explanation
The first example satisfies all the conditions.

The second example has **1** element of value **1** at the beginning and **2** elements of value **1** at the end.

The third one has no elements with value **7** after elements with value **6**.

#### `<Problem link>` : <https://www.codechef.com/problems/RAINBOWA>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  If any of the numbers from 1 to 7 is missing then the answer is **no**. Then we check if the array is a palindrome or not using two pointers i and j. If at any point the array is not a palindrome while maintaining the constraints then answer is **no** else the answer is **yes**. 
  
  ### References
  
  >https://discuss.codechef.com/t/rainbowa-editorial/15912<br/>
  
</details>
