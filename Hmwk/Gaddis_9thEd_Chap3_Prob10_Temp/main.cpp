/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Convert Fahrenheit to Celcius
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
    float degF, degC;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>degF;
    degC=(5.0/9)*(degF-32);
    //Display the outputs
    cout<<setprecision(1)<<fixed<<degF<<" Degrees Fahrenheit = "<<degC<< " Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}