/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    char choice1, //First Player choise
         choice2; //Second Player choise
    
    //Map inputs -> outputs
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> choice1;
    cin >> choice2;
    //Display the outputs
        if (choice1 == choice2)
    {
        cout << "Nobody wins";
    }
    else if (choice1 == 'P' || choice1 == 'p')
    {
        if (choice2 == 'R' || choice2 == 'r')
        {
            cout << "Paper covers rock.";
        }
        else if (choice2 == 'S' || choice2 == 's')
        {
            cout << "Scissors cuts paper.";
        }
    }
    else if (choice1 == 'S' || choice1 == 's')
    {
        if (choice2 == 'R' || choice2 == 'r')
        {
            cout << "Rock breaks scissors.";
        }
        else if (choice2 == 'P' || choice2 == 'p')
        {
            cout << "Scissors cuts paper.";
        }
    }
    else if (choice1 == 'R' || choice1 == 'r')
    {
        if (choice2 == 'P' || choice2 == 'P')
        {
            cout << "Paper covers rock.";
        }
        else if (choice2 == 'S' || choice2 == 's')
        {
            cout << "Rock breaks scissors.";
        }
    }
    

    //Exit stage right or left!
    return 0;
}