# Problem
Famous ancient Greek sculptor Phidias is making preparations to build another marvelous monument. For this purpose he needs rectangular marble plates of sizes W1 x H1, W2 x H2, ..., WN x HN.

Recently, Phidias has received a large rectangular marble slab. He wants to cut the slab to obtain plates of the desired sizes. Any piece of marble (the slab or the plates cut from it) can be cut either horizontally or vertically into two rectangular plates with integral widths andheights, cutting completely through that piece. This is the only way to cut pieces and piecescannot be joined together. Since the marble has a pattern on it, the plates cannot be rotated: if Phidias cuts a plate of size A ? B then it cannot be used as a plate of size B ? A unless A = B. He can make zero or more plates of each desired size. A marble plate is wasted if it is not of any of the desired sizes after all cuts are completed. Phidias wonders how to cut the initial slab so that as little of it as possible will be wasted.

As an example, assume that in the figure below the width of the original slab is 21 and the height of the original slab is 11, and the desired plate sizes are 10 x 4, 6 x 2, 7 x 5, and 15 x 10. The minimum possible area wasted is 10, and the figure shows one sequence of cuts with total waste area of size 10.

![](https://i.ibb.co/zbkGt7n/phidias.png)

Your task is to write a program that, given the size of the original slab and the desired plate sizes, calculates the minimum total area of the original slab that must be wasted.

### Input
t - the number of test cases, then t test cases follow [t <= 20]. The first line of each test case contains two integers: first W, the width of the original slab, and then H, the height of the original slab. The second line contains one integer N: the number of desired plate sizes. The following N lines contain the desired plate sizes. Each of these lines contains two integers: first the width W<sub>i</sub> and then the height H>sub>i</sub> of that desired plate size (1 <= i <= N). \[1 <= W <= 600, 1 <= H <= 600, 0 < N <= 200, 1 <= W<sub>i</sub> <= W, and 1 <= H<sub>i</sub> <= H.\]

### Output
For each test case output one line with a single integer: the minimum total area of the original slab that must be wasted.

### Example
>Input:<br/>
1<br/>
21 11<br/>
4<br/>
10 4<br/>
6 2<br/>
7 5<br/>
15 10<br/>

>Output:<br/>
10<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/PHIDIAS/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
