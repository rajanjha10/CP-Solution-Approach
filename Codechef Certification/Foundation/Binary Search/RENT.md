# Problem
"ABEAS Corp." is a very small company that owns a single airplane. The customers of ABEAS Corp are large airline companies which rent the airplane to accommodate occasional overcapacity.

Customers send renting orders that consist of a time interval and a price that the customer is ready to pay for renting the airplane during the given time period. Orders of all the customers are known in advance. Of course, not all orders can be accommodated and some orders have to be declined. Eugene LAWLER, the Chief Scientific Officer of ABEAS Corp would like to maximize the profit of the company.

You are requested to compute an optimal solution.

#### Small Example

Consider for instance the case where the company has 4 orders:

*   Order 1 (start time 0, duration 5, price 10)
*   Order 2 (start time 3, duration 7, price 8)
*   Order 3 (start time 5, duration 9, price 7)
*   Order 4 (start time 6, duration 9, price 8)

The optimal solution consists in declining Order 2 and 3 and the gain is 10+8 = 18.  
Note that the solution made of Order 1 and 3 is feasible (the airplane is rented with no interruption from time 0 to time 14) but non-optimal.

### Input

The first line of the input contains a number T ≤ 30 that indicates the number of test cases to follow. The first line of each test case contains the number of orders n (n ≤ 10000). In the following n lines the orders are given. Each order is described by 3 integer values: The start time of the order st (0 ≤ st < 1000000), the duration d of the order (0 < d < 1000000), and the price p (0 < p < 100000) the customer is ready to pay for this order.

### Output

You are required to compute an optimal solution. For each test case your program has to write the total price paid by the airlines.

### Example
>Input:<br/>
1<br/>
4<br/>
0 5 10<br/>
3 7 14<br/>
5 9 7<br/>
6 9 8<br/>

>Output:<br/>
18<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/RENT/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We sort the given input of orders based on their ending time.

  We then do include-exclude dp to find the optimal answer. We store an array dp[] which for every i stores the best we can do with i orders. 

  The transitions are:
  - exclude: we simply consider the best we can do with i-1 orders i.e `exclude = dp[i-1]`
  - include: we include the current price and then we binary search for an order which can be included with our current order without overlapping (if exists) i.e
  `include = price[i] + dp[bs(start_of_i)]`
   
  Then `dp[i] = max(include, exclude)`.

  **Note: End time and Starting time of different jobs can't be same**

</details>
