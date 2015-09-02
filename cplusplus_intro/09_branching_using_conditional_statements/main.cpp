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
    demoIfElseStatement(false);
    demoIfElseStatement(true);
    
    demoIfElseIfElseStatement(-23);
    demoIfElseIfElseStatement(7);
    demoIfElseIfElseStatement(99);
    
    demoSwitchStatement(7);
    demoSwitchStatement(99);
    demoSwitchStatement(42);
    
    demoConditionalOperator(true);
    demoConditionalOperator(false);
    
    return 0;
}


// demonstarting the if-else statement
void demoIfElseStatement(bool status)
{
    /*
     * If-else statements are used to branch your source code. Upon the evaluation of a specific condition, one of two statements are executed. One set of statements is executed when the condition was met, while the other set is executed if the condition was not met.
     *
     * if (condition)
     * {
     *     statements
     * } else
     * {
     *     statements
     * }
     */
    
    if (status == true)
    {
        cout << "Status = true" << endl;
    }
    else
    {
        cout << "Status = false" << endl;
    }
}


// demonstrating the if-else statement with multiple layers (containing more than one if statement)
void demoIfElseIfElseStatement(int someInt)
{
    /*
     * Technically the same as the if-else statement (see above), but instead of simply branching between two options, further conditions can be evaluated by adding
     * else if (condition) { statements }
     * levels.
     */
    
    if(someInt <= 0)
    {
        cout << "Entered int was less than or equal to 0." << endl;
    }
    else if(someInt > 0 && someInt <= 42)
    {
        cout << "Entered int was greater than 0 AND less than or equal to 42." << endl;
    }
    else
    {
        cout << "Entered int was greater than 42." << endl;
    }
}


// demonstrating the switch statement
void demoSwitchStatement(int someInt)
{
    /*
     * Switch-statements can further help to branch the source code based on a condition or expression. Switch-statemens provide a better override compared to a if-else statement with multiple layers.
     * The "break" keyword is important since it signals the code to leave the switch-statement once the source code for the specific branch is executed (otherwise the following source code in the switch-statement would be executed).
     *
     * switch (expression) {
     *    case constant:
     *         statements
     *         break;
     *
     *     default:
     *         break;
     * }
     */
    
    switch (someInt)
    {
        case 42:
            cout << "Awesome! - " << someInt << endl;
            break;
            
        case 7:
            cout << "You entered 7! Not bad." << endl;
            break;
            
        default:
            cout << "Hmmm, you entered " << someInt << ". Boring :)" << endl;
            break;
    }
}


// demonstrating the conditional assignment operator
void demoConditionalOperator(bool status)
{
    /*
     * The conditional operator can be used to assign a value to a variable after evaluating a specific condition.
     *
     * type variableName = (condition) ? valueIfConditionTrue : valueIfConditionFalse;
     */
    
    string text = (status == true) ? "Status was true." : "Status was false";
    cout << text << endl;
}