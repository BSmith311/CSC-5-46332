/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on: July 23
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void key(char [], int);               //Input for the key
void answers(char [], int);         //Input for the answers
void results(char [], char []);            //Output of the results
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int sizeOfKey=23;                               //Size of key
    int sizeOfAnsw=27;                              //Size of answers
    char keys[sizeOfKey];                           //Key array
    char answs[sizeOfAnsw];                         //Answers array
    //Initialize or input i.e. set variable values
    
    //Score the exam
    
    //Display the outputs
    key(keys, sizeOfKey);                           //Calls key input function
    answers(answs, sizeOfAnsw);                     //Calls answer input function
    results(keys, answs);                           //Calls results output function
    
    //Exit stage right or left!
    return 0;
}

void key(char keys[], int sizeOfKey)                //Key input function
{
    for (int count=0; count<sizeOfKey; count++)     //Input loop
    {
        cin>>keys[count];                           //Key input array
    }
}
void answers(char answs[], int sizeOfAnsw)          //Answer input function
{
    for (int count=0; count<sizeOfAnsw; count++)    //Input loop
    {
        cin>>answs[count];                          //Answer input loop
    }
}

void results(char keys[], char answs[])             //Output Function
{
    int countK=3;                                   //Sets key count
    int countA=7;                                   //Sets answer count
    float correct=0;                                //%correct
    cout<<"C/W     ";                               //Output Prompt
    for (int count=0; count<20; count++)            //Loop for arrays
    {
        if (keys[countK++]==answs[countA++])        //If correct answer
        {
            cout<<"C ";                             //Outputs C
            correct++;                              //Adds one to correct counter
        }
        else                                        //If incorrect answer
        {
            cout<<"W ";                             //Outputs W
        }
    }
    cout<<endl<<"Percentage Correct = "<<(correct/20*100)<<"%"<<endl;   //Outputs percentage correct
}