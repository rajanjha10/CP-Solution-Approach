Since all the groups of 5 are connected vertically there is no point representing them individually. Note that the input is given in column row pair. We will compress the given 2d input to 1d input. Each group of five rows will represent the same column and after m such column we will have a new group of 5 rows.

Ex: r = 2, c = 10, x = 7, y = 5<br/>
then n = (x/5)\*c + y = 10 + 5 = 15 (1 based representation) will given the corresponding input in 1d representation.

We use a disjoint set data structure to show connections in jam board via wires. We use an array v[] to represent voltage. 

Now the catch here is when we connect two end points and both are connected to a voltage then our root will be connected to two voltages. Even if one of the voltages is removed we will still be left with one voltage and the root will be high. This can be generalized for n voltages.

For each query we decode the input and then:
- For each query of type 'W' we do union of the decoded inputs and merge their number of voltages to the root.
- For each query of type 'V' we add a voltage connection to the root. 
- For each query of type 'R' we remove a voltage connection from the root.
- For each query of type 'L' we check if only one of the root has 0 voltage connections.