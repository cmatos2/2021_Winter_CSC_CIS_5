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
#include <iomanip>

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char name1[15], //First input name
        name2[15], //Second input name
        name3[15]; //Third input
    int time1, // First input time
        time2, // Second input time
        time3; // Third input time
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cin >> name1;
    cin >> time1;
    cin >> name2;
    cin >> time2;
    cin >> name3;
    cin >> time3;
    
    
    
    //Display the outputs
    cout << "Their names, then their times" << endl;
    
    if (time1 < 0 || 
        time2 < 0 || 
        time3 < 0)
    {
        cout << "Error. Runner times must be 0 or greater." << endl;
    }
    else
    {
        if (time1 < time2)
        {
            if (time1 < time3)
            {
                cout <<  name1 <<  "\t" << setw(3) << time1 << endl;
                if (time2 < time3)
                {
                    cout << name2 << "\t" << setw(3) << time2 << endl;
                    cout << name3 << "\t" << setw(3) << time3;
                }
                else
                {
                    cout << name3 << "\t" << setw(3) << time3 << endl;
                    cout << name2 << "\t" << setw(3) << time2;
                }
            }
        }
        if (time2 < time3)
        {
            if (time2 < time1)
            {
                cout << name2 << "\t" << setw(3) <<time2 << endl;
                if (time1 < time3)
                {
                    cout << name1 << "\t" << setw(3) << time1 << endl;
                    cout << name3 << "\t" << setw(3) << time3;
                }
                else
                {
                    cout << name3 << "\t" << setw(3) << time3 << endl;
                    cout << name1 << "\t" << setw(3) << time1;
                }
            }
        }
        if (time3 < time2)
        {
            if (time3 < time1)
            {
                cout << name3 << "\t" << setw(3) << time3 << endl;
                if (time1 < time2)
                {
                    cout << name1 << "\t" << setw(3) << time1 << endl;
                    cout << name2 << "\t" << setw(3) << time2;
                }
                else
                {
                    cout <<  name2 << "\t" << setw(3) << time2 << endl;
                    cout << name1 << "\t" << setw(3) << time1;
                }
            }
        }
    }

    //Exit stage right or left!
    return 0;
}