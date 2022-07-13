/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Calculate sin, cos, and tan in degrees
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=3.14159265358979323846;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float var1, radConv, convVar, sin1, cos1, tan1;
    //Initialize or input i.e. set variable values
    radConv=PI/180;
    //Map inputs -> outputs
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>var1;
    convVar=var1*radConv;
    sin1=sin(convVar);
    cos1=cos(convVar);
    tan1=tan(convVar);
    //Display the outputs
    cout<<setprecision(0)<<fixed<<"sin("<<var1<<") = "<<setprecision(4)<<fixed<<sin1<<endl;
    cout<<setprecision(0)<<fixed<<"cos("<<var1<<") = "<<setprecision(4)<<fixed<<cos1<<endl;
    cout<<setprecision(0)<<fixed<<"tan("<<var1<<") = "<<setprecision(4)<<fixed<<tan1;
    //Exit stage right or left!
    return 0;
}