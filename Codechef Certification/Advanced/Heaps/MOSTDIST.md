The Manhattan distance is given by abs(x - x1) + abs(y - y1) for points (x, y) and (x1, y1).
There are four possible cases:
- (x - x1) is negative
- (y - y1) is negative
- No one is negative
- Both are negative

Hence we will use four priority queues which stores the values of each of these cases. When we want to query the maximal Manhattan distance we check top of which priority queue gives the highest value with point P(x, y) and print it as the answer.

For removing the values from the set, we use a map to mark the adding query index and while answering query of type "? X Y" we simply get rid of the top elements of the priority queue if they are marked in the map. Hence our priority queue contains index of adding query and value of any case.
