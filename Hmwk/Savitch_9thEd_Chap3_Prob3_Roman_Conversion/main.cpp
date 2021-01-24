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
    int n1, // 1 place
        n10, // 10 place
        n100, // 100 place
        n1000, // 1000 place
        number; // User input number in Arabic
    //Initialize or input i.e. set variable values
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> number;
    if (number < 1000 || number > 3000)
    {
        cout << number << " is Out of Range!";
    }
    else
    {
        cout << number << " is equal to ";
        n1 = (number)%10;
        n10 = (number/10)%10;
        n100 = (number/100)%10;
        n1000 = (number/1000)%10;
        while (n1000 > 0)
        {
            cout << "M";
            n1000--;
        }
        if (n100 < 3 && n100 > 0)
        {
            do
            {
                cout << "C";
                n100--;
            } while (n100 < 3 && n100 > 0);
        }
        else if (n100 == 4)
        {
                cout << "CD";
        }
        else if (n100 > 4 && n100 < 9)
        {
            cout << "D";
            do
            {
                cout << "C";
                n100--;
            } while (n100 < 9 && n100 > 5);
        }
        else if (n100 == 9)
        {
                cout << "CM";
        }
        
        if (n10 < 3 && n10 > 0)
        {
            while (n10 < 3)
            {
                cout << "X";
                n10--;
            }
        }
        else if (n10 == 4)
        {
                cout << "XL";
        }
        else if (n10 > 4 && n10 < 9)
        {
            cout << "L";
            do
            {
                cout << "X";
                n10--;
            } while (n10 > 5 && n10 < 9);

        }
        else if (n10 == 9)
        {
                cout << "XC";
        }
        
        if (n1 < 3 && n1 > 0)
        {
            do
            {
                cout << "I";
                n1--;
            } while (n1 < 3 && n1 > 0);
        }
        else if (n1 == 4)
        {
                cout << "IV";
        }
        else if (n1 > 4 && n1 < 9)
        {
            cout << "V";
            do
            {
                cout << "I";
                n1--;
            } while (n1 > 5 && n1 < 9);
        }
        else if (n1 == 9)
        {
                cout << "IX";
        }
    }
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}