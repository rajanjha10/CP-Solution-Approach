# Problem
I’m out of stories. For years I’ve been writing stories, some rather silly, just to make simple problems look difficult and complex problems look easy. But, alas, not for this one.

You’re given a non empty string made in its entirety from opening and closing braces. Your task is to find the minimum number of “operations” needed to make the string stable. The definition for being stable is as follows:

An empty string is stable.
1. If S is stable, then {S} is also stable.
2. If S and T are both stable, then ST (the concatenation of the two) is also stable.
3. All of these strings are stable: {}, {}{}, and {{}{}}; But none of these: }{, {{}{, nor {}{.

The only operation allowed on the string is to replace an opening brace with a closing brace, or visa-versa.

### Input
Your program will be tested on one or more data sets. Each data set is described on a single line. The line is a non-empty string of opening and closing braces and nothing else. No string has more than 2000 braces. All sequences are of even length.

The last line of the input is made of one or more ’-’ (minus signs.)

### Output
For each test case, print the following line:

k. N

Where k is the test case number (starting at one,) and N is the minimum number of operations needed to convert the given string into a balanced one.

### Example
>Input:<br/>
}{<br/>
{}{}{}<br/>
{{{}<br/>
---<br/>

>Output:<br/>
1. 2<br/>
2. 0<br/>
3. 1<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/ANARC09A/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The ideal case, when we do not need to do an operation is when S<sub>i</sub> is `{` and S<sub>i+1</sub> is `}`.
  
  We will use a stack to store the brackets. While processing the string:
  - If Stack is not empty and bracket at the top of the stack is `{` and S<sub>i</sub> is `}`(Ideal Case) then we just pop the bracket from the top of the stack.
  - Else we push the bracket onto the stack.
  
  After Processing the string, we consider brackets inside stack in groups of two:
  - If the group comprises of: stack top = `{` and second of stack top = `}` which is `}{` during string processing then we add **2** to the ans as it requires two operations to make it stable.
  - else we add **1** to the ans since the other possibilities are `}}` and `{{`, both requiring only one operation to make it stable.
  
  ### References
  
  >https://www.quora.com/How-should-we-use-stacks-to-solve-the-Seinfeld-problem-in-SPOJ (Refer for solution without Using Stack [I Know Irony])<br/>
  
</details>
