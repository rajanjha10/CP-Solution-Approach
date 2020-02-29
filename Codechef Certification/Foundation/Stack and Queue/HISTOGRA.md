# Problem
A histogram is a polygon composed of a sequence of rectangles aligned at a common base line. The rectangles have equal widths but may have different heights. For example, the figure on the left shows the histogram that consists of rectangles with the heights 2, 1, 4, 5, 1, 3, 3, measured in units where 1 is the width of the rectangles:

![](https://sangwoo0727.github.io/assets/img/Algorithm/BOJ6549_1.png)

Usually, histograms are used to represent discrete distributions, e.g., the frequencies of characters in texts. Note that the order of the rectangles, i.e., their heights, is important. Calculate the area of the largest rectangle in a histogram that is aligned at the common base line, too. The figure on the right shows the largest aligned rectangle for the depicted histogram.

### Input Specification
The input contains several test cases. Each test case describes a histogram and starts with an integer `n`, denoting the number of rectangles it is composed of. You may assume that `1 <= n <= 100000`. Then follow `n` integers `h1, ..., hn`, where `0 <= hi <= 1000000000`. These numbers denote the heights of the rectangles of the histogram in left-to-right order. The width of each rectangle is `1`. A zero follows the input for the last test case.

### Output Specification
For each test case output on a single line the area of the largest rectangle in the specified histogram. Remember that this rectangle must be aligned at the common base line.

### Example
>Sample Input:<br/>
7 2 1 4 5 1 3 3<br/>
4 1000 1000 1000 1000<br/>
0<br/>

>Sample Output:<br/>
8<br/>
4000<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/HISTOGRA/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  One of the finest stack problems. :purple_heart:
  
  The main observation is whenever we encounter a height less **(h<sub>i</sub>)** than the previous one **(h<sub>j</sub>)** then **h<sub>j</sub>** is the best we can do in between **h<sub>j</sub>** and **h<sub>i</sub>** where j goes from i-1, i-2,....,k+1 where **h<sub>k</sub>** is less than **h<sub>i</sub>**.
  
  Closer look at the main observation:
  
  ![](https://i.stack.imgur.com/nKB0r.png)
  
   If for every bar x, we know the first smaller bar on its each side, let's say l and r, we are certain that `height[x] * (r - l - 1)` is the best shot we can get by using height of bar x. In the figure above, 1 and 2 are the first smaller of 5.
   
  We use an increasing stack of indices to answer queries of first smaller bar on its left and on its right in `O(1)`. For exploring how increasing stack works refer [this](https://stackoverflow.com/questions/4311694/maximize-the-rectangular-area-under-histogram).
  
  Algorithm:
  - We add -1 at the end of the list to make sure we pop all the bars from the stack at the end.
  - if stack is empty or the incoming bar height is greater than or equal to height at stack top then push index
  - if incoming bar height is less than height at stack top then pop until the condition holds as well as calculate max Area for each popped bar at index `maxHIndex`.
  
  For calculating maxArea:
  - current Index i is the first smaller bar on its right
  - stack top j is the first smaller bar on its left if stack is not empty
  - `maxArea = max(maxArea, h[maxHIndex] * (index.empty() ? i : i - index.top() -1))`
    
  ### References
  
  >https://stackoverflow.com/questions/4311694/maximize-the-rectangular-area-under-histogram :star:<br/>
  >https://www.geeksforgeeks.org/largest-rectangle-under-histogram/<br/>
  >https://www.youtube.com/watch?v=ZmnqCZp9bBs
  
</details>
