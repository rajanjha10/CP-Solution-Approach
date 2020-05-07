# Problem
The local zoo has acquired a large open garden in which animals may freely move as in their natural habitats and entertain visitors with their usual shenanigans.

The most popular animals are monkeys. With their climbing and jumping and other skills, they delight old and young visitors alike.

One species of monkey has specialized in climbing tall trees and picking off coconuts. Another species has specialized in breaking them open.

There are N monkeys of the first type (numbered 1 through N) and M monkeys of the second type (numbered 1 through M).

Monkey k of the first type takes Ak seconds to find a good spot on the tree, after which it picks off its first coconut. After that the monkey produces a new coconut every Bk seconds.

Monkey k of the second type takes Ck seconds to find a good tool for opening the coconuts, after which it opens its first coconut. After that the monkey opens another coconut every Dk seconds.

Unfortunately, the second type of monkey is extremely aggressive so the two types may not be in the garden at the same time. Therefore, zoo keepers will chase away the first type of monkeys as soon as they have picked off all the coconuts. Similarly, if monkeys of the same type stay too long after opening all the coconuts, fights will ensue. Because of that, zoo keepers will send them away as soon as they have opened all the coconuts.

The zoo keepers first arrive immediately after all coconuts have been picked, and again immediately after the monkeys open them all. The time needed for monkeys to enter or leave the garden is also negligibly small.

Tomislav especially likes the second type of monkey, but can never guess when to arrive in order to see them. Help him calculate the time when the second type arrives if he knows the total time that monkeys spent in the garden, but does not know the number of coconuts in the garden.

### Input

The first line contains the integer T (1 ≤ T ≤ 1 000 000 000), the total time that monkeys spent in the garden, in seconds.

The next line contains the integer N (1 ≤ N ≤ 100), the number of monkeys of the first type.

Each of the following N lines contains two integers Ak and Bk (1 ≤ Ak, Bk ≤ 1 000 000 000), how fast monkey k of the first type is.

The next line contains the integer M (1 ≤ M ≤ 100), the number of monkeys of the second type.

Each of the following M lines contains two integers Ck and Dk (1 ≤ Ck, Dk ≤ 1 000 000 000), how fast monkey k of the second type is.

### Output

Output the number of seconds between the arrival of the first type of monkeys and the arrival of the second type.

### Example
>Input:<br/>
20<br/>
2<br/>
3 2<br/>
1 3<br/>
3<br/>
3 1<br/>
4 1<br/>
5 1<br/>

>Output:<br/>
13<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/SVADA/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We binary search for all the times(seconds) from 0 to t. If all the coconuts picked by the first type of money can be opened by the second type of money then we search towards t or else away from t.

  We use an eval function which returns true or false depending on if the second type of money can open all the coconuts picked by the first type of money in `mid = (low+high)/2` time.

  eval():
  - for each monkey of the first type we find the coconuts it can pick in mid seconds and update cnt1
  - for each monkey of the second type we find the coconuts it can open in mid seconds and update cnt2
  - If `cn1<=cn2` then return true or else return false.
   
</details>
