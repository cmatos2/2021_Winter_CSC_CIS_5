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
    float mpg; //mile per gallon
    int gas, //user input for gas
        miles; // user input for miles
    char ans; // user input of y or n
    
    
    //Initialize or input i.e. set variable 
    ans = 'y';
    //Map inputs -> outputs
    while (ans == 'y')
    {
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> gas;
        cout << endl;
        cout << "Enter number of miles traveled:" << endl;
        cin >> miles;
        cout << endl;
        cout << "miles per gallon:" << endl;
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        mpg = miles / (gas * l_to_g);
        cout << mpg << endl;
        cout << "Again:" << endl;
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