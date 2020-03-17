# Problem
Sherlock is stuck. There is a **N X N** grid in which some cells are empty (denoted by ‘.’), while some cells have rocks in them (denoted by **'#'**). Sherlock is on the South of the grid. He has to watch what is happening on the East of the grid. He can place a mirror at **45** degrees on an empty cell in the grid, so that he'll see what is happening on East side by reflection from the mirror.

But, if there's a rock in his line of sight, he won't be able to see what's happening on East side. For example, following image shows all possible cells in which he can place the mirror.

![](http://www.codechef.com/download/COOK50/grid.jpg)

You have to tell Sherlock in how many possible cells he can place the mirror and see what's happening on East side.

### Input
First line, **T**, the number of testcases. Each testcase will consist of **N** in one line. Next **N** lines each contain **N** characters.

### Output
For each testcase, print the number of possible options where mirror can be placed to see on the East side.

### Constraints
- **1 ≤ T ≤ 10**
- **1 ≤ N ≤ 1000**

### Example
>Input:<br/>
2<br/>
3<br/>
#..<br/>
#..<br/>
#..<br/>
3<br/>
#.#<br/>
#.#<br/>
#.#<br/>

>Output:<br/>
6<br/>
0<br/>

### Explanation
**Example case 1**. All places where rock are not there are valid positions.<br/>
**Example case 2**. No valid positions.

#### `<Problem link>` : <https://www.codechef.com/problems/GRID>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We will use two matrix to account for blockages:
  - row matrix to account for blockage from east side
  - column matrix to account for blockage from south side
  
  For row matrix, we traverse top down right to left and put **0** if there is a blockage either by itself or by it's neighbour in east
  For row matrix, we traverse bottom up left to right and put **0** if there is a blockage either by itself or by it's neighbour in south
  
  If `row[i][j]==1 and col[i][j]==1` for any **i**, **j** (i, j = 0..n) then we can place the mirror there. Hence we increment our answer.
  
  ### References
  
  >https://discuss.codechef.com/problems/GRID<br/>
  
</details>
