We maintain one min heap and one max heap. Min heap stores the top one third ratings out of which the lowest rating is the top most and Max heap stores the rest of the ratings out of which the highest rating is the top most.

Whenever we get a request of type 2 we return the top most element of min heap. Whenever we get a request to insert a new rating we insert it into the max heap.

In each iteration we check if the size of minheap is less than one third of the total size. If yes then we insert the required no. of elements from max heap to min heap.

All the elements in the min heap should be greater than all the elements in max heap. Hence, we pop from min heap and insert it into max heap and pop from max heap and insert into min heap until all the elements in min heap are greater than all the elements in the max heap.

