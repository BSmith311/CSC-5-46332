/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Loop that allows user to input integers
                and output the largest and smallest
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
    float num, low, high;   //User number, smallest number, largest number
    //Initialize or input i.e. set variable values
    high=-10000000;         //Initialize large number
    low=10000000;           //Initialize small number
    //Map inputs -> outputs
    while (num != -99)      //Loop, first input cannot be exit prompt
    {
        cin>>num;           //User input number
        if (num==-99)       //Breaks loop if number is exit prompt
        {
            break;
        }
        if (num<low)        //If number is smaller than previous number
        {
            low=num;        //Sets lowest value to the number of the input
        }
        else if (num>high)  //If number is larger than previous number
        {
            high=num;       //Sets largest value to the number of the input
        }
    }
    //Display the outputs
    cout<<"Smallest number in the series is "<<low<<endl;
    cout<<"Largest  number in the series is "<<high;
    //Exit stage right or left!
    return 0;
}