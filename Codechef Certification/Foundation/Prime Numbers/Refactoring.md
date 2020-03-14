# Problem
You have been hired to do some refactoring. You are not really sure what that is, but you think it has something to do with factoring a number multiple times.

Recall that a factorization of a positive integer n is a collection of at least two positive integers, each larger than one, whose product is n. Note that the order of the numbers in a factorization is ignored, so 2 * 12 and 12 * 2 represent the same factorization of 24. In fact, 24 has precisely 6 valid factorizations: 2 * 2 * 2 * 3, 2 * 2 * 6, 2 * 3 * 4, 2 * 12, 3 * 8, and 4 * 6.

To prepare for your job, write a program that, given an int n, returns the number of unique factorizations of n.

### Definition
Class:  Refactoring<br/>
Method: refactor<br/>
Parameters: int<br/>
Returns:  int<br/>
Method signature: int refactor(int n)<br/>
(be sure your method is public)<br/>

### Constraints
- n will be between 2 and 2,000,000,000 inclusive. 

### Example
>24<br/>
>Returns: 6<br/>
>This is the example from the problem statement.<br/>

>9973<br/>
>Returns: 0<br/>
>9973 is a prime number, so there are no valid factorizations of 9973.<br/>

>9240<br/>
>Returns: 295<br/>

>1916006400<br/>
>Returns: 7389115<br/>
>The number of factorizations will never be larger than this.<br/>

#### `<Problem link>` : <https://community.topcoder.com/stat?c=problem_statement&pm=2986&rd=5862>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We are going to use recursion. Specifically, if n = a * m, then a * m is a factorization of n, as is a multiplied by any factorization of m. Indeed, we can find all factorizations of n by iterating over all of its divisors a, and then recursively finding all factorizations of n/a. See Following pseudocode:
  ```cpp
      int count(int n) {
          int result = 0;
          for (int a = 2; a*a <= n; a++) 
          if (n % a == 0) 
              result += count(n/a) + 1;
          return result;
      } 
  ```
  
  Unfortunately, this will find certain factorizations more than once. For example, 2 * 3 * 4 and 4 * 3 * 2 might both be counted, even though they are the same factorization. To solve this, it suffices to generate the factors in non-decreasing order. This can be done as follows:
  ```cpp
    int count(int n, int lastFactor) {
        int result = 0;
        for (int a = lastFactor; a*a <= n; a++) 
        if (n % a == 0) 
            result += count(n/a, a) + 1;
        return result;
    } 
  ```
  ### References
  
  >https://www.topcoder.com/tc?module=Static&d1=match_editorials&d2=srm216<br/>
  
</details>
