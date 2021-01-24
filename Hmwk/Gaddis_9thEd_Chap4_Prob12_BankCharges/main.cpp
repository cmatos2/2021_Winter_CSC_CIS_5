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
    float bal, // balance
        chqfee, //Checks fee 
        mnthfee, //Monthly fee
        lowfee, //Low balance
        newbal; //New Balance
    int checks; //Number checks written
    
    //Initialize or input i.e. set variable values
    checks = 0;
    bal = chqfee = lowfee = newbal = 0;
    mnthfee = 10;
    
    //Map inputs -> outputs
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> bal;
    cin >> checks;
    if (bal >= 0 && bal <= 400 )
    {
        lowfee = 15;
    }
    else if (bal < 0)
    {
       cout << "The Account is Overdrawn" << endl;
    }
    
    
    //Display the outputs
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (checks < 0)
    {
        cout << "Do not accept a negative value for the number of checks written." << endl;
        return(0);
    }
    else if (checks > 0 && checks <= 19)
    {
        cout << "Balance     $" << setw(9) << bal << endl;
        chqfee = checks * 0.15;
        cout << "Check Fee   $" << setw(9) << chqfee <<endl;
        cout << "Monthly Fee $" << setw(9) << mnthfee << endl;
        cout << "Low Balance $" << setw(9) << lowfee << endl;
        newbal = bal - chqfee - mnthfee - lowfee;
        cout << "New Balance $" << setw(9) << newbal;
    }
    else if (checks >= 20 && checks <= 39)
    {
        cout << "Balance     $" << setw(9) << bal << endl;
        chqfee = checks * 0.08;
        cout << "Check Fee   $" << setw(9) << chqfee << endl;
        cout << "Monthly Fee $" << setw(9) << mnthfee << endl;
        cout << "Low Balance $" << setw(9) << lowfee << endl;
        newbal = bal - chqfee - mnthfee - lowfee;
        cout << "New Balance $" << setw(9) << newbal;
    }
    else if (checks >= 40 && checks <= 59)
    {
        cout << "Balance     $" << setw(9) << bal << endl;
        chqfee = checks * 0.06;
        cout << "Check Fee   $" << setw(9) << chqfee <<endl;
        cout << "Monthly Fee $" << setw(9) << mnthfee << endl;
        cout << "Low Balance $" << setw(9) << lowfee << endl;
        newbal = bal - chqfee - mnthfee - lowfee;
        cout << "New Balance $" << setw(9) << newbal;
    }
    else if (checks >= 60)
    {
        cout << "Balance     $" << setw(9) << bal << endl;
        chqfee = checks * 0.04;
        cout << "Check Fee   $" << setw(9) << chqfee <<endl;
        cout << "Monthly Fee $" << setw(9) << mnthfee << endl;
        cout << "Low Balance $" << setw(9) << lowfee << endl;
        newbal = bal - chqfee - mnthfee - lowfee;
        cout << "New Balance $" << setw(9) << newbal;
    }

    //Exit stage right or left!
    return 0;
}