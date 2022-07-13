/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Determine if a building is a fire law violation
                regarding maximum room capacity
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
    int rmCap,          //Capacity of room
        numOP,          //Number of people meeting
        numOvr,         //Number of people over limit
        numUnd;         //Number of people under limit
        
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl; //Initial prompt for inputs
    cin>>rmCap;                 //Input for room capacity
    cin>>numOP;                 //Input for number of people meeting
    
    //Display the outputs
    if (numOP>rmCap)                //If statement for over capacity
        numOvr=(numOP-rmCap),       //Calculation for amount over capacity
        cout<<"Meeting cannot be held."<<endl<<"Reduce number of people by "<<
               numOvr<<" to avoid fire violation.";              //Output for over capacity
    if (numOP<rmCap)                //If statement for under capacity
        numUnd=(rmCap-numOP),       //Calculation for amount under capacity
        cout<<"Meeting can be held."<<endl<<"Increase number of people by "<<
        numUnd<<" will be allowed without violation.";     //Output for under capacity
    //Exit stage right or left!
    return 0;
}