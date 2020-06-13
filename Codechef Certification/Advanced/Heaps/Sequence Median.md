We are short on space here. We will use a priority queue and input one more than half the size of n. For the remaining elements we will push it onto the queue and pop the greatest element out of the queue.

No matter the sequence of input, once we input more than half of the values the greater values in the priority queue will lie beyond the median index.