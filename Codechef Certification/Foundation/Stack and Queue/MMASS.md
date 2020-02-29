# Problem
A molecule can be defined as a sequence of atoms and represented by a chemical formula consisting of letters denoting these atoms. E.g. letter H denotes atom of hydrogen, C denotes atom of carbon, O denotes atom of oxygen, formula COOH represents molecule consisting of one atom of carbon, two atoms of oxygen and one atom of hydrogen.

To write some formulas efficiently, we use the following rules. Letters denoting some atoms can be grouped by enclosing in parentheses, e.g. formula CH(OH) contains group OH. Groups can be nested – a group can also contain other groups. To simplify a formula, consecutive occurrences of the same letter can be replaced with that letter followed by a number of these occurrences. E.g. formula COOHHH can be written as CO2H3 and it represents a molecule consisting of one atom of carbon, two atoms of oxygen and three atoms of hydrogen. Furthermore, consecutive occurrences of the same group can be replaced with that group followed by a number of these occurrences. E.g. formula CH (CO2H) (CO2H) (CO2H) can be written as CH(CO2H)3 and molecule represented by both those formulas consists of four atoms of carbon, four atoms of hydrogen and six atoms of oxygen. A number written after a letter or a group is always greater than or equal to 2 and less than or equal to 9. A mass of a molecule is a sum of masses of all its atoms. One atom of hydrogen has mass 1, one atom of carbon has mass 12 and one atom of oxygen has mass 16.

Write a program that will calculate a mass of a molecule.

### Input
The first and only line of input file contains a formula of a molecule whose mass needs to be determined. A formula of a molecule will consist of characters H, C, O, (, ) , 2, 3, ..., 9 only. Its length will be less or equal to 100 characters.

### Output
The first and only line of output file should contain a mass of a molecule represented with a given formula. The result will always be less than or equal to 10,000.

### SAMPLE
>MASS.IN<br/>
COOH<br/>
>
>MASS.OUT<br/>
45<br/>
>
>MASS.IN<br/>
CH(CO2H)3<br/>
>
>MASS.OUT<br/>
148<br/>
> 
>MASS.IN<br/>
((CH)2(OH2H)(C(H))O)3<br/>
>
>MASS.OUT<br/>
222<br/>

#### `<Problem link>` : <https://www.spoj.com/problems/MMASS/>
<br/>
<details>
  <summary>Solution Approach</summary>
  
  ######
  
  The idea is to simply evaluate the value of each group(atoms inside brackets) individually and then combine the result to get overall mass of the molecule. We use a stack to store the mass of atoms.
  - If we encounter an opening brace we push **-1** onto the stack.
  - If we encounter atoms, we push their equivalent mass onto the stack.
  - If we encounter a closing brace `)`, we combine all the values in the stack upto nearest **-1** i.e opening brace `(` and push it onto the stack.
  - If we encounter a digit, we multiply the top element of the stack with that digit and push it onto the stack. The top element corresponds to the mass of the group or atom associated with that digit.

  One other approach is to expand the given formula with the help of a stack of indices and then simply calculate the mass of the molecule using expanded sequence. The stack stores the index of opening braces `(`. When we encounter a closing brace `)` we concatenate the substring starting at index given by the top of the stack with the expanded sequence d number of times, where d is the associated digit if it exists.
  
</details>
