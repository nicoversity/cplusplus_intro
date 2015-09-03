/*
 * Project:     cplusplus_intro
 * File:        main.cpp
 * Author:      nico
 * Created:     2015-09-01
 *
 * Description:
 * Main class for the execution of the C++ program.
 * The class is used to illustrate brief basics of the C++ programming language.
 */

#include <iostream>

// global variable
// Global variables store information and can be accessed by all functions of the class they are declared in (global scope).
int globalVariable = 16;


// function to add two variables of type int and return its sum
int add(int x, int y)
{
    int sum = x + y;
    return sum;
}


// function to multiply two variables of type int and return its product
int multiply(int x, int y)
{
    return x * y;
}


void printTextAndInt(std::string myText, int myInt)
{
    std::cout << myText << myInt << std::endl;
    
    // global vs local variable
    //printTextAndInt("Local variable = ", localVariable);      // not possible, because the function printTextAndInt() does not know anything about the local variable with the name "localVariable" (compiler error!)
    //printTextAndInt("Global variable = ", globalVariable);    // possible, because the function printTextAndInt can reach global variables within the same class
}


int main()
{
    // add two int variables and store it in separate variable
    int sum = add(7, 3);
    printTextAndInt("Sum: ", sum);
    
    // multiply two int variables and print them directly
    int x = 4;
    int y = 8;
    // the function "multiply" is called as parameter of the function "printTextAndInt"
    printTextAndInt("Product: ", multiply(x, y));
    
    
    // local variable
    // (all variable that we have declared and initialized so far)
    // Local variables store information only until the end of the function they are declared in (local scope).
    int localVariable = 15;
    printTextAndInt("Local variable = ", localVariable);
    
    // print global variable
    printTextAndInt("Global variable = ", globalVariable);
    
    return 0;
}