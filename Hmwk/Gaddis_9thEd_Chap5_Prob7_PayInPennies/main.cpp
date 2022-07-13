/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Calculate pay if payrate is doubled everyday,
                starting pay is $0.01
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
    int num, days;                  //Number of days calculated and number of days required
    double pay, total;              //Pay rate and total pay (Only works for TestCase3 if it's a double)
    //Initialize or input i.e. set variable values
    cin>>days;                      //User input for days
    num=1;                          //Initialize num
    total=0;                        //Initialize total
    pay=0.01;                       //Initialize pay
    //Map inputs -> outputs
    while (days<1)                  //Input validation
    {
        cout<<"Number of days worked must be at least 1";
    }
    while (num<=days)               //Loop calculation
    {
        total=total+pay;            //Total pay calculation
        pay=pay*2;                  //Double pay rate
        num++;                      //+1 to day counter
    }
    //Display the outputs
    cout<<"Pay = $"<<fixed<<setprecision(2)<<total;     //Final output of results
    //Exit stage right or left!
    return 0;
}