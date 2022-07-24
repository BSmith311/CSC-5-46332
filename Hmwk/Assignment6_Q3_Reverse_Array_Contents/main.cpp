/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created: July 22
 * Purpose:  Reverse the Array
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int SIZE=50;                  //Size of array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    int numbers[50];                //Array
    int cols=0;                     //Columns
    //Initialize or input i.e. set variable values
    for (int count=0; count<SIZE; count++)          //Loop for array input
    {
        cin>>numbers[count];                        //Array input
    }
    //Display the outputs
    for (int count=49; count>=0; count--)           //Loop for reversed array output
    {
        cout<<numbers[count]<<" ";                  //Outputs number
        cols++;                                     //Counts outputted numbers
        if (cols>9)                                 //Formatting
        {
            cout<<endl;
            cols=0;
        }
    }
    //Exit stage right or left!
    return 0;
}