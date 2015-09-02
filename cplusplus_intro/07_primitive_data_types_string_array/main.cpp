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
    printSomePrimitiveDataTypes();
    printString();
    printArray();
    return 0;
}


// function illustrating some primitive (built-in) data types to store values and information
void printSomePrimitiveDataTypes()
{
    // int - Integer
    // holds numerical information
    int myInt = 7;
    cout << "int = " << myInt << endl;
    
    // char - Character
    // holds information about a single character in the alphabet
    char myChar = 'z';
    cout << "char = " << myChar << endl;
    
    // float - Floating point
    // holds numerical floating point information
    float myFloat = 4.8;
    cout << "float = " << myFloat << endl;
    
    // bool - Boolean
    // holds either "true" or "false" state information
    bool myBool = true; // "true" state either represented by keyword "true" or by int value "1"
    cout << "bool = " << myBool << endl;
    myBool = false; // "false" state either represented by keyword "false" or by int value "0"
    cout << "bool = " << myBool << endl;
    
    
    /*
     * Type conversion
     * It is possible to convert the value of variable into a value of another type. The example beneath illustrations the type conversation from an floating point value into an integer one. However, since the integer type is not able to store floating point information, this information is lost.
     * The syntax for this type conversion is called "type cast".
     */
    int myFloatToInt = (int)myFloat; // type cast: float to int
    cout << "myFloatToInt = " << myFloatToInt << endl;
}


// function illustrating the string object
void printString()
{
    // string
    // holds information in a series of single characters
    // part of the "std" namespace
    // technically not a "data type" but an "object" (featuring further functionalities and information)
    string text = "Hey ho let's go!";
    cout << "string = " << text << endl;
    
    // AFTER HAVING A LOOK INTO ARRAYS (see beneath):
    // Technically, a string object is an array of chars. Therefore it can be handled similarly.
    char firstLetter = text[0];
    cout << "First letter = " << firstLetter << endl;
}


// function illustrating the concept of an Array in C++
void printArray()
{
    /*
     * Declaration and initialization of an array holding information about six variables of type int
     * An array, indicated by [], is of different values of a specific type within one variable. The number within the [] at the array declaration indicated the array's size, representing the amount of values that can be stored. In the example beneath, the array has space for six different values of type int.
     */
    int myIntArray [6] = {4, 8, 15, 16, 23, 42};
    
    /*
     * An individual array entry, called index, is accessed in the following notation: arrayName[index]
     * Note: Array indexes start at 0 and NOT at 1! Therefore, the first entry in an array is accessed via arrayName[0], rather than by arrayName[1], which accesses actually the second index.
     */
    cout << "5th variable in the array = " << myIntArray[4] << endl;
    
    // overwrite an information held by a individual index in the array
    myIntArray[4] = 7;
    cout << "overwritten 5th variable in the array = " << myIntArray[4] << endl;
}