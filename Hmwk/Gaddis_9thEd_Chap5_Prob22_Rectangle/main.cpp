/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Create a rectangle with the same rows and columns
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
    char letter;                //Character used for rectangle
    int uNum, numR, numC;       //User number, row number, column number
    //Initialize or input i.e. set variable values
    cin>>uNum>>letter;          //User inputs
    //Map inputs -> outputs
    while (uNum<1 or uNum>15)   //Input validation
    {
        cout<<"Invalid input, enter a number between 1 and 15";
        cin>>uNum>>letter;
    }
    for (numC=1; numC<uNum; numC++)         //Loop for column
    {
        for (numR=1; numR<=uNum; numR++)    //Loop for row
        {
            cout<<letter;                   //Prints the letter
        }
        cout<<endl;                         //Ends the row
    }
    for ( ; numC==uNum; numC++)             //Loop for the last row because codeE doesn't want the last one to have endl
    {
        for (numR=1; numR<=uNum; numR++)    //Loop for row
        {
            cout<<letter;                   //Prints the letter
        }
        
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}