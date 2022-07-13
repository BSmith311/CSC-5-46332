/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 8
 * Purpose:  Calculate an Internet Bill
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PACKAGE_A_BASE=9.95,        //Base fee for package A, includes 10 hours
            PACKAGE_A_ADDITIONAL=2.00,  //Additional charge for package A per hour over base
            PACKAGE_B_BASE=14.95,       //Base fee for package B, includes 20 hours
            PACKAGE_B_ADDITIONAL=1.00,  //Additional charge for package B per hour over base
            PACKAGE_C_BASE=19.95;       //Base fee for package C, unlimited hours
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;            //User Choice
    unsigned int hrsUsed;   //Hours used
    float moChrg,           //Monthly Charge of package
            addChrg,        //Additional Charge of package
            bill;           //Total Bill
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"ISP Bill"<<endl;                 //Program Prompt
    cout<<"Input Package and Hours"<<endl;  //Input Prompt
    cin>>choice>>hrsUsed;                   //Inputs
    //Display the outputs
    switch (choice)
    {
        case 'A':                                       //Process for Package A
                    moChrg=PACKAGE_A_BASE;              //Setting the monthly charge
                    addChrg=PACKAGE_A_ADDITIONAL;       //Setting the additional charge
                    if (hrsUsed<=10)                    //Process if under base hours
                    {
                        bill=moChrg;
                    }
                    else if (hrsUsed>10)                //Process if over base hours
                    {
                        bill=moChrg+((hrsUsed-10)*addChrg);
                    }
                    cout<<"Bill = $ "<<bill;
                    break;
        case 'B':                                       //Process for Package B
                    moChrg=PACKAGE_B_BASE;
                    addChrg=PACKAGE_B_ADDITIONAL;
                    if (hrsUsed<=20)
                    {
                        bill=moChrg;
                    }
                    else if (hrsUsed>20)
                    {
                        bill=moChrg+((hrsUsed-20)*addChrg);
                    }
                    cout<<"Bill = $ "<<bill;
                    break;
        case 'C':                                       //Process for Package C
                    moChrg=PACKAGE_C_BASE;
                    bill=moChrg;
                    cout<<"Bill = $ "<<bill;
                    break;
        default: cout<<"Invalid choice, please enter A, B, or C."<<endl;  //Incase invalid choice
    }
    //Exit stage right or left!
    return 0;
}