If we can calculate the median (M[i]) for each i where 1 <= i < n, then we can easily calculate f[i].

We use one min heap and one max heap. The min heap stores the numbers greater than the median and the max heap stores the numbers less than equal to the median. In general the left part including the median is stored in max heap and the right part is stored in min heap.

For every even i, we make transition of the top element in min heap to max heap so that the new median is at the top of the max heap. If the new f[i] to be inserted is less than the top element of the max heap then it belongs in the left part of the median and we transition top element of max heap to min heap to maintain size and insert f[i] in max heap or else we simply insert it into the min heap. 