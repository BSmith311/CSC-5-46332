/* 
 * Author: Brandon Smith
 * Created on July 19
 * Purpose:  Determine if the integer is a Prime Number
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int uNum;               //User Number
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"Input a number to test if Prime."<<endl;     //Input Prompt
    cin>>uNum;                                          //Input
    //Output data
    isPrime (uNum);                                     //Runs void function
    //Exit stage right!
    return 0;
}

//Void Function
void isPrime(int uNum)
{
    for (int num=2; num<=uNum/2; num++)                 //Prime number loop
    {
        if (uNum % num==0)                              //If not a prime number
        {
            cout<<uNum<<" is not prime.";               //Outputs result
            return;                                     //Ends function
        }
    }
    cout<<uNum<<" is prime.";                           //If prime, outputs result
}