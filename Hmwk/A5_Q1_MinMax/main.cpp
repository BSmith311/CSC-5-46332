/* 
 * Author: Brandon Smith
 * Created on July 19
 * Purpose: Find the min and max of 3 integers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int val1, val2, val3, min, max;                             //Values 1-3, minimum, maximum
    //Initialize Variables
    cout<<"Input 3 numbers"<<endl;                              //Input prompt
    cin>>val1>>val2>>val3;                                      //Inputs
    //Process/Map inputs to outputs
    minmax(val1, val2, val3, min, max);                         //Calls void function
    //Output data
    cout<<"Min = "<<min<<endl;                                  //Minimum output
    cout<<"Max = "<<max;                                        //Maximum output
    //Exit stage right!
    return 0;
}

//Void Function
void minmax(int val1,int val2,int val3,int& min,int& max)
{
    min=100000;                                                 //Sets min value
    max=-100000;                                                //Sets max value
    if (val1<min){                                              //If value 1 is less than min
        min=val1;}
    else if (val1>max){                                         //If value 1 is more than max
        max=val1;}
    
    if (val2<min){                                              //If value 2 is less than min
        min=val2;}
    else if (val2>max){                                         //If value 2 is more than max
        max=val2;}
    
    if (val3<min){                                              //If value 3 is less than min
        min=val3;}
    else if (val3>max){                                         //If value 3 is more than max
        max=val3;}
}