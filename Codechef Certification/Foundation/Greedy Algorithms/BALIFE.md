# Problem
SuperComputer Inc. have built a super-fast computer server consisting of N hyper-scalar lightning-fast processors Beta 007. These processors are numbered from 1 to N and are used to process independent jobs. Every new incoming job is assigned to an arbitrary processor. Sometimes, a processor may be assigned too many jobs while other processors have a relatively light load (or even wait idly). In that case, the whole system undergoes rebalancing.

Rebalancing proceeds in rounds. In each round, every processor can transfer at most one job to each of its neighbors on the bus. Neighbors of the processor i are the processors i-1 and i+1 (processors 1 and N have only one neighbor each, 2 and N-1 respectively). The goal of rebalancing is to achieve that all processors have the same number of jobs.

Given the number of jobs initially assigned to each processor, you are asked to determine the minimal number of rounds needed to achieve the state when every processor has the same number of jobs, or to determine that such rebalancing is not possible.

### Input file specification
The input file consists of several blocks. Each block begins with a line containing a single number N(1<= N <=9000) - the number of processors. N numbers follow, separated by spaces and/or end of line characters. The i-th number denotes the number of jobs assigned to the i-th processor before rebalancing. There is a blank line after each block. The last block is followed by a single number -1 on a separate line (which should not be processed).

### Output file specification
For each block in the input file, output the minimal number of rounds needed to rebalance loads for all the processors. If it is not possible to rebalance jobs so that each processor has the same number of jobs, output -1.

### Example
>Input:<br/>
3<br/>
0 99 3<br/>
><br/>
2<br/>
49 50<br/>
><br/>
8<br/>
16 17 15 0 20 1 1 2<br/>
><br/>
10<br/>
0 0 100 0 0 0 0 0 0 0<br/>
><br/>
-1<br/>

>Output:<br/>
34<br/>
-1<br/>
23<br/>
70<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/BALIFE/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  We take the sum of all the elements in the array and divide it with n to find the avg. If the sum is not divisible by n then the answer is **-1**.
  
  We create a difference array `diff[i] = a[i] - avg`. It tells us how much load do we need to export or import from or to the processor. We then create prefix sum array of difference array and the maximum absolute value in this array is the number of rounds required.
  
  This works because when we make a prefix sum array we include all the previous utilized rounds in processing of diff[i] and know how many rounds do we still need for balancing it by its absolute value. The maximum absolute value is the maximum number of rounds required by a processor to get balanced.
  
  ex: diff[]  = [ 2 ,-5, 7, -4]<br/>
  prefixsum[] = [2, -3, 4, 0]<br/>
  ans = 4
  
  ### References
  
  >https://www.quora.com/What-is-the-approach-to-solve-SPOJ-com-Problem-BALIFE<br/>
  
</details>
