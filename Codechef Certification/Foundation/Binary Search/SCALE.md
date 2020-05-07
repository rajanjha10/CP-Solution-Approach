# Problem
Kinh\_Can has a set of precious weights P<sub>1</sub>, P<sub>2</sub>, ..., P<sub>N</sub> in which the mass of the i<sup>th</sup> weight is P<sub>i</sub> = 3<sup>i-1</sup>, and a balance with 2 scales. On a nice day, Kinh\_Can decided to show off his set of precious weights to his friends, and said that he can put them in equilibrium with any weight as long as its mass is not more than the mass of the sum of his weights. At first, his friends didn't believe, but after many trials they realized that Kinh\_Can was right. In addition, while putting a thing whose mass is X on a scale, Kinh\_Can could put right away the weights added on the 2 scales to keep their blance without any trial. With a random weight X (X is a natural number, X ≠ 0). Your task is to put weights on scales in order to keep the 2 scales' balance like Kinh\_Can. The first scale initially weights X, and the second one weights 0.

### Input

Input has exactly one line consisting 2 numbers, the first is N and the second is X.

### Output

*   If there is no solution, you should write -1
*   If there is at least one solution for the problem, you should write exactly 2 lines:
    *   The first line contains some numbers descripting the indices of the weights in the first disc
    *   The second line contains some numbers description the indices of the weights in the second disc
    *   **Note:** One of 2 lines can be blank

### Constraints

*   1 ≤ N ≤ 20
*   1 ≤ X ≤ 2000000000

### Example
>Input:<br/>
10 2<br/>
>Output:<br/>
1<br/>
2<br/>

>Input:<br/>
10 5<br/>
>Output:<br/>
1 2<br/>
3<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/SCALE/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We need to generate all the possible sums using the set of precious weights. We sort the sums generated. 
   
  We then binary search for the first sum which is greater than or equal to x as we already have weight x on our first scale.

  Note that a valid distribution of weights among the two scales include:
  
  	- sum of weights on each of the scales should not have a 2 in it's ternary representation as we have only one precious weight of value 3<sup>i</sup>
  	- The sum of weights on the two scales should not have any set bit in common as we can't use the same weight on both the scales.

  Then for all the sums greater than equal to x (if any) we find out if it satisfies the above condition. If yes, then our answer is the indices of the set bits in ternary representation of sum-x and sum. 
  
</details>
