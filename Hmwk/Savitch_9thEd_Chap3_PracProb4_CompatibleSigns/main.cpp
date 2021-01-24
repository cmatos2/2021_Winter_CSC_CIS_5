/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>
#include <string>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char sign1[15], // First sign input
        sign2[15]; // Second sign input
    
    //Initialize or input i.e. set variable values
    string Aries = "Aries";
    string Leo = "Leo";
    string Sagittarius = "Sagittarius";
    string Taurus = "Taurus";
    string Virgo = "Virgo";
    string Capricorn = "Capricorn";
    string Gemini = "Gemini";
    string Libra = "Libra";
    string Aquarius = "Aquarius";
    string Cancer = "Cancer";
    string Scorpio = "Scorpio";
    string Pisces = "Pisces";
    //Map inputs -> outputs
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1;
    cin >> sign2;
    
    //Display the outputs
    if ((sign1 == Aries) || (sign1 == Leo) || (sign1 == Sagittarius))
        {
            if ((sign2 == Aries) || (sign2 == Leo) || (sign2 == Sagittarius))
            {
                cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
            }
            else
            {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
         }
    else if ((sign1 == Taurus) || (sign1 == Virgo) || (sign1 == Capricorn))
        {
            if ((sign2 == Taurus) || (sign2 == Virgo) || (sign2 == Capricorn))
            {
                cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
            }
            else
            {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
         }
    else if ((sign1 == Gemini) || (sign1 == Libra) || (sign1 == Aquarius))
        {
            if ((sign2 == Gemini) || (sign2 == Libra) || (sign2 == Aquarius))
            {
                cout << sign1 << " and " << sign2 << " are compatible Air signs.";
            }
            else
            {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
         }
    else if ((sign1 == Cancer) || (sign1 == Scorpio) || (sign1 == Pisces))
        {
            if ((sign2 == Cancer) || (sign2 == Scorpio) || (sign2 == Pisces))
            {
                cout << sign1 << " and " << sign2 << " are compatible Water signs.";
            }
            else
            {
                cout << sign1 << " and " << sign2 << " are not compatible signs.";
            }
         }
    
    //Exit stage right or left!
    return 0;
}