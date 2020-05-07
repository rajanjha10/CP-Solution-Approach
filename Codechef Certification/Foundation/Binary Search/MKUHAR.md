# Problem
Lisa works as a waitress in a restaurant. Tonight is her birthday so Lisa asked the chef to prepare his special meal for her friends. The chef's meal is made of N ingredients. To prepare one serving of the meal he needs a certain amount of each ingredient.

There are some ingredients already available in the kitchen and Lisa will buy the rest at the grocery store. The store has all the necessary ingredients, each coming in smaller and larger packages. Lisa has M dollars and wants to spend them so that the chef can make the most servings of his meal.

### Input
The first line contains two integers N and M, 1 ≤ N ≤ 100, 1 ≤ M ≤ 100 000. Each of the following N lines contains 6 positive integers, information about one ingredient. These specify, in order:

  - X, 10 ≤ X ≤ 100, the amount of the ingredient needed in one serving;

  - Y, 1 ≤ Y ≤ 100, the amount of the ingredient already available in the kitchen;

  - SM, 1 ≤ SM < 100, the size of the smaller package at the store;

  - PM, 10 ≤ PM < 100, the price of the smaller package;

  - SV, SM < SV ≤ 100, the size of the larger package; and

  - PV, PM < PV ≤ 100, the price of the larger package.

### Output
Output the largest number of servings the chef can make if Lisa spends her money wisely.

### Example
>Input:<br/>
2 100   <br/>
10 8 10 10 13 11   <br/>
12 20 6 10 17 24   <br/>

>Output:<br/>
5<br/>

>Input:<br/>
3 65   <br/>
10 5 7 10 13 14   <br/>
10 5 8 11 14 15   <br/>
10 5 9 12 15 16   <br/>

>Output:<br/>
2<br/>

### Explanation
In the first example, for 99 dollars Lisa will buy three smaller and one larger package of the first ingredient, as well as one smaller and two larger packages of the second ingredient (3x10 + 1x11 + 1x10 + 2x24 = 99).

The chef will then have 51 units (8 + 3x10 + 1x13) of the first ingredient and 60 units (20 + 1x6 + 2x17) of the second ingredient, enough for 5 servings.

#### `<Problem link>` : <https://www.spoj.com/problems/MKUHAR/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We will binary search for all the number of servings to find the maximum. We will use an eval() function which tells us whether it is possible to make mid number of servings with the given money. If yes, then we search for a higher number of serving or else a lower number of serving.

  eval():<br/>
  for all the n ingredients:
  - We find the required amount to make mid servings
  - We find the minimum amount of money we need to spend to buy required amount

  If the total amount of money needed is less than or equal to the money we have then we return true or else false
   
  To find the minimum amount of money we try purchasing 0, 1, 2, ...., ceil(req/SM) packets of smaller servings and the remaining required amount of larger servings and update our answer with the minimum cost occurred. 

</details>
