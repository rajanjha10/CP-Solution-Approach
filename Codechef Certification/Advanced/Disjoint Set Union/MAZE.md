It is not hard to see that the minimum answer can be 0 and the maximum answer can be 2. For the maximum case we can just draw 2 walls at any corners of the maze.

We represent the corners of each cell as nodes and the walls as edges. We make a connection between two corners of a cell by an edge if its wall is painted. The boundary of the maze is already connected and we represent it using single node say 0. The rest of the corners are represented by other numbers.

So a 4 X 4 grid will look like

![](https://i.imgur.com/sJPiY4f.png)

Some queries and their corresponding representation:

1 2 1 3 -> 0 - 2 (we make a vertical edge between node 0 and node 2)<br/>
2 1 3 1 -> 0 - 4 (we make a horizontal edge between node 0 and node 4)

We will make use of a convert function which changes the given representation to a fixed corresponding value.

Approach:

1. If the already painted walls represented as edges form a cycle then the answer is 0. We use a disjoint set union data structure to check if the edges form a cycle 
2. If on adding a new edge at any point we get a cycle then the answer is 1.
3. Else the answer is 2.

Since r and c ranges upto 10<sup>6</sup> we can get corresponding values upto 10<sup>12</sup> which will not fit into an array to use in disjoint set union. Hence, we will use coordinate compression. If you see we only need nodes which are given in input(nodes of walls that are painted) as adding only one edge to it may form a cycle. For all other nodes we atleast need 2 edges as the node has no edge painted beforehand.

We will convert the large corresponding values into its compressed form and then use disjoint set union.

The code is tricky hence lemma walk you through it:
- Handling Base Cases:
1. If there is only one room then the answer is "Chefland is doomed"
2. If there is only one row or column then any horizontal or vertical wall will do the job. If there are edges given in input then the answer is 0 else the answer is 1.
- Case 1 of approach:
1. We convert the given representation to desired format using convert() function.
2. We store the edges in a set as we need to check if we are not using the already painted wall edge while choosing an edge to make a cycle for case 2 approach.
3. We use a make() function which assign an index to each point and makes entries for disjoint set union.
4. If both the nodes are in the same set then we found a cycle or else we perform a union on both the nodes
- Case 2 of approach:
1. For each encountered node we find new nodes adjacent to it in all four directions. The converted nodes may go out of range and we need to fix that. 
2. If an edge from node to new node doesn't already exists(avoid selecting the walls that are already painted) and the new node has been encountered before(otherwise the new node will require atleast two new edges and there is no point checking those) then we check if both of them are in the same connected component. If yes, then on joining the nodes through an edge(painting that wall) we will get a cycle and the answer is 1.
3. Edge case: Since the boundaries of the maze are represented by 0 on all sides we might miss some edge cases. We just store the count of new nodes which are 0 and then check if the node is already connected to a zero and the count is greater than 1 than the answer is 1. It means the node has boundaries at more than one adjacent sides (example top left node of the last house in the maze) and the node is already connected to one of the boundaries and if we connect it to the other boundary we are done.
- Case 3 of approach:
Print 2 :-)