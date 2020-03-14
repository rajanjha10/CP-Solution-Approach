# Problem
**Kingdom Of Fire and Ice**

There is a kingdom in land of fire and ice known as westros. The kingdom is ruled by mad king Amen Targareyan. Further more Westros is divided into two territories.
One territory known as ice because it is always snowing and other Fire beacuse of volcano near by area. There is rebellion to overthrow the mad king to bring peace to Westros.
There is a secret attack on red fort by rebellion force lead by Luke Skywalker. There is snitch in rebellion force. He trades the secret attack plan to mad king.
However mad king has superpower to sense disturbance in the force. He sends out his best knights to scout the rebellion force. He got to know that rebel force outmatch city guards
one to hundred. Moreover he came to know that Luke is last jedi who can detroy him.In order to win this battle against rebels, the mad king decided to use N common folks as soldiers.
He select a bunch of people from a territory and train them .Now king can only select odd number of people from land of fire and from land of ice in one go.
He cannot select bunch of people consecutively from either territory.In how may ways the mad king could assemble his army to battle against rebel forces ?
Note: The number of people in each territory is infinte

### Input
The first line of input contains an integer T denoting the number of test cases.
Every line of each test case contains a single integer N denoting common folks as soldiers and an integer M also.

### Output
For each test case output a single line consisting a single integer denoting the modulo M of the number of ways the king could assemble his army.

### Constraints
* 1<=T<=10<sup>6</sup>
* 1<=N<=10<sup>3</sup>
* 1<=M<=10<sup>6</sup>

### SUBTASK
- subtask #1: N<=30, M<=10<sup>3</sup> (10 points)
- subtask #2: N,M<=10<sup>3</sup> (30 points)
- subtask #3: original constraints (60 points)

### Example
>Input:<br/>
1<br/>
4 10<br/>

>Output:<br/>
6<br/>

### Explanation
In first test case the number of ways to assemble his army are:
1) one from fire, one from ice, one from fire, one from ice
2) one from fire, three from ice
3) one from ice, one from fire,one from ice , one from fire
4) three from ice, one from fire
5) three from fire, one from ice
6) one from ice, three from fire

#### `<Problem link>` : <https://www.codechef.com/problems/FICE>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Let's denote a soldier of Fire by F and a soldier of Ice by S.
  
  For N=5, we will get:
  
  F  S  F  S  F  &nbsp;        S  F  S  F  S <br/>
  F  F  F  F  F  &nbsp;        S  S  S  S  S <br/>
  F  F  F  S  F  &nbsp;        S  S  S  F  S <br/>
  F  S  F  F  F  &nbsp;        S  F  S  S  S <br/>
  F  S  S  S  F  &nbsp;        S  F  F  F  S <br/>
  
  So, The no. of ways we get by selecting F as First Soldier will be the same if we select S as the First Soldier.
  So, we will find the ways we can select soldiers starting with F and then we will multiply the answer by 2 to get the final answer.
  
  We will use recursion and for each n we will find out answer for all `n-i` where i is odd and less than n.
  In each iteration we select i no of soldiers and reduce the problem to a size of n-i. 
  So the recursion is given by `F[n] = .... + F[n-i] + F[n-(i+2)] + F[n-(i+5)] + ..... `
  
  This turns out to be the same as nth fibonacci number. Using only recursion will result in TLE. We use memoization to store the results by making a table memo. For all n, we solve for `n-i` when i=1 i.e `n-1`. Hence, We can find the answers for all n's when we solve for an upperbound.
  
  This improves speed but since the answer will get large we will not be able to store it in even **uint64_t**. Hence we will store it in string and then use string addition to add the results of recursion.
  
  Then we will answer all the queries by taking mod of the string stored at memo[n].
  
  ### References
  
  >https://discuss.codechef.com/t/fice-editorial/13066 <br/>
  >https://www.geeksforgeeks.org/sum-two-large-numbers/ <br/>
  >https://www.geeksforgeeks.org/how-to-compute-mod-of-a-big-number/ <br/>
  
</details>
