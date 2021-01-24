/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>
#include <string> 
#include <iomanip>  //I/O Library
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis Name Sort Problem"<<endl;
    cout<<"Type 2 for Gaddis Books Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Number Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Signs Problem"<<endl;
    cin>>choice;
    
    if(choice=='1')
    {
            //Declare Variables
        string name1, // First Name Inout
            name2, // Second Name Input
            name3; // Third Name Input
        
        //Initialize or input i.e. set variable values
        
        //Map inputs -> outputs
        cout << "Sorting Names" << endl;
        cout << "Input 3 names" << endl;
        cin >> name1;
        cin >> name2;
        cin >> name3;

        //Display the outputs
        if (name1 < name2 && name1 < name3)
        {
            cout << name1 << endl;
            if (name2 < name3)
            {
                cout << name2 << endl << name3;
            }
            else
            {
                cout << name3 << endl << name2;
            }
        }
       else if (name2 < name1 && name2 < name3)
        {
            cout << name2 << endl;
            if (name1 < name3)
            {
                cout << name1 << endl << name3;
            }
            else
            {
                cout << name3 << endl << name1;
            }
        }
        else if (name3 < name1 && name3 < name2)
        {
            cout << name3 << endl;
            if (name1 < name2)
            {
                cout << name1 << endl << name2;
            }
            else
            {
                cout << name2 << endl << name1;
            }
        }
        
    }
    else if(choice=='2')
    {
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
    }
    else if(choice=='3')
    {
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
    }
    else if(choice=='4')
    {
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

    }
    else if(choice=='5')
    {
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
        {
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
        }     
    }
    else if(choice=='6')
    {
               //Declare Variables
        
        //Initialize or input i.e. set variable values
        char choice1, //First Player choise
             choice2; //Second Player choise
        
        //Map inputs -> outputs
        cout << "Rock Paper Scissors Game" << endl;
        cout << "Input Player 1 and Player 2 Choices" << endl;
        cin >> choice1;
        cin >> choice2;
        //Display the outputs
            if (choice1 == choice2)
        {
            cout << "Nobody wins";
        }
        else if (choice1 == 'P' || choice1 == 'p')
        {
            if (choice2 == 'R' || choice2 == 'r')
            {
                cout << "Paper covers rock.";
            }
            else if (choice2 == 'S' || choice2 == 's')
            {
                cout << "Scissors cuts paper.";
            }
        }
        else if (choice1 == 'S' || choice1 == 's')
        {
            if (choice2 == 'R' || choice2 == 'r')
            {
                cout << "Rock breaks scissors.";
            }
            else if (choice2 == 'P' || choice2 == 'p')
            {
                cout << "Scissors cuts paper.";
            }
        }
        else if (choice1 == 'R' || choice1 == 'r')
        {
            if (choice2 == 'P' || choice2 == 'P')
            {
                cout << "Paper covers rock.";
            }
            else if (choice2 == 'S' || choice2 == 's')
            {
                cout << "Rock breaks scissors.";
            }
        }
    }
    else if(choice=='7')
    {
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
    
    }
    else if(choice=='8')
    {
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
    }
    else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}