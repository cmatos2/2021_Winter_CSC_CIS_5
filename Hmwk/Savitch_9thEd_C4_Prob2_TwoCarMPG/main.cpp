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
const float l_to_g = 0.264179;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float mpg, //miles per gallon
          mpg1; //to store the first miles per gallon
    int gas, // gas input by user
        miles; //miles input by user
    char ans; // user input of y and n

    
    //Initialize or input i.e. set variable 
    ans = 'y';
    mpg = mpg1 = 0;

    //Map inputs -> outputs
    while (ans == 'y')
    {
        for (int i = 0; i != 2; i++)
        {
            cout << "Car " << i + 1 << endl;
            cout << "Enter number of liters of gasoline:" << endl;
            cin >> gas;
            cout << "Enter number of miles traveled:" << endl;
            cin >> miles;
            cout << "miles per gallon: ";
            cout.setf(ios::fixed, ios::floatfield);
            cout.precision(2);
            mpg1 = mpg;
            mpg = miles / (gas * l_to_g);
            cout << mpg << endl << endl;
        }
        if (mpg > mpg1)
        {
            cout << "Car 2 is more fuel efficient";
        }
        else if (mpg < mpg1)
        {
            cout << "Car 1 is more fuel efficient";
        }
        cout << endl << endl << "Again:" << endl;
        cin >> ans;
        
        if (ans == 'y')
        {
            cout << endl;
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}