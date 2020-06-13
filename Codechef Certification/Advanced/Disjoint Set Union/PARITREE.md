The things to note here is:
- For all the edge weights there are two possibilities 0 and 1. If we know the exact value of any edge then the number of possibilities decreases by two.
- We will use xor to represent the sum of weights of all the edges from root say 1 to x<sub>i</sub> where i goes from 1...n;
- The xor of x<sub>1</sub> is 0 as there are no incoming edges to add their weights.
- We need to find a combination of x<sub>2</sub>, x</sub>3</sub>, .... x<sub>n</sub> that satisfies all the constraints.

We will use an array state[] which represents the xor of all i's. Initially all states are 0. Now for all the query constraints (u, v, x) state[u] = state[v] if x = 0 and vice versa. We will discard the given structure of tree and we will use disjoint set to perform union on our queries. 

The answer is going to be the 2<sup>C-1</sup> where c = no. of disconnected sets as there are 2 possible assignments 0 and 1 for each set except set containing 1 which has only one possible assignment as x<sub>1</sub> has to be 0.

Except there can be a case where no valid assignment is possible and we have to return zero. No valid assignments are possible when there are odd weight cycles in the graph in which case a node will be asked to have two parity at the same time which is not possible.

The algorithm works as follows:
- For each query we find ru = root(u) and rv = root(v). If `ru == rv` then that means they are in the same connected component and we have some constraints already applied on them. So we check if the new constraints satisfy the old ones. We check if `state[v] = state[u] ^ x`. If no then we have reached a contradiction and there is no possible assignment and hence we return zero.
- If `ru != rv`, then the only thing that is remaining is union and updating the state. We perform union on ru and rv by assigning `id[rv] = ru`. and then we update the state as `state[rv] = state[u] ^ state[v] ^ x`. Then we need to propagate the change in root to it's children using path compression. We propagate change by assigning `state[x] = state[x] ^ state[id[x]]` where id[x] will correspond to the root. 

Explanation for state changes:<br/>
Suppose the ones having the same bit are friends and the others are enemies.

Since, ru became a parent(root) of rv, we need to know that whether rv is an enemy or friend of ru. That depends on whether u is a friend or an enemy of ru and what relationship x we want between u and v.

Consider ex:<br/>
Queries<br/>
1 3 1<br/>
5 6 0<br/>
3 6 0<br/>
Q1: state[1] = 0, state[3] = 1; Set 1:- 1 3<br/>
Q2: state[5] = 0, state[6] = 0; Set 2:- 5 6<br/>
Q3: We already know state[3] = 1(enemy of root 1) and state[6] = 0(friend of root 5). Now we update the `state[root(6)] = state[5] = state[3] ^ state[6] ^ x = 1 ^ 0 ^ 0  = 1`.<br/>
Hence, state[5] = 1 which means to satisfy the constraints such that 3 and 6 remains friends, 5 has to be an enemy of 1. Similarly, the friends of root 5 i.e 6 will also be 1 to remain friends with 5 and hence we propagate this change in 6 during path compression by setting `state[6] = state[6] ^ state[5] = 0 ^ 1 = 1`.

so the overall states are:<br/>
state[1] = 0, state[3] = 1;<br/>
state[5] = 1, state[6] = 1;<br/>

Bonus Tip: To find the actual answer we need to find the edge weights. The edges having no constraints can have values 0 and 1. To find edge weights among all other (i,j) we just do state[i] ^ state[j]. This works because xor is associative and the one's that are not on the path between i and j will appear twice in the xor and will get canceled out.

