/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int books; //Numbers of books
    
    //Initialize or input i.e. set variable values
    books = 0;
    //Map inputs -> outputs
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> books;
    
    //Display the outputs
    
    if (books == 0)
    {
        cout << "Books purchased =" << setw(3) << books << endl;
        cout << "Points earned   =" << setw(3) << "0";
        
    }
    else if (books == 1)
    {
        cout << "Books purchased =" << setw(3) << books << endl;
        cout << "Points earned   =" << setw(3) << "5";
    }
    else if (books == 2)
    {
        cout << "Books purchased =" << setw(3) << books << endl;
        cout << "Points earned   =" << setw(3) << "15";
    }
    else if (books == 3)
    {
        cout << "Books purchased =" << setw(3) << books << endl;
        cout << "Points earned   =" << setw(3) << "30";
    }
    else if (books >= 4)
    {
        cout << "Books purchased =" << setw(3) << books << endl;
        cout << "Points earned   =" << setw(3) << "60";
        
    }
    else
    {
        return(0);
    }
    //Exit stage right or left!
    return 0;
}