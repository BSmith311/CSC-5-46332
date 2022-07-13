/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Sum of all integers from 1 to number entered
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
    int uNum, num, total;          //User number, number for addition, total
    //Initialize or input i.e. set variable values
    cin>>uNum;                                                  //User input
    num=1;                                                      //Setting variable to starting number
    total=0;                                                    //Setting total to zero
    //Map inputs -> outputs
    while (uNum<1)                                              //Invalid input process
    {
        cout<<"Invalid input, use positive integers only.";
        cin>>uNum;
    }
    while (num<=uNum)                                           //Addition
    {
        total=total+num++;
    }
    cout<<"Sum = "<<total;                                      //Final result output
    //Display the outputs

    //Exit stage right or left!
    return 0;
}