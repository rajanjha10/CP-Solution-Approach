# Problem
In a far away Galaxy of Tilky Way, there was a planet Tarth where the sport of Tompetitive Toding was very popular. According to legends, there lived a setter known for his very tricky mathematical Game Theory problems.

Radhesh was chosen for a game theory project under Ms Geethakoomaree! To celebrate it, he decided to play a game of cards with her. The rules of the game are as follows-

- There are **3** piles of card with them, Radhesh's pile, Geethakoomaree's pile, and an extra pile. The extra pile has an even number of cards (i.e. number of cards is a multiple of 2). In each pile, the cards are stacked on top of each other.
- Each card has an integer written on it.
- In each round, both of them will take the **topmost** card from **their own piles**.
- The player whose card has the greater value wins the round and earns one point (It is guaranteed that their cards won't have same value in this step). Both of them then discard the cards they used in that round permanently. Now, if there are cards in the extra pile, the winner of that turn will pick the topmost card from the extra pile, and place it at the bottom of their own pile. And then the loser of that round will pick the next topmost card from the extra pile and place it at the bottom of their own pile. **Otherwise**, the game continues as it is.
- The game continues on until all cards are discarded.
- The player with most points wins.

Given the cards in each of the **3** piles, find the winner of the game, or determine if it is a tie!

### Input
- The first line has a single integer **T**, denoting number of test cases per file.
- Next line has 2 integers **N** and **M**, each where **N** is number of cards in Radhesh and Geethakoomaree's deck respectively, and **M** is number of cards in the extra pile.
- Next **2** lines contain **N** integers each denoting cards in Radhesh and Geethakoomaree's pile respectively. The first integer denotes the value on the topmost card, the second integer denotes the card beneath it, and so on.
- Next line has **M** integers denoting cards in extra pile. The first integer denotes the value on the topmost card, the second integer denotes the card beneath it, and so on.

### Output
For each test case **T** print the answer in a new line as follows -

- If Radhesh wins the game, print Radhesh wins
- If Geethakoomaree wins, print Geethakoomaree wins
- If the game results in a tie, print Tie

### Constraints
* **1 ≤ T ≤ 10<sup>5</sup>**
* **1 ≤ N,M ≤ 10<sup>5</sup>**
* Sum of **N, M** over the entire test file does not exceed **10<sup>6</sup>** and **2∗10<sup>6</sup>** respectively
* **M** is a multiple of 2.
* **0** ≤ values on the cards ≤ **10<sup>9</sup>**

### Subtasks
* **30% points - N, M ≤ 200**
* **70% points - Original Constraints**

### Example
>Input:<br/>
3<br/>
5 4<br/>
1 4 7 10 12<br/>
3 6 4 8 22<br/>
7 8 9 14<br/>
1 2<br/>
1<br/>
5<br/>
2 5<br/>
5 2<br/>
1 2 3 4 5<br/>
10 9 8 7 6<br/>
12 11<br/>

>Output:<br/>
Radhesh wins<br/>
Tie<br/>
Geethakoomaree wins<br/>

### Explanation
In the first testcase, the following happens-

- Radhesh has card **1** and Geethakoomaree has card **3**. Geethakoomaree wins the round, she then takes the first card from extra deck and (i.e. **7**) and Radhesh takes the next card, i.e. **8**. Geethakoomree's deck is **(6,4,8,22,7)** and Radhesh's deck is **(4,7,10,12,8)**
- Geethakoomaree wins next round as well. She has **2** points now. Her deck is **(4,8,22,7,9)** and Radhesh's deck is **(7,10,12,8,14)**. Note that now extra deck has no cards so no cards can be drawn from it after this.
- Based on above decks, Radhesh wins in turn **3, 4, 6, 7** and has total of **4** points. Geethakoomaree ends up with **3** points. Hence, Radhesh wins.

#### `<Problem link>` : <https://www.codechef.com/FLPAST01/problems/RADGEE>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  We first simulate the game for the given inputs and figure out where the extra pile cards go with respect to the Radhesh's and Geethakoomaree's pile.

  Then we simply simulate the game on rest of the cards and update our answer.
 
</details>
