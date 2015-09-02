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


// include header file to load library for standard input and standard output streams
#include <iostream>


// main method: heart of every C++ program, since this method gets executed once you run your program
int main()
{
    // write some text ("Hej hej world!") to the standard output stream (std::cout)
    std::cout << "Hej hej world!";
    
    // return statement with the value 0
    // 0 indicates that eveyrthing is okay
    return 0;
}


/*
 * Basic function syntax:
 * type functionName (type parameter1, type parameter2, ...)
 * {
 *      // statements
 *
 *      // return statement, except for funtion type "void"
 * }
 *
 * e.g. for the above stated main function
 * type:                int
 * functionName:        main
 * parameters:          none
 * statements:          std::cout << "Hej hej world!";
 * return statement:    return 0;
 */