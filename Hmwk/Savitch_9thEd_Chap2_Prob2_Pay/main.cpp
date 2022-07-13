/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Calculate retroactive pay for employees
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float RETROACTIVE_PAY_PERIOD=0.5;          //Amount of retroactive paid months earned over year (months/years)
//Function Prototypes
    
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prevAS,           //Annual Salary for Previous Year
        payInc,         //Pay Increase
        retPay,         //Retroactive Pay
        newAS,          //New Annual Salary
        newMS;          //New Monthly Salary
    
    //Initialize or input i.e. set variable values
    payInc=0.076;            //Pay increase is 7.6%
    
    //Map inputs -> outputs
    cout<<"Input previous annual salary."<<endl;    //Prompt for input
    cin>>prevAS;                                    //Input for previous annual salary
    newAS=prevAS+(prevAS*payInc);                   //Calculation for new annual salary
    retPay=(newAS-prevAS)*RETROACTIVE_PAY_PERIOD;   //Calculation for retroactive pay
    newMS=newAS/12.00;                              //Calculation for new monthly pay
    //Display the outputs
    cout<<setprecision(2)<<fixed
        <<"Retroactive pay    = $"<<setw(7)<<retPay<<endl
        <<"New annual salary  = $"<<setw(7)<<newAS<<endl
        <<"New monthly salary = $"<<setw(7)<<newMS;
    //Exit stage right or left!
    return 0;
}