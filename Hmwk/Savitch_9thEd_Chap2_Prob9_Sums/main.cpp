/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Find positive, negative, and total sum of 10 numbers
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
    int num1, num2, num3, num4, num5,   //Numbers 1-5    
        num6, num7, num8, num9, num10,  //Numbers 6-10
        negSum, posSum, tltSum;         //Negative Sum, Positive Sum, Total Sum
    //Initialize or input i.e. set variable values
    negSum=0;        //For whatever reason had to set this to zero or I get stack overflow
    posSum=0;        //For whatever reason had to set this to zero or I get stack overflow
    //Map inputs -> outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;    //Prompt for Input
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;   //Inputs 1-10, Finally figured out how to do cin on one line
    if (num1>=0)
        posSum+=num1;
    if (num1<0)
        negSum+=num1;
    if (num2>=0)
        posSum+=num2;
    if (num2<0)
        negSum+=num2;
    if (num3>=0)
        posSum+=num3;
    if (num3<0)
        negSum+=num3;
    if (num4>=0)
        posSum+=num4;
    if (num4<0)
        negSum+=num4;
    if (num5>=0)
        posSum+=num5;
    if (num5<0)
        negSum+=num5;
    if (num6>=0)
        posSum+=num6;
    if (num6<0)
        negSum+=num6;
    if (num7>=0)
        posSum+=num7;
    if (num7<0)
        negSum+=num7;
    if (num8>=0)
        posSum+=num8;
    if (num8<0)
        negSum+=num8;
    if (num9>=0)
        posSum+=num9;
    if (num9<0)
        negSum+=num9;
    if (num10>=0)
        posSum+=num10;
    if (num10<0)
        negSum+=num10;
    tltSum=negSum+posSum;
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<tltSum;
    //Exit stage right or left!
    return 0;
}