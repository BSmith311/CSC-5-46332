/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Calculate inflation after 1 year using two inputed prices
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
    float pr1, pr2, inflD, inflP;   //Price 1, price 2, inflation decimal, inflation percentage
    char again;                     //Choice to repeat program
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    do
    {
        cout<<"Enter current price:"<<endl;         //Price 1 prompt
        cin>>pr1;                                   //Price 1 input
        cout<<"Enter year-ago price:"<<endl;        //Price 2 prompt
        cin>>pr2;                                   //Price 2 input
        inflD=(pr1/pr2)-1;                          //Inflation calculation
        inflP=inflD*100;                            //Inflation converted to percentage
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<inflP<<"%"<<endl<<endl;       //Results output
        
        cout<<"Again:"<<endl;                       //Again prompt
        cin>>again;                                 //Again input
        if (again=='y' or again=='Y')               //CodeE formatting
        {
            cout<<endl;
        }
    } while (again=='y' or again=='Y');             //Repeats if yes
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}