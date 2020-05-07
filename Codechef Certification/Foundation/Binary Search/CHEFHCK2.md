# Problem
**Important!!! Humans are in Danger... It may be The End of the Universe!!! Again...**

**Aliens** again had stolen the important data about the **Birth of the Human beings** and as before they keep this data in their secured **Data Center**. With the help of these data along with the advanced technologies Aliens had initiated a project called **It's The End** to get rid of the human beings and occupy the Earth.

"Stupid humans! How could they allow this again?!" **Chef Po** has thought and started connecting to the Aliens Data Center to save the Earth again.

The first thing he noticed is that there are **N** servers in the Aliens Data Center and they are arranged in a line. Aliens have rearranged the Data Center to avoid "Grid Hacking Mechanism" (refer to [this](http://www.codechef.com/JAN13/problems/CHEFHACK), but this is not needed to understand this problem). Denote the **i**\-th server as **Server\[i\]** (**1** ≤ **i** ≤ **N**).

Aliens had divided the **Data File** with the data about the Birth of the Human beings into **N** parts denoted as **F\[i\]** (**1** ≤ **i** ≤ **N**) and placed the part **F\[i\]** at the **Server\[i\]**. Each server has a password - a non-negative integer. Chef Po needs to crack all the servers in order to get all parts of the **Data File**.

The Aliens are really strange beings, so they single out two types of passwords:

*   **Power Password** - a number of the form **A<sup>B</sup>** (**A**, **B** ≥ **2**). The list of Power Passwords starts with **4, 8, 9, 16, 25, 27, 32, 36, 49, 64, 81, 100, ...**
*   **Non-Power Password** - any other number. This list starts with **0, 1, 2, 3, 5, 6, 7, 10, 11, 12, 13, 14, 15, 17, ...**

For simplicity we shall call server secured by a Power Password as Power Server and the server secured by a Non-Power Password as Non-Power Server.

All Non-Power Servers have a friendly screen with the color indicator. Suppose you enter a password trying to guess the actual password of such a server. The indicator will then become green if you enter a number which is smaller than the actual password; it will become red if your number is greater than the actual password, or you will get the access to the server (and, thus, to the needed part of the Data File) if the password is correct.

On the other hand, each Power Server has no such screen and the only way to crack it is to try all Power Passwords until you find out the correct password. So our Chef simply iterate over the list of Power Passwords in increasing order and try them until he finds the correct password.

After the last adventure with Aliens, Chef became smarter so he will use binary search to crack Non-Power Servers. Namely, let **A\[1\], A\[2\], A\[3\], A\[4\], ...** be the sequence of all Non-Power Passwords. At first he will try passwords **A\[2\], A\[4\], A\[8\], A\[16\], ...** until he either reaches the correct one or the indicator becomes red for the first time. If indicator becomes red at the password **A\[2\] = 1** then he enters **A\[1\] = 0** at the next step and cracks the server (since **0** is the only Non-Power Password less than **1**). Let the indicator becomes red at the password **A\[2<sup>k</sup>\]** where **k ≥ 2** while for the password **A\[2<sup>k−1</sup>\]** indicator was green. Then Chef sets **L = 2<sup>k−1</sup>**, **R = 2<sup>k</sup>** and uses usual binary search to crack the server after that. Namely, at each step he sets **M = (L + R) div 2** and checks the password **A\[M\]**. If it is correct he finishes the process; if indicator becomes green he sets **L = M** and continue the process; finally, if indicator becomes red he sets **R = M** and continue the process.

Let's consider some examples:

*   Suppose the password is **9**. It's a Power Password, so Chef will not see the friendly screen which means for him that the server is a Power Server. Hence he will try the password **4**, then **8** and then **9**, making 3 tries in all.
*   Suppose the password is **0**. It's a Non-Power Password, so Chef will see the friendly screen which means for him that the server is a Non-Power Server. Hence he will try the passwords **A\[2\] = 1, A\[1\] = 0** in order, making 2 tries in all.
*   Suppose the password is **7**. It's a Non-Power Password. Hence he will try the passwords **A\[2\] = 1, A\[4\] = 3, A\[8\] = 10, A\[6\] = 6, A\[7\] = 7** in order, making 5 tries in all.
*   Suppose the password is **1**. It's a Non-Power Password. He will crack this server from the first try since **A\[2\] = 1**.

You are the secret Aliens agent that got to know about Chef's plan. Your first goal is to estimate the time Chef will spend on cracking each server so that Aliens headquarters would know how much time they have to stop the Chef. Chef spent one second to enter each password.

### Input

The first line of the input contains an integer **N** denoting the number of servers in the Aliens Data Center. The second line contains **N** space separated integers. The **i**\-th number among them denotes the password at the **Server\[i\]**.

### Output

Output a single line containing **N** space separated integers. The **i**\-th number among them should equal to the number of tries Chef will use to crack the **Server\[i\]**.

### Constraints

*   **1** ≤ **N** ≤ **314159**
*   **0** ≤ **each password** ≤ **3141<sup>5</sup>**
*   Chef Po does not know this bound on the password and assumes that password can be any non-negative integer when he is cracking

### Example
>Input:<br/>
6<br/>
9 0 7 1 314 100

>Output:<br/>
3 2 5 1 15 12<br/>

### Explanation

The cracking process of first 4 servers explained in the problem statement.

#### `<Problem link>` : <https://www.codechef.com/problems/CHEFHCK2>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  The problem can be divided into two subparts of finding rank of power password and simulating the process for non power password

It all boils down to finding the rank of a power password in a power password list and the rank of a non power password in a non power password list.

Luckily for us non power password list is just the compliment to the power password list and we can get the rank by `rnp = n - cntp`<br/>
where
  - rnp = rank of non power password<br/>
  - n = non power password<br/>
  - cntp = count of power passwords upto n

After finding the rank of non power password we can simulate the process as described in the question.

Now to find the rank of a power password we binary serch on the list of all power passwords. Oh! but wait we can't store all the possible power passwords in memory because the n is very large.

We will ignore all the square powers which will decrease the size of our array and will fit in memory. We can handle cnt of square powers by exploiting the property of square root function in my_sqrt() function

my_sqrt():<br/>
my_sqrt(x) gives square root of x and also gives the number of squares in range [1, x]. It includes 1 and we have to subtract with 1 to get rid of it.

Now we can further optimize the code by seprating the cube powers with non cube powers. We will generate the cube powers in sorted order and avoid sorting it later. Hence, we only need to sort non cube powers and then we will merge the two lists.

In essence:<br/>
- rank of a power password x is no of squares powers <= x + no of non-square powers <= x<br/>
Mathematically: `rank = (y-1) + (index+1) - square` <br/>
where
  - y = number of squares in range [1, x] including 1. y-1 gives the number of squares in range [1, x] excluding 1.<br/>
  - index = zero based index of x if it had existed or exists in powALL vector giving the number of non-square powers <= x. <br/>
  - square = boolean to know if x is a square power. If yes, then x doesn't exists in powAll and index points to a value greater than x which should be excluded.<br/>

- rank of a non-power password is rank of x in normal list - all power passwords<br/>
Mathematically: `rank = (x+1) - (y-1) - index`<br/>
where
  - x+1 gives rank of x in 0,1,2......x (normal) list of numbers<br/>
  - y-1 gives the number of squares in range[1, x] excluding 1.<br/>
  - index gives number of non-square powers <= x<br/>

Learnings:
  - pow(x, y) standard library function doesn't work well with large values
  - Square root needs to be handled carefully with large values
  - floor(log<sub>2</sub>(x)) gives then minimum number of times we have to take power of 2 to get the highest number <= x    
  
  ### References
  
  >https://discuss.codechef.com/questions/6650/chefhck2-editorial<br/>
  
</details>
