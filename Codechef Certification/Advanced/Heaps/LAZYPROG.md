We first sort the given input based on their deadlines to deal with the one's having the shorter deadline first.

The larger the value of a, the lesser we will have to pay the programmer as b<sub>i</sub>/a<sub>i</sub> will be less. Hence we will use a priority queue to store a pair of {a<sub>i</sub>, b<sub>i</sub>}.

For all the projects we iterate and add it's required time to our current time. If the current time is less than the deadline we just continue or else two cases arise:
- We need to instantly finish off some projects making it take 0 time. 
- We can meet the deadline by paying him just enough money for some project to take less time and put others back on schedule.

We consider the pair **x** at the top of the priority queue and check whether it needs to be completed instantly or not.

If even on not considering the time taken by project **x** we are not able to meet the deadline then we need to make it take 0 time and move on to the next pair or else we will pay just enough money to make the project **x** take less days and get the current project back on track. 