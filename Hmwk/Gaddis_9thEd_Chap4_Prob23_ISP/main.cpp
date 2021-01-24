/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;


//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char package; //User input Package
    float hours, //User input hours of usage
          bill, //Total bill
          pdhour; // Overage paid hours
          
    
    //Initialize or input i.e. set variable values
    hours = bill = pdhour = 0;
    
    //Map inputs -> outputs
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> package;
    cin >> hours;
    
    //Display the outputs
    if (hours <= 744 && package == 'A' || 'B' || 'C')
         if (package == 'A')
         {
                if (hours > 10)
                {
                    pdhour = 2.00 * (hours - 10);
                }   
                bill = 9.95 + pdhour;
                cout << "Bill = $" << setw(6) << bill;
         }
        else if (package == 'B')
        {
                if (hours > 20)
                {
                    pdhour = 1.00 * (hours - 20);
                }   
                bill = 14.95 + pdhour;
                cout << "Bill = $" << setw(6) << bill;
        }
        else if (package == 'C')
        {
                bill = 19.95;
                cout << "Bill = $" << setw(6) << bill;
        }
            

    //Exit stage right or left!
    return 0;
}