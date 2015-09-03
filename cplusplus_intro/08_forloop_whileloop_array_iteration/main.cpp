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

#include "main.h"


int main()
{
    demoForLoop(4);
    demoWhileLoop(8);
    demoForLoopThroughArray();
    
    return 0;
}


// demonstrating the "for loop"
void demoForLoop(int max)
{
    /*
     * The for-loop can be used to process iterative tasks. It consists of an initialization, a condition and an increment statement, as well as the statements that get executed during each iteration.
     *
     * for (initialization; condition; increment)
     * {
     *     statements
     * }
     */
    
    for (int i = 0; i < max; i++)
    {
        cout << i << endl;
    }
}


// demonstrating the "while loop"
void demoWhileLoop(int max)
{
    /*
     * The while-loop can be used to process iterative tasks as long as a certain condition is met. It consists of a conditional statement, the statements that get executing during each iteration as well as potentially an increment statement.
     *
     * Note: A loop that will never exit and run forever is called "infinite loop" ("endless loop").
     *
     * while (condition)
     * {
     *   statements
     *
     *   increment statment
     * }
     */
    
    int i = 0;
    while (i < max)
    {
        cout << i << endl;
        i++;
    }
}


void demoForLoopThroughArray()
{
    // array declaration and initialization
    int myIntArray [6] = {4, 8, 15, 16, 23, 42};
    
    // calculating the array length
    //cout << sizeof(myIntArray[0]) << endl;  // each int allocates 4 bytes in the system storage
    //cout << sizeof(myIntArray) << endl;     // 6 * 4 bytes = 24 bytes allocated for the array
    int arraylength = sizeof(myIntArray) / sizeof(myIntArray[0]);
    
    // iterating through all elements (indexes) in the array
    for (int i = 0; i < arraylength; i++) {
        cout << myIntArray[i] << endl;
    }
}