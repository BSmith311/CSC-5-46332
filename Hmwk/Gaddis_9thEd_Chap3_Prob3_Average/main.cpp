/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    float score1, score2, score3, score4, score5;
    float avg;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Input 5 numbers to average."<<endl;
    cin>> score1;
    cin>>score2;
    cin>>score3;
    cin>>score4;
    cin>>score5;
    avg=(score1+score2+score3+score4+score5)/5;
    //Display the outputs
    cout<<"The average = "<<fixed<<setprecision(1)<<avg;
    //Exit stage right or left!
    return 0;
}