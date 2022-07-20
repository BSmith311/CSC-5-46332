/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on July 20
 * Purpose:  Calculate the present value
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float psntVal(float,int,float);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float psVal, f, r, n;         //Present Value, Future Value desired, Annual interest rate, number of years
    //Initialize or input
    
    //Map inputs to outputs
    cout<<"This is a Present Value Computation"<<endl;  //Initial Program Prompt
    psVal=psntVal(f, n, r)+0.01;                        //Sets value and calls function
    cout<<"The Present Value = $"<<                     //Final output prompt
            fixed<<setprecision(2)<<psVal;              //Final output
    //Exit
    return 0;
}

//Functions
float psntVal(float f, int n, float r)                  //Present Value Function
{
    float result;                                       //Result
    cout<<"Input the Future Value in Dollars"<<endl;    //Input Prompt
    cin>>f;                                             //User input
    cout<<"Input the Number of Years"<<endl;            //Input Prompt
    cin>>n;                                             //User input
    cout<<"Input the Interest Rate %/yr"<<endl;         //Input Prompt
    cin>>r;                                             //User input
    result=f/(pow(1+(r*0.01), n));                      //Calculates result
    return result;                                      //Returns result
}