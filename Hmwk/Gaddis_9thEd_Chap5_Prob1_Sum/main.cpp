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
    int x, // User number input 
        Sum; //Total Sum
    
    //Initialize or input i.e. set variable values
    Sum = 0;
    //Map inputs -> outputs

    cin >> x;

    while (x < 0)
    {
        cout << "ERROR: a positive number must be chosen\n";
        cout << "Enter a positive number: ";
        cin >> x; 
    }

    for (int i = 1; i <= x; i++)
    {
        Sum += i;
    }


    //Display the outputs
    cout << "Sum = " << Sum;
  

    //Exit stage right or left!
    return 0;
}