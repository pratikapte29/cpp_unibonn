#include <iostream>  // preprocessor directive

int addFunction(int a, int b){
    return a + b;
}

int main(){
    int a = 4;
    int b = 8;
    int c;

    std::cout << "Value of " << "a is: " << a << std::endl;
    std::cout << "Value of " << "b is: " << b << std::endl;

    // add two numbers
    c = addFunction(a, b);
    std::cout << "Addition of " << a << " and " << b << " is: " << c << std::endl;

    std::cout << "Hello World!" << std::endl;
    return 0;
}