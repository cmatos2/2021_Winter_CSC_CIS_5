/* 
 * File:   
 * Author: 
 * Created on 
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
float max2para (float first, float second);
float max3para (float first, float second, float third);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float first, //first number input
          second, //second number input
          third, //third number input
          max; //larget number
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Enter first number:" << endl;
    cin >> first;
    cout << endl;
    cout << "Enter Second number:" << endl;
    cin >> second;
    cout << endl;
    cout << "Enter third number:" << endl;
    cin >> third;
    cout << endl;
    max = max2para(first, second);
    cout << "Largest number from two parameter function:" << endl << max << endl << endl;
    max = max3para(first, second, third);
    cout << "Largest number from three parameter function:" << endl << max << endl;
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float max2para(float first, float second)
{
    if (first > second)
        return (first);
    else
        return (second);
}

float max3para(float first, float second, float third)
{
    if (first > second && first > third)
        return (first);
    else if (second > first && second > third)
        return (second);
    else
        return (third);
}