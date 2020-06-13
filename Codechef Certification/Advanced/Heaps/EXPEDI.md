We will get the minimum number of stops if we refill our tank only when necessary and at stops having maximum fuel.

We sort the input based on their distance from us. We then iterate from 0 to L and decrement one unit of fuel on each iteration.

When we encounter a fuel stop we store the additional fuel in our priority queue. When we run out of fuel, we use the refill fuel at the top of the priority queue indicating we refilled at that stop and increment our answer. If the priority queue is empty then we can't reach the nearest town.