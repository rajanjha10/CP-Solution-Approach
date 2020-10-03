We will answer the queries offline using segment tree and coordinate compression.

Since the values can be as large as 10<sup>9</sup> and the number of queries is as large as 2\*10<sup>5</sup> we can represent each value with an index i in the range of 0 <= i < q.

We use a map to sort and remove duplicates from the values which are to be inserted. We then assign an index corresponding to each value.

We will use a segment tree to efficiently get range queries. Each node in the segment tree will store the sum of the nodes it is responsible for. query(0, i) will give the number of elements less than equal to the value corresponding to the index i.

Query operations:
- I v: Each time we need to insert a unique element we will set the index corresponding to the element as 1. 
- D v: Each time we need to delete an existing element we will set the index corresponding to the element as -1.
- K v: We need to find the value corresponding to an index i such that the range sum from 0 to i is v. We can use binary search and segment tree to perform range queries and find out the index i.
- C v: We will find the lower bound i of the value v and then perform range query from 0 to i-1 to find the no. of elements less than the v.