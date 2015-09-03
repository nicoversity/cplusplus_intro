/*
 * Project:     cplusplus_intro
 * File:        main.cpp
 * Author:      nico
 * Created:     2015-09-03
 *
 * Description:
 * Main class for the execution of the C++ program.
 * The class is used to illustrate brief basics of the C++ programming language.
 *
 * This is the implementation file (.cpp).
 */

#include "main.h"


int main()
{
    demoRelationalOperators();
    demoLogicalOperators();
    
    return 0;
}

// demonstarting some relational operators in C++
void demoRelationalOperators()
{
    // initialization of local variables
    int a = 42, b = 42, c = 23;
    
    // relational operators can be used to compare two values (or expressions)
    // relational operators are often involved in conditions / conditional statements
    
    // ==
    // is equal: checks if value a is equal to value b
    if (a == b) { cout << "a == b" << endl; }
    
    // !=
    // is not equal: checks if value a is not equal to value c
    if (a != c) { cout << "a != c" << endl; }
    
    // >
    // greater than: checks if value a is greater than value c
    if (a > c) { cout << "a > c" << endl; }
    
    // <
    // less than: checks if value c is less than value a
    if (c < a) { cout << "c < a" << endl; }
    
    // >=
    // greater than or equal: checks if value a is greater than or equal to value b
    if (a >= b) { cout << "a >= b" << endl; }
    if (a >= c) { cout << "a >= c" << endl; }
    
    // <=
    // less than or equal: checks if value a is less than or equal to value b
    if (a <= b) { cout << "a <= b" << endl; }
    if (c <= b) { cout << "c <= b" << endl; }
}

// demonstarting some logical operators in C++
void demoLogicalOperators()
{
    // initialization of local variables
    int a = 42, b = 42, c = 23;
    
    // logical operators can be used to compare the TRUE and FALSE state of expressions/conditions
    // logical operators are often used when multiple conditions need to be evaluated
    
    
    // &&
    // logical AND: checks if a condition1 (a==b) and a condition2 (c<=b) are true
    // all conditions involved have to evaluate to true!
    if ( (a == b) && (c <= b) )  { cout << "(a == b) && (c <= b)" << endl; }  // line gets printed because all conditions are true
    if ( (a == b) && (a > b) )   { cout << "(a == b) && (a > b)" << endl; }   // line does not get printed because condition2 evaluates to false
    
    // ||
    // logical OR: checks if either one of multiple conditions is true
    if ( (a == b) || (a > b) )  { cout << "(a == b) || (a > b)" << endl; }  // line gets printed because one condition is true
    if ( (a > b) || (c > b) )   { cout << "(a > b) || (c > b)" << endl; }   // line does not get printed because all conditions are false (none are true)
    
    // !
    // logical NOT: checks if a condition is false
    if ( !(a < b) )   { cout << "!(a < b)" << endl; }   // line gets printed because the condition is false
    if ( !(a == b) )  { cout << "!(a == b)" << endl; }  // line does not get printed because the condition is true
}