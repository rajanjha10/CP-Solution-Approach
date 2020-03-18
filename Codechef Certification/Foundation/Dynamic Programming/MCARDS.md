# Problem
Dave’s little son Maverick likes to play card games, but being only four years old, he always lose when playing with his older friends. Also, arranging cards in his hand is quite a problem to him.

When Maverick gets his cards, he has to arrange them in groups so that all the cards in a group are of the same color. Next, he has to sort the cards in each group by their value – card with lowest value should be the leftmost in its group. Of course, he has to hold all the cards in his hand all the time.

He has to arrange his cards as quickly as possible, i.e. making as few moves as possible. A move consists of changing a position of one of his cards.

Write a program that will calculate the lowest number of moves needed to arrange cards.

### Input
The first line of input file contains two integers C, number of colors (1 ≤ C ≤ 4), and N, number of cards of the same color (1 ≤ N ≤ 100), separated by a space character.

Each of the next C * N lines contains a pair of two integers X and Y, 1 ≤ X ≤ C, 1 ≤ Y ≤ N, separated by a space character.

Numbers in each of those lines determine a color (X) and a value (Y) of a card dealt to little Maverick. The order of lines corresponds to the order the cards were dealt to little Maverick. No two lines describe the same card.

### Output
The first and only line of output file should contain the lowest number of moves needed to arrange the cards as described above.

### Sample
>CARDS.IN<br/>
2 2<br/>
2 1<br/>
1 2<br/>
1 1<br/>
2 2<br/>
CARDS.OUT<br/>
2<br/>

>CARDS.IN<br/>
4 1<br/>
2 1<br/>
3 1<br/>
1 1<br/>
4 1<br/>
CARDS.OUT<br/>
0<br/>

>CARDS.IN<br/>
3 2<br/>
3 2<br/>
2 2<br/>
1 1<br/>
3 1<br/>
2 1<br/>
1 2<br/>
CARDS.OUT<br/>
2<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/MCARDS/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  Suppose we have red, green, and blue cards with numbers 1 to 4.

  All the same color have to be together, and inside each group, the numbers must be sorted.

  Therefore there are 3! = 3 * 2 * 1 = 6 possible correct final orders:
  ```
    R1 R2 R3 R4 B1 B2 B3 B4 G1 G2 G3 G4  (RBG)
    R1 R2 R3 R4 G1 G2 G3 G4 B1 B2 B3 B4  (RGB)
    B1 B2 B3 B4 R1 R2 R3 R4 G1 G2 G3 G4  (BRG)
    G1 G2 G3 G4 R1 R2 R3 R4 B1 B2 B3 B4  (GRB)
    B1 B2 B3 B4 G1 G2 G3 G4 R1 R2 R3 R4  (BGR)
    G1 G2 G3 G4 B1 B2 B3 B4 R1 R2 R3 R4  (GBR)
  ```
  
  Each order is determined by a permutation of the colours (shown in brackets). Hence we will use an array having different permutations of color and order indices based on this permutation. 
  
  Suppose we have a[] = {5, 2, 3, 1, 4}<br/>
  keep 2,3,4 at its place and arrange others. cost = 2<br/>
  keep 1,4 at its place and arrange others. cost = 3.
  
  Hence, if we find LIS then that is the maximum elements we can keep in place and the minimum cost of rearranging is `a.size() - LIS`.
  
  We will find order of indices and `size - LIS` for all the valid permutations and return the minimum as answer.
  
  Ex: c=3, n=3
  | i  | 1 | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  |
  | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ | ------------ |
  | (c, n) | 3, 1  | 2, 2  | 3, 2  | 2, 1  | 1, 1  | 3, 3  | 1, 3  | 1, 2  | 2, 3  |
  
  Matrix of indices:
  | c, n  | 1  | 2  | 3  |
  | ------------ | ------------ | ------------ | ------------ |
  | 1  | 4  | 7  | 6  |
  | 2  | 3  | 1  | 8  |
  | 3  | 0  | 2  | 5  |
  
  The best answer is for permutation: c = 3, 1, 2
  
  indices[] = 1, 3, 6, 5, 8, 7, 4, 2, 9. LIS = 1, 3, 5, 7, 9. ans = 9 - 5 = 4.

  ### References
  
  >https://www.quora.com/How-can-one-solve-the-Problem-MCARDS-on-SPOJ<br/>
  >https://stackoverflow.com/questions/24198124/why-premutation-are-needed-in-mcards
  
</details>
