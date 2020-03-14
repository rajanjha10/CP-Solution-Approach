# Problem
You will be given a string of digits that supposedly come from three prime numbers. The digits will be given in a random order. Your task is to find the three prime numbers, if they exist. If there are three such primes, return them sorted least to greatest. If there is more than one possible set of three primes, return the set with the smallest product. If there is no such set, return { }.

For example, the five digits of the primes 5, 13, and 19 could be given to you as "39151". There are several other sets of prime numbers that could also be rearranged to give this input, for example { 5, 31, 19 } and { 3, 11, 59 }. The set with the smallest product is { 5, 13, 19 }, so those are the three primes your method should return.

Each digit of each prime will be present in the input. For example, if the input contains exactly two occurrences of the digit "1" (as in the example above), you must use the digit "1" exactly twice.

Any zeros in the input may not be used as leading zeros in any of the three primes.

### Definition
    	
Class:	PrimeAnagrams<br/>
Method:	primes<br/>
Parameters:	String<br/>
Returns:	int[]<br/>
Method signature:	int[] primes(String anagram)<br/>
(be sure your method is public)<br/>

### Notes
-	If you find two sets of primes with the same product, you have made a startling discovery!

### Constraints
-	anagram will contain between 3 and 8 characters, inclusive.
-	Each character of anagram will be a digit.

### Examples
>"39151"<br/>
>Returns: { 5,  13,  19 }<br/>
>This is the example from the problem statement.<br/>

>"921179"<br/>
>Returns: { 2,  17,  199 }<br/>

>"01123"<br/>
>Returns: { 2,  3,  101 }<br/>
>The input may have a leading zero, but the primes may not. {2, 3, 011} is not a valid answer.<br/>

>"0707070"<br/>
>Returns: { }<br/>

>"222"<br/>
>Returns: { 2,  2,  2 }<br/>

>"123"<br/>
>Returns: { }<br/>
>1 is not prime.<br/>

#### `<Problem link>` : <https://community.topcoder.com/stat?c=problem_statement&pm=3458&rd=5869>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  There are 8 factorial (40320) ways to rearrange the order of 8 digits. There are 7 choose 2 (21) ways to break each of those up into 3 groups of digits. That gives only 846720 sets of primes to test, and that even overcounts by a factor of 6 because it tests each set in all 6 orders. So this problem can easily be solved by brute force.

The first step is to loop over all permutations of the input order. For looping over all permutations you can use backtracking or STL in C++. For each of these permutations, you can separate them into all possible groups of 3 numbers, as demonstrated by the following pseudocode:
```cpp
     given: p (one permutation of the input string)

     for i = 1 to len(p)-3
         for j = i+1 to len(p)-2
         {
             // 1st number is digits 0 through i-1
             // 2nd number is digits i through j-1
             // 3rd number is digits j through len(p)-1
         }
```
Then, for each group of 3 numbers, you test that none of them have a leading zero, and then test if all three are prime.

Once you find a set of 3 prime numbers, you compare their product to the product of the primes in the best set you have found so far. No further tiebreaker is necessary, because every number has a unique prime factorization, and therefore no two sets of prime numbers can have the same product. Return the set with minimum product
   
 ### References
  
  >[All Permutations of a string using Backtracking](https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/)
  
  >https://www.topcoder.com/tc?module=Static&d1=match_editorials&d2=srm223
  
</details>
