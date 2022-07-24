/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on: July 23
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void input(int [], const int);                  //Input function
int search(int array [], const int SIZE);       //Linear search function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int SIZE=100;                                                 //Size of array
    int array[SIZE];                                                    //Array
    int value=50;                                                       //Desired value to search for
    //Initialize or input i.e. set variable values
    input(array, SIZE);                                                 //Calls input function
    
    //Display the outputs
    cout<<value<<" was found at indx = "<<search(array, SIZE)<<endl;    //Outputs search results
    
    //Exit stage right or left!
    return 0;
}

//Functions
void input(int array[], const int SIZE)                                 //Input funciton
{
    for (int count=0; count<SIZE; count++)                              //Input loop
    {
        cin>>array[count];                                              //Array input
    }
}

int search(int array [], const int SIZE)                                //Search function
{
    int index=0;                                                        //Sets default index
    int position=-1;                                                    //Sets default position
    int value=50;                                                       //Sets desired value
    bool found=false;                                                   //Sets found to false by default
    while (index<SIZE && !found)                                        //Loops until value is found
    {
        if (array[index]==value)                                        //If value is found
        {
            found=true;                                                 //Found is set to true
            position=index;                                             //Position is set to current index
        }
        index++;                                                        //Adds one to index
    }
    return position;                                                    //Returns position
}