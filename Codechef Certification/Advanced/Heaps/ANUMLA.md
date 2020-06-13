The numbers of the beautiful array are the one's that are not the sums and the lowest. Reason is since we have the sum of all subsets, sum of any two numbers has to be greater than the numbers itself.

We exclude the zero and store the rest in a min heap. We maintain two arrays ans and sums. We store the first two minimum element in ans and their sum in sums array.

Then until min heap is not empty for each lowest element in the min heap which is the next element in our answer we find out it's sum **x** with each elements in ans array and sum array and delete them from our minheap to eliminate chances of **x** coming out lowest and getting included in our answer. 

The resulting ans array is the beautiful array.