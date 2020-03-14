# Problem
	
A prime number is an integer greater than 1 that has no positive divisors other than 1 and itself. The first prime numbers are 2, 3, 5, 7, 11, 13, 17, ...

It is known that no non-constant polynomial function P(n) exists that evaluates to a prime number for all integers n. But there are some famous quadratic polynomials that are prime for all non-negative integers less than M (M depends on the polynomial).

You will be given ints A, B and C. Your method should return the smallest non-negative integer M such that A * M<sup>2</sup> + B * M + C is not a prime number.

### Definition
Class:	PrimePolynom<br/>
Method:	reveal<br/>
Parameters:	int, int, int<br/>
Returns:	int<br/>
Method signature:	int reveal(int A, int B, int C)<br/>
(be sure your method is public)

### Constraints
- A will be between 1 and 10000, inclusive.
-	B will be between -10000 and 10000, inclusive.
-	C will be between -10000 and 10000, inclusive. 

### Examples
>1<br/>
>-1<br/>
>41<br/>
>Returns: 41<br/>
>This is one of the famous polynomials.	<br/>

>1<br/>
>1<br/>
>41<br/>
>Returns: 40<br/>

>1<br/>
>1<br/>
>-13<br/>
>Returns: 0<br/>
>No negative numbers are prime.<br/>

>1<br/>
>-15<br/>
>97<br/>
>Returns: 48<br/>

>1<br/>
>-79<br/>
>1601<br/>
>Returns: 80<br/>
>The largest possible answer.<br/>

#### `<Problem link>` : <https://community.topcoder.com/stat?c=problem_statement&pm=4475&rd=8012>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Initialize M to 0, and then start iterating the values of the quadratic. For each value of the quadratic, check if it is prime. If the quadratic is not prime return M.
   
  ### References
  
  >https://www.topcoder.com/tc?module=Static&d1=match_editorials&d2=srm259<br/>
  
</details>
