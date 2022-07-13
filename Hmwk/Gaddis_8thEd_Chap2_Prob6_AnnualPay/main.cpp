/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 23
 * Purpose: HMWK 1
 *          Define 3 variables regarding annual pay using fixed values
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float payAmount, payPeriods, annualPay;
    //Initialize Variables
    payAmount=2200.0, payPeriods=26;
    //Map inputs to outputs -> The Process
    annualPay=payAmount*payPeriods;
    //Display Results
    cout<<"Your annual pay for the year is $"<<annualPay<<endl;
    //Exit stage right
        return 0;
}

