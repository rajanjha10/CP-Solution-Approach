# Problem
Byteland is a scarcely populated country, and residents of different cities seldom communicate with each other. There is no regular postal service and throughout most of the year a one-man courier establishment suffices to transport all freight. However, on Christmas Day there is somewhat more work for the courier than usual, and since he can only transport one parcel at a time on his bicycle, he finds himself riding back and forth among the cities of Byteland.

The courier needs to schedule a route which would allow him to leave his home city, perform the individual orders in arbitrary order (i.e. travel to the city of the sender and transport the parcel to the city of the recipient, carrying no more than one parcel at a time), and finally return home. All roads are bi-directional, but not all cities are connected by roads directly; some pairs of cities may be connected by more than one road. Knowing the lengths of all the roads and the errands to be performed, determine the length of the shortest possible cycling route for the courier.

### Input
The input begins with the integer t, the number of test cases. Then t test cases follow.

Each test case begins with a line containing three integers: n m b<sub>,</sub> denoting the number of cities in Byteland<sub>,</sub> the number of roads, and the number of the courier's home city, respectively (1<=n<=100,1<=b<=m<=10000). The next m lines contain three integers each, the i-th being u<sub>i</sub> v<sub>i</sub> d<sub>i</sub>, which means that cities u<sub>i</sub> and v<sub>i</sub> are connected by a road of length d<sub>i</sub> (1<=u<sub>i</sub>,v<sub>i</sub><=100, 1<=d<sub>i</sub><= 10000). The following line contains integer z - the number of transport requests the courier has received (1<=z<=5). After that, z lines with the description of the orders follow. Each consists of three integers, the j-th being u<sub>j</sub> v<sub>j</sub> b<sub>j</sub>, which signifies that b<sub>j</sub> parcels should be transported (individually) from city u<sub>j</sub> to city v<sub>j</sub>. The sum of all b<sub>j</sub> does not exceed 12.

### Output
For each test case output a line with a single integer - the length of the shortest possible bicycle route for the courier.

### Example
>Input:<br/>
1</br>
5 7 2</br>
1 2 7</br>
1 3 5</br>
1 5 2</br>
2 4 10</br>
2 5 1</br>
3 4 3</br>
3 5 4</br>
3</br>
1 4 2</br>
5 3 1</br>
5 1 1</br>

>Output:<br/>
43<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/COURIER/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
   
  
  ### References
  
  ><br/>
  
</details>
