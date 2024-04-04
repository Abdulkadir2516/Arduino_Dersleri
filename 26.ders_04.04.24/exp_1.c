/*
C divides the operators into the following groups:

    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators
*/
/*
Arithmetic Operators

Arithmetic operators are used to perform common mathematical operations.
Operator 	Name 	        Description 	                            Example 	Try it
+ 	        Addition 	    Adds together two values 	                x + y
- 	        Subtraction 	Subtracts one value from another 	        x - y
* 	        Multiplication 	Multiplies two values                   	x * y
/ 	        Division 	    Divides one value by another 	            x / y
% 	        Modulus 	    Returns the division remainder              x % y
++ 	        Increment 	    Increases the value of a variable by 1  	++x
-- 	        Decrement 	    Decreases the value of a variable by 1  	--x
*/
#include <stdio.h>

int main() {


  int x = 5;
  printf("%d\n", ++x);
  printf("%d\n", x++);
  printf("%d", x);

  return 0;


}


