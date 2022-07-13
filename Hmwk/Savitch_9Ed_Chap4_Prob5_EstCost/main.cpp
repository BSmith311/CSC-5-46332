/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on July 12
 * Purpose:  Calculate inflation after 1 year using two inputed prices
                and display price after addition 1 and 2 years
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
    float pr1, pr2, inflD, inflP,   //Price 1, price 2, inflation decimal, inflation percentage
            yr1, yr2;               //Price in 1 year, price in 2 years
    char again;                     //Choice to repeat program
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do
    {
        cout<<"Enter current price:"<<endl;                                             //Price 1 prompt
        cin>>pr1;                                                                       //Price 1 input
        cout<<"Enter year-ago price:"<<endl;                                            //Price 2 prompt
        cin>>pr2;                                                                       //Price 2 input
        inflD=(pr1/pr2)-1;                                                              //Inflation calculation
        inflP=inflD*100;                                                                //Inflation converted to percentage
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<inflP<<"%"<<endl<<endl;       //Results output
        yr1=(pr1+(pr1*inflD));                                                          //Price after 1 year calculation
        cout<<"Price in one year: $"<<fixed<<setprecision(2)<<yr1<<endl;                //Price after 1 year output
        yr2=(yr1+(yr1*inflD));                                                          //Price after 2 years calculation
        cout<<"Price in two year: $"<<fixed<<setprecision(2)<<yr2<<endl<<endl;          //Price after 2 years output
        
        cout<<"Again:"<<endl;                       //Again prompt
        cin>>again;                                 //Again input
        if (again=='y' or again=='Y')               //CodeE formatting
        {
            cout<<endl;
        }
    } while (again=='y' or again=='Y');             //Repeats if yes
    //Display the outputs
    
    //Exit stage right or left!
    return 0;
}