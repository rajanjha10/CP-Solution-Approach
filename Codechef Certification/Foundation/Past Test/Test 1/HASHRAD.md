# Problem
In a far away Galaxy of Tilky Way, there was a planet Tarth where the sport of Tompetitive Toding was very popular. According to legends, there lived a setter known for his complex cryptography problems.

Radhesh is learning Hashing!! He has a string **S** consisting only of **lowercase English alphabets**. To each alphabet, he assigns a value, i.e. a is assigned **0, b** is assigned **1**, . . ., and *z* is assigned **25**. Now, hash of a string **S** is sum of values of all of its characters.

Now Ms Geethakoomaree, his Cryptography teacher, says that the hash function is poor because there can be multiple strings with same hash value. Hence, given a string **S**, you need to find its hash and another string **P** of same length (which is not same as **S**) with same hash. In case multiple **P** exists, print the lexicographically smallest one. If no such string exists, print **−1**.

### Input
- The first line has a single integer **T**, denoting number of test cases per file.
- The only line of each testcase contains the string **S**.

### Output
For each test case, in a new line, print the hash value of the string **S** and another string **P** (with same hash value and same length as **S** ) separated by a space. If no such **P** exists, print **-1** instead of **P**. If multiple **P** exists, print just the lexicographically smallest one.

### Constraints
* **1 ≤ T ≤ 10<sup>5</sup>** 
* **1 ≤ |S| ≤ 10<sup>5</sup>**
* Sum of **|S|** over the entire test file does not exceed **10<sup>6</sup>**
* **S** consists of only lowercase english alphabets.

### Subtasks
* **Subtask 1 (10% points): |S| ≤ 5.**
* **Subtask 2 (20% points): Input string is lexicographically largest string of that hash value and that length.**
* **Subtask 2 (70% points): Original Constraints.**

### Example
>Input:<br/>
2<br/>
abz<br/>
yzz<br/>

>Output:<br/>
26 acy<br/>
74 zyz<br/>

### Explanation
- For first case, the hash value is **0 + 1 + 25 = 26**. We can confirm that out of all possible strings, acy is lexicographically smallest.
- For second test case, we have only **3** possible strings with same hash, **yzz**, **zyz** and **zzy**. Out of these, **yzz** is same as **S** and hence rejected, **zyz** is hence printed as its lexicographically smaller than **zzy**.

#### `<Problem link>` : <https://www.codechef.com/FLPAST01/problems/HASHRAD>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We first find out the hash value of the string.

  If we see, the best answer that is lexicographically smallest will be when there are as much 'a' as possible at the start of the string.

  We make a string ans of all a's of size equal to the string. From the rightmost index we fill it with the minimum character value 25(z) or with the remaining value to get a hash equal to the string.

  Now there are multiple cases:
  - If ans!=s then we return ans
  - If ans==s
  	- Then we try sorting ans as sorting will still give the lexicographically smallest. If sort(ans)!=s then we return sort(ans)
  	- Else we understand that we can't start with the least value char in answer. Hence, for the first two position where the first position char is not z and the next position char is z, we decrement z and increment the other same as in example 2. If change(ans)!=s then we return change(ans).
  	- Else the answer is the next permutation of the given string. If the next permutation of the string exists then we return next_permutation(s)
  	- Else we return -1
  
</details>
