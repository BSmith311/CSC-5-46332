/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Find max of two parameters, then three
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
    float par1, par2, par3,     //Parameters 1, 2, 3
            big;                //Largest number
    //Initialize or input i.e. set variable values
    big=-1000000;                                               //Initialize largest number
    cout<<"Enter first number:"<<endl<<endl;                    //Prompt for 1st input
    cin>>par1;                                                  //Input for 1st input
    cout<<"Enter Second number:"<<endl<<endl;                   //Prompt for 2nd input
    cin>>par2;                                                  //Input for 2nd input
    cout<<"Enter third number:"<<endl<<endl;                    //Prompt for 3rd input
    cin>>par3;                                                  //Input for 3rd input
    
    //Map inputs -> outputs
    if (par1>big)               //If parameter 1 is largest
    {
        big=par1;               //Set big equal to parameter 1
    }
    if (par2>big)               //If parameter 2 is largest
    {
        big=par2;               //Set big equal to parameter 2
    }
    cout<<"Largest number from two parameter function:"<<endl;  //Output for first two parameters
    cout<<fixed<<setprecision(1)<<big<<endl<<endl;              //Result of first two parameters
    
    if (par3>big)               //If parameter 3 is largest
    {
        big=par3;               //Set big equal to parameter 3
    }
    cout<<"Largest number from three parameter function:"<<endl;//Output for first three parameters
    cout<<fixed<<setprecision(1)<<big<<endl;                    //Result of first three parameters
    //Display the outputs

    //Exit stage right or left!
    return 0;
}