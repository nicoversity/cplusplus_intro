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


/*
 * A function to print some text, followed by an int variable, as handed over in the function's parameters, to the standard output stream. Since the function is of type "void", no return statement is needed.
 * The object "string" is used in order to store a series of single characters into one variable. The "string" object is defined in the "std" namespace, therefore the "std::" namespace prefix is needed upon declaration.
 */
void printTextAndInt(std::string myText, int myInt)
{
    std::cout << myText << myInt << std::endl;
}


int main()
{
    // initialization
    int x = 42;
    int y = 23;
    
    // declaration
    int sum;
    int difference;
    int product;
    int quotient;
    int remainder;
    
    // arithmetic operators
    //
    
    // addition
    sum = x + y;
    //std::cout << sum << std::endl;
    printTextAndInt("Sum: ", sum);
    
    // subtraction
    difference = x - y;
    //std::cout << difference << std::endl;
    printTextAndInt("Difference: ", difference);
    
    // multiplication
    product = x * y;
    //std::cout << product << std::endl;
    printTextAndInt("Product: ", product);
    
    // division
    quotient = x / y;
    //std::cout << quotient << std::endl;
    printTextAndInt("Quotient: ", quotient);
    
    // modulo
    remainder = x % y;
    //std::cout << remainder << std::endl;
    printTextAndInt("Remainder: ", remainder);
    
    
    return 0;
}