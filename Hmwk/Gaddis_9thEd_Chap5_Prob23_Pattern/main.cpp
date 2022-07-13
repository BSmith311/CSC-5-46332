/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 7
 * Purpose:  Display pattern that increases to user input and back
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
    int uNum, numC, numR;
    //Initialize or input i.e. set variable values
    cin>>uNum;
    //Map inputs -> outputs
    for (numC=1; numC<=uNum; numC++)        //Loop for going up to user number
    {
        for (numR=1; numR<=numC; numR++)    //Loop for + needed per row
        {
            cout<<"+";                      //Loop output
        }
        cout<<endl<<endl;                   //Spacing
    }
    for (numC=uNum; numC>1; numC--)         //Loop for going down from user number
    {
        for (numR=1; numR<=numC; numR++)    //Loop for + needed per row
        {
            cout<<"+";                      //Loop output
        }
        cout<<endl<<endl;                   //Spacing
    }
    for ( ; numC==1; numC--)                //Loop for the last line since codeE does not want endl at the end of it
    {
        for (numR=1; numR<=numC; numR++)
        {
            cout<<"+";
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}