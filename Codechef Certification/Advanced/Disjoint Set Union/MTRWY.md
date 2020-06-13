If we want to remove walls i.e form connected connected components then union find data structure works fine. Here we have to add walls and break connected components.

If you notice we can process the queries in reverse order so that we start with a set of walls and then remove a wall in each query of type 1 and type 2.

We first store all the queries and remove duplicates in case of type 1 and type 2 queries. After storing all the queries we can perform a union on the nodes that do not share a wall.

Then we process the queries in reverse order and remove the wall between nodes and perform union on them for type 1 and type 2 queries. For type 3 queries we check if the nodes are in the same connected component or not. If yes, then we add 1 to our answer. Every time we perform a union operation we update our max size variable and when we encounter a query of type 4 we add it to our answer.