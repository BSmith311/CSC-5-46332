/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created: July 21
 * Purpose: Create a dice table
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;                       //Number of columns
const int ROWS=6;                       //Number of rows
//Function Prototype
void prntTbl(const int [][COLS],int);   //Function to print table

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int tablSum[ROWS][COLS];            //Table sum
    //Initialize or input i.e. set variable values
    
    //Display the outputs
    prntTbl(tablSum,ROWS);              //Calls print table function
    //Exit stage right or left!
    return 0;
}

//Void Function
void prntTbl(const int [][COLS],int)                        //Print table function
{
    
    cout<<"Think of this as the Sum of Dice Table"<<endl;   //Title output
    cout<<"           C o l u m n s"<<endl;                 //Format output
    cout<<"     |   1   2   3   4   5   6"<<endl;           //Column headers
    cout<<"----------------------------------"<<endl;       //Divider
    for (int rows=0; rows<ROWS; rows++)                     //Loop for rows
    {
        if (rows==0){cout<<"   1 |";}                       //First row
        if (rows==1){cout<<"R  2 |";}                       //Second row
        if (rows==2){cout<<"O  3 |";}                       //Third row
        if (rows==3){cout<<"W  4 |";}                       //Fourth row
        if (rows==4){cout<<"S  5 |";}                       //Fifth row
        if (rows==5){cout<<"   6 |";}                       //Sixth row
        
        for (int cols=0; cols<COLS; cols++)                 //Loop for columns
        {
            cout<<setw(4)<<(cols+1)+(rows+1);               //Adds row and column together
        }
        
        cout<<endl;                                         //Ends line
    }
}