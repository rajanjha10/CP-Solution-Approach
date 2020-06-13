Observation:
- If two nodes are connected by an edge of weight 0, then they’re both even or both odd;
- If two nodes are connected by an edge of weight 1, then one of them is even and the other is odd.

Hence we can use 0 to represent even value nodes and 1 to represent odd value nodes.

The case when all the edges are in the same connected component then the answer is "yes". that all edges are in the spanning forest. For every connected component, we pick an arbitrary node v and suppose v is even. For any node u in this component, if the distance between u and v is odd, then u is odd; otherwise u is even.

We will use an array state[] which represents the xor of all i's. Initially all states are 0. Now for all the query constraints (i, j, x) state[i] = state[j] if x = 0 and vice versa. We will use disjoint set to perform union on our queries.

There can be a case where no valid assignment is possible and we have to return "no". No valid assignments are possible when there are odd weight cycles in the graph in which case a node will be asked to have two parity at the same time which is not possible.

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
