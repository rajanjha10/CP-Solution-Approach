We use a disjoint set union to join the planets and find the connected component. For each connected component we find the minimum cost planet having the government of type 1 and call it the cost of the component.

If there is only one connected component then the answer is 0.

Among all the different connected components we find the component having the minimum cost and connect that component to all the other components.
If any connected component has only Type 2 government and there are more than one connected component then the answer is -1 as it is not possible for the GFA to fulfill their plan.