We insert all the population in a heap. For each city we find the cities it is connected to and remove their population from our heap. We then remove our own population from the heap. The index of the highest remaining value in the heap is our answer.

Then we again insert all the removed values from our heap and continue iteration for other cities. 