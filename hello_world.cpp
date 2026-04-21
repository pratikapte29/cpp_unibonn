#include <iostream>  // preprocessor directive
// #include "operations.hpp"

int main(){
    int a = 4;
    int b = 8;
    int& b_ref = b;
    int c;
    std::cout << b_ref;

    std::cout << "Value of " << "a is: " << a << std::endl;
    std::cout << "Value of " << "b is: " << b << std::endl;

    // add two numbers
    //c = addFunction(a, b);
    //std::cout << "Addition of " << a << " and " << b << " is: " << c << std::endl;

    std::cout << "Hello World!" << std::endl;
    return 0;
}

/*
int a;
int* ptr_a = &a;

ptr_a in the physical RAM space stores the address of variable a

Physical memory block:
| a | ptr_a |

the value in the block occupied by ptr_a contains the address of the first bit of the variable a

*/

/*
&a = address of a in memory
int& a_ref = a  -> basically creates an alias of a called as a_ref. points to the same address in the 
memory as a
*ptr_a = gives out the value stored at the address a (i.e. the actual variable value)
*/

/*
pass by value = creates a copy of the variable inside the function

pass by reference = passes a reference to the original variable => does not create a copy of 
the variable
*/