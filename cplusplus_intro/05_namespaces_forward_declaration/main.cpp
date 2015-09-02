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
 * declaration of the namespace "std"
 *
 * Namespaces are used to organize your project in C++. Using a specific namespace you are able to access it's functions and variables accordingly. Different namespaces might hold functions and variables with the same name. Therefore namespaces help to differentiate between these.
 * By declaring the usage of namespace in the beginning of the class, it's prefix might be skipped whenever a function or variable of is accessed.
 */
using namespace std;


//void printTextAndInt(std::string myText, int myInt)
void printTextAndInt(string myText, int myInt)
{
    // before (without global namespace declaration)
    //std::cout << myText << myInt << std::endl;
    
    // after (with global namespace declaration)
    cout << myText << myInt << endl;
}


// foward declaration of the function "printText", which is defined beneath the main() function
void printText(string text);


int main()
{
    printTextAndInt("Some number: ", 7);
    
    // works: only with forward declaration as presented above
    // does not work (compiler error): without foward declaration
    printText("Some text");
    
    return 0;
}


/*
 * This function to print some text is completely correct and there is nothing wrong with it. However, when this function is called within the main function above, the C++ compiler has no knowledge about it yet and thus will not compile the written code. Therefore, this function needs to be declared before its calling in the main method ("forward declaration").
 * In order to avoid troubles with ugly forward declarations, C++ applies the concept of "header" (.h) and "implementation" (.cpp) files for its classes. This concept is explained in the tutorial step.
 */
void printText(string text)
{
    cout << text << endl;
}