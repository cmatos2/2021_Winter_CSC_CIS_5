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
    int num, //User input number
        min, //lowest number
        max, //highest number
        first; //first time running the loop
    
    //Initialize or input i.e. set variable value
    num = min = max = 0;
    first = 1;
    //Map inputs -> outputs
    while (true)
    {
        cin >> num;
        if (num == -99)
        {
            break;
        }
        if (first == 1)
        {
            max = num;
            min = num;
            first = 0;
        }
        if (max < num )
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
    }
    //Display the outputs
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;

    //Exit stage right or left!
    return 0;
}