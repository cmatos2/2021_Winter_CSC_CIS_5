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
    int user; //user input how large the pyramid should be
    
    //Initialize or input i.e. set variable values
    cin >> user;
    user--;
    //Map inputs -> outputs
    for (int i = 0; i <= user; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "+";
        }
        cout << endl << endl;
       
        
    }
    for (int k = user; k >= 0; k--)
    {
        for (int l = 0; l <= k; l++)
        {
            cout << "+";
        }
        
        if (k > 0)
        {
            cout << endl;
            cout << endl;
        }
        
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}