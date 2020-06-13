We will find the minimum spanning tree of the given input tree which will just be the sum of all the edge weights say c.

This gives us the cost of visiting all the places without the help of the government. The government makes a road between any two nodes say x and y with a cost of zero. So, we get a cycle and to again get the minimum spanning tree we will remove an edge. The best choice would be to choose an edge which has the highest edge weight and is connected to x and y. 

We can't try all the (n\*(n-1))/2 possibilities and hence we will find out the number of times our current edge is going to be the highest weight edge. 

Let’s consider some path (x, y). This path has (a,b,c) as its largest-cost edge if and only if the following two conditions are satisfied:

- x is connected to a with edges of cost < c.
- y is connected to b with edges of cost < c.
- or vice versa

So the answer is simply R(a,c) * R(b,c), where R(x,c) is the number of nodes reachable from x with edges of cost < c. 

We will sort the edges based on their weights and unite the nodes into components in that order. This means that, during the step where we process the edge (a,b,c), R(a,c) and R(b,c) are simply the sizes of the components currently containing a. and b.

Hence the answer is c - s/t where,
- c is the total sum of all the edge weights
- s is the sum of all the highest edge weights
- t is the number of possibilities to choose (i, j) pair. Hence, t = (n\*(n-1))/2 