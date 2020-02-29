# Problem
DevG likes too much fun to do with numbers. Once his friend Arya came and gave him a challenge, he gave DevG an array of digits which is forming a number currently (will be called as given number). DevG was challanged to find the just next greater number which can be formed using digits of given number. Now DevG needs your help to find that just next greater number and win the challenge.

### Input
The first line have t number of test cases (1 <= t <= 100). In next 2*t lines for each test case first there is number n (1 <= n <= 1000000) which denotes the number of digits in given number and next line contains n digits of given number separated by space.

### Output
Print the just next greater number if possible else print -1 in one line for each test case.

**Note** : There will be no test case which contains zero in starting digits of any given number.

### Example
>Input:<br/>
2<br/>
5<br/>
1 5 4 8 3<br/>
10<br/>
1 4 7 4 5 8 4 1 2 6<br/>

>Output:<br/>
15834<br/>
1474584162<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/JNEXT/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  There is a not so intuitive algorithm based on observations to solve this problem
  
  Following are the steps of the algorithm:
  1. Traverse the given number from rightmost digit, keep traversing till you find a digit which is smaller than the previously traversed digit. For example, if the input number is “534976”, we stop at **4** because 4 is smaller than next digit 9. If we do not find such a digit, then output is -1.
  2. Now search the right side of above found digit ‘d’ for the smallest digit greater than ‘d’. For “53**4**976″, the right side of 4 contains “976”. The smallest digit greater than 4 is **6**.
  3. Swap the above found two digits, we get 53**6**97**4** in above example.
  4. Now sort all digits from position next to ‘d’ to the end of number. The number that we get after sorting is the output. For above example, we sort digits in bold 536**974**. We get “536**479**” which is the just next greater number. 
  
  If you Know an optimal method using stacks and queues, comment down below.
  
  ### References
  
  >https://www.geeksforgeeks.org/find-next-greater-number-set-digits/<br/>
  
</details>
