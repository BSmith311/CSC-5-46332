/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Calculate the Gross Pay
             Code E does not label which book or question this is, it is just called PayCheck
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
    float payRate,      //Rate of pay per hour in $'s/hr
            hrsWrk,     //Number of base pay hours worked
            otHW,       //Number of overtime hours worked
            otPR,       //Rate of pay per hour for overtime in $'s/hr
            grsPay;     //Total Gross Pay in $
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"This program calculates the gross paycheck."<<endl;           //Intro statement
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl; //Prompt for inputs
    cin>>payRate;                                                        //Input for base pay rate
    cin>>hrsWrk;                                                         //Input for total hours worked
    otPR=payRate*2.0;                         //Calculation for overtime payrate
    if (hrsWrk<=40.0)                         //If statement for less than or equal to 40 hours
        grsPay=hrsWrk*payRate;                //Calculation for gross pay with no overtime
    if (hrsWrk>40.0)                          //If statement for more than 40 hours, overtime earned
        otHW=(hrsWrk-40.0),                   //Calculation for overtime hours worked
        grsPay=(40.0*payRate)+(otHW*otPR);    //Calculation for gross pay with overtime
    //Display the outputs
    cout<<"Paycheck = $"<<setprecision(2)<<fixed<<setw(7)<<grsPay;  //Output for total gross pay
    //Exit stage right or left!
    return 0;
}