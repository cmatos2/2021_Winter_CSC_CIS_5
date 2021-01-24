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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float curprce, //current price
          oldprce, //old price
          infrate, //Inflation price
          newprce; //newprice
          
    char ans; // input yes or no to repeat
    
    
    //Initialize or input i.e. set variable values
    curprce = oldprce = infrate = 0;
    ans = 'y';
    
    //Map inputs -> outputs
    while (ans == 'y')
    {
        cout << "Enter current price:" << endl;
        cin >> curprce;
        cout << "Enter year-ago price:" << endl;
        cin >> oldprce;
        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);
        infrate = ((curprce / oldprce) - 1) * 100;
        cout << "Inflation rate: " << infrate << "%" << endl << endl;
        newprce = curprce * ((infrate / 100) + 1);
        cout << "Price in one year: $" << newprce << endl;
        newprce = newprce * ((infrate / 100) + 1);
        cout << "Price in two year: $" << newprce << endl << endl;
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