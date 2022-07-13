/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 7
 * Purpose:  Calculate miles per gallon for two cars by converting liters and compare 
                also allow repeated uses
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
    float litGas1,           //Liters of gas for car 1
            galGas1,         //Gallons of gas for car 1
            milTrv1,         //Miles traveled for car 1
            mpg1,            //Miles per gallon for car 1
            litGas2,         //Liters of gas for car 2
            galGas2,         //Gallons of gas for car 2
            milTrv2,         //Miles traveled for car 2
            mpg2;            //Miles per gallon for car 2
    char again;              //User choice
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do
    {
        cout<<"Car 1"<<endl;                                                    //Ouput prompt, following lines all for Car 1
        cout<<"Enter number of liters of gasoline:"<<endl;                      //Prompt for Liters of gas
        cin>>litGas1;                                                           //Input for Liters of gas
        galGas1=(litGas1*LITERS_TO_GALLONS);                                    //Conversion from liters to gallons
        cout<<"Enter number of miles traveled:"<<endl;                          //Prompt for miles traveled
        cin>>milTrv1;                                                           //Input for miles traveled
        mpg1=(milTrv1/galGas1);                                                 //Calculation for miles per gallon
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg1<<endl<<endl;   //Output script
        
        cout<<"Car 2"<<endl;                                                    //Output prompt, following lines all for Car 2 but same as Car 1
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>litGas2;
        galGas2=(litGas2*LITERS_TO_GALLONS);
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milTrv2;
        mpg2=(milTrv2/galGas2);
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg2<<endl<<endl;
        
        if (mpg1>mpg2)                                                          //If car 1 is more efficient
        {
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;                   //Output
        }
        else if (mpg2>mpg1)                                                     //If car 2 is more efficient
        {
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;                   //Output
        }
        
        cout<<"Again:"<<endl;                                       //Prompt for repeat usage
        cin>>again; 
        if (again == 'Y' or again =='y')                            //Formatting for codeE
        {
            cout<<endl;                                             //CodeE formatting
        }
    } while (again == 'Y' or again =='y');                          //Repeats if choice is yes
    //Exit stage right or left!
    return 0;
}