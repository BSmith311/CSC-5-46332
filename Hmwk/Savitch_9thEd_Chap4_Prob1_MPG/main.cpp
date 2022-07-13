/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 7
 * Purpose:  Calculate miles per gallon by converting liters and allow repeated uses
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float LITERS_TO_GALLONS=0.264179;     //Conversion for liters to gallons
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float litGas,           //Liters of gas
            galGas,         //Gallons of gas
            milTrv,         //Miles traveled
            mpg;            //Miles per gallon
    char again;             //User choice
    //Initialize or input i.e. set variable values
    do
    {
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;    //Prompt for Liters of gas
        cin>>litGas;                                                //Input for Liters of gas
        galGas=(litGas*LITERS_TO_GALLONS);                          //Conversion from liters to gallons
        cout<<"Enter number of miles traveled:"<<endl<<endl;        //Prompt for Gallons of gas
        cin>>milTrv;                                                //Input for miles traveled
        mpg=(milTrv/galGas);                                        //Calculation for miles per gallon
        cout<<"miles per gallon:"<<endl;                            //Output script
        cout<<fixed<<setprecision(2)<<mpg<<endl;                    //Output mpg
        cout<<"Again:"<<endl;                                       //Prompt for repeat usage
        cin>>again;                                                 //Input for repeat usage
        if (again == 'Y' or again =='y')                            //Formatting for codeE
        {
            cout<<endl;                                             //CodeE formatting
        }
    } while (again == 'Y' or again =='y');                          //Repeats if choice is yes
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}