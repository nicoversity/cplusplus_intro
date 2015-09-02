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


int main()
{
    // statements
    
    /*
     * declaration statement
     * A variable of type "int" with the name "x" is being declared and can be used accessed for the remainder to this method. However, at this point, no value have been assigned to the variable.
     */
    int x;
    
    /*
     * assignment statement
     * A value, concretely 7, is assigned to the previously defined variable "x". From this point, x has the value of 7.
     *
     * Within assignment statements, a common terminology is LHS = RHS.
     * A value on the right-hand side (RHS) is assigned to a variable on the left-hand side (LHS)
     */
    x = 7;
    
    /*
     * declaration + assignment statement = initialization
     * Once a value is assigned to a variable, we say that the variable has been "initialized".
     */
    int y = 88;
    
    // of course, variables may change across the course of a function
    y = 3;
    
    /*
     * output statement
     * The values of the variables are given to the standard output stream (and thus the screen).
     * std::endl signals the standard stream to perform a line break.
     */
    std::cout << x << std::endl << y << std::endl;
    
    /*
     * return statement
     * Since the main function is of type "int", a return statement must be provided, indicating the end of the function's execution. Code after the return statement is not executed. Every function needs a return statement, except for functions of type "void".
     */
    return 0;
    
    // This code will never be executed. (Your compiler might provide a warning!)
    std::cout << "This text won't be printed." << std::endl;
}