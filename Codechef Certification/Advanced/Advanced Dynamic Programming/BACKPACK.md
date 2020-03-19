# Problem
One day Blue Mary goes to a nearby supermarket to buy some goods. She has a backpack, whose capacity is V-Max. She finds that there are many goods in the market, each has a volume Vi(it will always be a multiple of 10 and less than 10000) and an importance C<sub>i</sub>(1<= C<sub>i</sub> <=5). Since she has almost unlimited money, the only problem she is to solve is how to choose goods such that the total volume won't exceed the capacity of the backpack and the sum of the product of the volume and the importance of each good is maximum. To be an excellent mathematician, she comes up with the answer quickly, and now she wants you to do a harder task. There are two kinds of goods: main goods and attachments. If you want to buy an attachment you must buy its main good before.

### Input
Multiple test cases, the number of them is given in the very first line.

For each test case:

The first line contains two space-separated integers V-Max (1<=V-Max<=32000) and the number of the goods N (1<=N<=60). N lines follow, each contains three space-separated integers V<sub>i</sub>, C<sub>i</sub> and a integer u. If u is not 0, this good is an attachment of good u(as the order in the input file).

To make the problem not too difficult, Blue Mary tells you that:

(A) An attachment won't have any attachments which belong to it.

(B) A main good will always have less than 3 attachments.

### Output
For each test case:

The first and the only line contains a single integer denoted the answer.

### Example
>Input:<br/>
1<br/>
1000 5<br/>
800 2 0<br/>
400 5 1<br/>
300 5 1<br/>
400 3 0<br/>
500 2 0<br/>

>Output:<br/>
2200<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/BACKPACK/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
