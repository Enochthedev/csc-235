## Problem C. Self Describing Numbers
* Input file:         `self.in`
* Output file:      `standard output`

###  Question
In one of the classes, Dr.Edsger explained that an integer is said to be “self-describing” if it has the property that: the first digit represents the number of zeroes in the integer; the second digit represents the number of ones in the integer, and so on.
For example, 1210 is a self-describing integer since:
*	The first digit is 1 and there is 1 zero in the number &
*	The second digit is 2 and there are 2 ones in the number &
*	The third digit is 1 and there is 1 two in the number &
*	The fourth digit is 0 and there are 0 threes in the number

At the end of the class, Dr.Edsger gave a small homework: create a program to check whether an integer is self-describing or not.
Input
The first line of the input contains an integer `T` , the number of test cases.
Each test case consists of a single integer ```N (0 ≤ N < 1010   )```, without leading zeroes.
Output
For each test case, print a single line containing the answer which is either “self-describing” or “not self-describing” without the quotes.
###  Input
The first line of the input contains an integer T, the number of test cases.
Each test case consists of a single integer N (0 ≤ N < 1010   ), without leading zeroes.
### Output
For each test case, print a single line containing the answer which is either “self-describing” or “not self-describing” without the quotes.

#### Example

|    Self.in    |    Standard output  |   
| ------------- |:------------------: | 
|     2         |                     |
|    1210       | Self-describing     |
|    2017       | Not Self-describing | 


*minor knowledge of Self-describing numbers is required to solve this problem*
*Note:*A number is called self-describing if the digit `d` at position `n` in the number is equal to the number of times that `d` appears in the number. For example, the number `2020` is self-describing because the digit `0` appears twice at position `2` and also appears twice at position `3`. The number `22` is not self-describing because the digit `2` appears twice at position `2`, but it also appears once at position `1`.