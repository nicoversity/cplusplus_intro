/*
 * Project:     cplusplus_intro
 * File:        main.cpp
 * Author:      nico
 * Created:     2015-09-01
 *
 * Description:
 * Main class for the execution of the C++ program.
 * The class is used to illustrate brief basics of the C++ programming language.
 *
 * This is the implementation file (.cpp).
 */

// include header file (and thus all of its declarations)
#include "main.h"


int main()
{
    
    // both functions can be called, because the C++ compiler knows about their existence, due to the included header file main.h
    printTextAndInt("Some number: ", 7);
    printText("Some text");
    
    return 0;
}


// definition of the function, as declared in the main.h header file
void printTextAndInt(string myText, int myInt)
{
    cout << myText << myInt << endl;
}


// definition of the function, as declared in the main.h header file
void printText(string text)
{
    cout << text << endl;
}