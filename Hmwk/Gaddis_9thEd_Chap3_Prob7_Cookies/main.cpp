/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Calculate the calories in an amount of cookies eaten
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
    int bagOfC, srvSize, cals;
    float calPC, cEtn, calEtn;
    //Initialize or input i.e. set variable values
    bagOfC=40;
    srvSize=10;
    cals=300;
    //Map inputs -> outputs
    calPC=cals/(bagOfC/srvSize);
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cEtn;
    calEtn=(cEtn*calPC);
    //Display the outputs
    cout<<"You consumed "<<calEtn<<" calories.";
    //Exit stage right or left!
    return 0;
}