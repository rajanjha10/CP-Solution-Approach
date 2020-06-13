We are going to store the array as a pair of index and values. We now sort the array in descending order.

We will use a disjoint set union data structure. Each element in the array represents itself initially in the dsu. We will also use an array visited[] and an array sz[] which will mark the node if visited and give the size of the connected component respectively.

The algorithms works as follows:
- We iterate through all the indices and We will mark the original index of current element as visited and will check if it's adjacent original indices are visited. If yes then we will merge the two components.
- We will get the size of the component and if it is the highest encountered so far then we will insert the missing values in our answer array with the value of current element upto size of the component.

A dry run of this algorithm clears it's working. When we encounter a new element that doesn't causes any connected component to become the maximum size then we know that it will exist with some other element in some subarray which will have a value less than it's value. So we can't choose it. On the other hand if it causes any connected component to become maximum size say **sz** then we know that it will be the minimum element in some subarray of size sz and since we have sorted the array it is surely the highest one.
