/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Calculate the amount of insuarance that should be purchased.
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
    int rpCst, minIns;
    float amtPerc;
    //Initialize or input i.e. set variable values
    amtPerc=0.80;
    //Map inputs -> outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>rpCst;
    minIns=rpCst*amtPerc;
    //Display the outputs
    cout<<"You need $"<<minIns<<" of insurance.";
    //Exit stage right or left!
    return 0;
}