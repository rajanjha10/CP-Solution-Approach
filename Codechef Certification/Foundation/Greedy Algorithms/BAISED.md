# Problem
Usually, results of competitions are based on the scores of participants. However, we are planning a change for the next year of IPSC. During the registration each team will be able to enter a single positive integer : their preferred place in the ranklist. We would take all these preferences into account, and at the end of the competition we will simply announce a ranklist that would please all of you.

But wait... How would that ranklist look like if it won't be possible to satisfy all the requests?

Suppose that we already have a ranklist. For each team, compute the distance between their preferred place and their place in the ranklist. The sum of these distances will be called the badness of this ranklist.

### Problem specification
Given team names and their preferred placements find one ranklist with the minimal possible badness.

### Input specification
The first line of the input file contains an integer **T** specifying the number of test cases. Each test case is preceded by a blank line.

Each test case looks as follows: The first line contains **N** : the number of teams participating in the competition. Each of the next **N** lines contains a team name (a string of letters and numbers) and its preferred place (an integer between 1 and **N**, inclusive). No two team names will be equal.

### Output specification
For each of the test cases output a single line with a single integer : the badness of the best ranklist for the given teams.

### Example
>Input:<br/>
2<br/>
><br/>
7<br/>
noobz 1<br/>
llamas 2<br/>
Winn3rz 2<br/>
5thwheel 1<br/>
NotoricCoders 5<br/>
StrangeCase 7<br/>
WhoKnows 7<br/>
><br/>
3<br/>
ThreeHeadedMonkey 1<br/>
MoscowSUx13 1<br/>
NeedForSuccess 1<br/>

>Output:<br/>
5<br/>
3<br/>

### Explanation
In the first test case, one possible ranklist with the minimal badness is:

    1. noobz
    2. llamas
    3. Winn3rz
    4. 5thwheel
    5. NotoricCoders
    6. WhoKnows
    7. StrangeCase

In the second test case all ranklists are equally good.

#### `<Problem link>` : <https://www.spoj.com/problems/BAISED/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  An important thing to note is that there can't be empty spaces in a ranklist. So if we have two teams with desired positions 1 and 10, we have to rank them at 1 and 2. In essence we will rank the teams from 1 to n.
  
  We simply sort the array and find the teams who are not at their desired position and add their badness to the answer.
  This works because all the positions need to be filled and sorting ensures that we minimize the badness of individual teams and ultimately this results in the best ranklist with minimum badness.
  
  Consider ex: n=5<br/>
  a[] = {2, 4, 5, 1}<br/>
  The best ranklist is {1, 2, 4, 5} at ranks {1, 2, 3, 4} with a badness of 2.
  
  The approach of placing teams at their desired ranks and then filling in blanks from remaining teams fails in the above test case and leaves a blank at position 3 in the ranklist.
  
  ### References
  
  >https://ipsc.ksp.sk/2006/real/solutions/b.html<br/>
  
</details>
