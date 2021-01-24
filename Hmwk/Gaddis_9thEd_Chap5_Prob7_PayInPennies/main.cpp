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
    int numdays, //number of days
        incr; // Doubling

    float daily, // daily salary
          total; // total salary
    
    //Initialize or input i.e. set variable values
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    incr = 2;
    daily = .01;
    total = 0;
    



    //Map inputs -> outputs
    cin >> numdays;
    if (numdays > 0)
    {
        for(int i = 0; i < numdays; i++)
        {
            total += daily;
            daily *= incr;
        }
    }

    //Display the outputs
    cout << "Pay = $" << total;

    //Exit stage right or left!
    return 0;
}