# Problem
Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example **gaga** is a lapindrome, since the two halves **ga** and **ga** have the same characters with same frequency. Also, **abccab**, **rotor** and **xyzxy** are a few examples of lapindromes. Note that **abbaab** is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.

### Input
First line of input contains a single integer **T**, the number of test cases.
Each test is a single line containing a string **S** composed of only lowercase English alphabet.

### Output
For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.

### Constraints
* 1 ≤ **T** ≤ 100
* 2 ≤ |**S**| ≤ 1000, where |**S**| denotes the length of **S**

### Example
>Input:<br/>
6<br/>
gaga<br/>
abcde<br/>
rotor<br/>
xyzxy<br/>
abbaab<br/>
ababc<br/>

>Output:<br/>
YES<br/>
NO<br/>
YES<br/>
YES<br/>
NO<br/>
NO<br/>

#### `<Problem link>` : <https://www.codechef.com/problems/LAPIN>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We just have to maintain a count of the characters for each halves of the string. We maintain a map and increment count of the character for left half and decrement the count for the right half. After the processing of the string is done, if we are left with a frequency of any character not equal to zero, then the ans is **NO** else the ans is **YES**.    
  
  ### References
  
  >https://discuss.codechef.com/t/lapin-editorial/2335<br/>
  
</details>
