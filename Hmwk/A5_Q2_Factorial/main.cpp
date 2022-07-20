/* 
 * Author: Brandon Smith
 * Created on July 19
 * Purpose:  Caclulate the factorial using a function
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number;                 //User input
    //Initialize Variables
    //Process/Map inputs to outputs
    cout<<"This program calculates the factorial using a function ";        //Program function output
    cout<<"prototype found in the template for this problem."<<endl;        //Program function output
    cout<<"Input the number for the function."<<endl;                       //Input prompt
    cin>>number;                //Maps user input
    fctrl(number);              //Performs void function
    //Output data
    
    //Exit stage right!
    return 0;
}

//Void Function
void fctrl(int number)
{
    int count, result;                      //Count and result declaration
    result=1;                               //Maps initial result to 1
    for (count=1; count<=number; count++)   //Factorial Loop
    {
        result*=count;                      //Factorial Calculation
    }
    cout<<number<<"! = "<<result;           //Output
}