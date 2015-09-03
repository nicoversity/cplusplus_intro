/*
 * Project:     cplusplus_intro
 * File:        main.h
 * Author:      nico
 * Created:     2015-09-01
 *
 * Description:
 * Main class for the execution of the C++ program.
 * The class is used to illustrate brief basics of the C++ programming language.
 *
 * This is the header file (.h).
 */

// include statement for loading of the library for standard input and standard output moved from main.cpp to its header file
#include <iostream>


// header guard (unique name), preventing the header file to be #included more than once
#ifndef cplusplus_intro_main_h
#define cplusplus_intro_main_h


// header content: all declarations go here

// declaration of the namespace "std"
using namespace std;

// declaration of the main class's functions
void printText(string text);
void printTextAndInt(string myText, int myInt);

/*
 * Note: Within the header file, only declarations of functions should be included! The definition of these functions, meaning their actual source code, belongs into the header files implementation (.cpp) counterpart.
 */

// end of the header guard
#endif