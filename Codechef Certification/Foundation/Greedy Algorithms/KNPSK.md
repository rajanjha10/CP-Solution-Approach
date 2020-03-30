# Problem
Mike takes part in programming contests. His favourite topic is dynamic programming(DP). As he said, that he likes problems on DP, because "you spend a lot of time on thinking and a little time on coding".

In this problem you are to solve a version of the knapsack problem([link](http://en.wikipedia.org/wiki/Knapsack_problem)), one of the most famous examples of DP problem.

You are given **N** items, each has two parameters: a weight and a cost. Let's define **M** as the sum of the weights of all the items.

Your task is to determine the most expensive cost of a knapsack, which capacity equals to 1, 2, ..., **M**. A cost of a knapsack equals to the sum of the costs of all the elements of the knapsack. Also, when you have a knapsack with a capacity is equal to **C**, then you can fill it with items, whose sum of weights is not greater than **C**.

### Input
The first line of the input contains one integer **N**, denoting the number of the items.

The next **N** lines contain two integers **W** and **C** each, denoting the weight and the cost of the corresponding item.

### Output
For each capacity **C** (**1 ≤ C ≤ M**) of the knapsack, output a single integer - the most expensive cost for that capacity.

### Constraints
3 ≤ **N** ≤ 100000;

1 ≤ **W** ≤ 2, for each item;

1 ≤ **C** ≤ 10<sup>9</sup>, for each item.

### Example
>Input:<br/>
5<br/>
1 1<br/>
2 2<br/>
2 3<br/>
2 4<br/>
2 5<br/>

>Output:<br/>
1 5 6 9 10 12 13 14 15<br/>

### Explanations
In the test case, **M** equals to 9.  <br/>
For **C** = 1, it's optimal to choose {1} items;  <br/>
For **C** = 2, it's optimal to choose {5} items;  <br/>
For **C** = 3, it's optimal to choose {1, 5} items;  <br/>
For **C** = 4, it's optimal to choose {4, 5} items;  <br/>
For **C** = 5, it's optimal to choose {1, 4, 5} items;  <br/>
For **C** = 6, it's optimal to choose {3, 4, 5} items;  <br/>
For **C** = 7, it's optimal to choose {1, 3, 4, 5} items;  <br/>
For **C** = 8, it's optimal to choose {2, 3, 4, 5} items;  <br/>
For **C** = 9, it's optimal to choose {1, 2, 3, 4, 5} items.<br/>

#### `<Problem link>` : <https://www.codechef.com/problems/KNPSK>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The problem can be solved easily by separately handling two things:
  - weight = 1 and weight = 2
  - Even and odd size bags
  
  We separate the cost having same weights and sort them in decreasing order. We maintaining different answers for even say **ansEven** and odd say **andOdd**. We maintain count variables (cnto1, cnto2) for odd bags and (cnte1, cnte2) for even bags with weight 1 and 2 to keep track of the items which are already used. 
  
  ansOdd and ansEven will store answer for i-2 when i is odd and even respectively for all `i<n`.
  
  For bag of size 1 we have only one choice of selecting greatest unused cost item of weight 1 if exists.
  
  For odd size bags greater than 1 and all even size bags, we have three choices:
  - select two greatest unused cost items of weight 1 if exists
  - select single greatest unused cost item of weight 1 if exists (we are concerned with maximizing cost and not filling the entire capacity of a knapsack)
  - select a greatest unused cost item of weight 2 if exists
  
  Once we find out the one which gives the maximum out of these three options we increment count variables accordingly and store the answer in ans(Odd, Even).
  
  ### References
  
  >http://discuss.codechef.com/problems/KNPSK<br/>
  
</details>
