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
    int num; //number of input square will be num x num
    char c; //character of that the square will be made out of
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs

    cin >> num;
    cin >> c;
    
    //Display the outputs
    while(num < 15 && num > 0)
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                cout << c;
            }
            if (i < num - 1)
            {
                cout << endl;
            }
            else
            {
                return(0);
            }
            
        }
    
    }

    //Exit stage right or left!
    return 0;
}