/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on: July 23
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void input(int [], const int);                                          //Input function
void sort(int [], const int);                                           //Sorts array
void print(int [], const int);                                          //Prints sorted array
int search(int array [], const int SIZE, int);                          //Linear search function

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int SIZE=100;                                                 //Size of array
    int array[SIZE];                                                    //Array
    int val;                                                            //Value desired
    //Initialize or input i.e. set variable values
    input(array, SIZE);                                                 //Calls input function
    sort(array, SIZE);                                                  //Calls sort function
    //Display the outputs
    print(array, SIZE);                                                 //Calls print sorted array function
    cout<<"Input the value to find in the array"<<endl;                 //Input prompt
    cin>>val;                                                           //Input
    cout<<val<<" was found at indx = "<<search(array, SIZE, val)<<endl; //Outputs search results
    
    //Exit stage right or left!
    return 0;
}

//Functions
void input(int array[], const int SIZE)                                 //Input function
{
    for (int count=0; count<SIZE; count++)                              //Input loop
    {
        cin>>array[count];                                              //Array input
    }
}

void sort(int array[], const int SIZE)                                  //Bubble Sort function
{
    bool swap;                                                          //Bool swap
    int temp;                                                           //Temporary value holder
    do
    {
        swap=false;                                                     //Sets swap to false
        for (int count=0; count<(SIZE-1); count++)                      //Loop for number swap
        {
            if (array[count]>array[count+1])                            //If first value is more than second value
            {
                temp=array[count];                                      //Saves first array value temporarily
                array[count]=array[count+1];                            //Sets second array value to first
                array[count+1]=temp;                                    //Sets first array value to second
                swap=true;                                              //Sets swap to true
            }
        }
    }while (swap);
}

void print(int array[], const int SIZE)                                 //Print sorted array function
{
    for (int count=0; count<SIZE; count++)                              //Output loop
    {
        cout<<array[count]<<" ";                                        //Array input
        if (count==9){cout<<endl;}                                      //Spacing
        if (count==19){cout<<endl;}                                     //Spacing
        if (count==29){cout<<endl;}                                     //Spacing
        if (count==39){cout<<endl;}                                     //Spacing
        if (count==49){cout<<endl;}                                     //Spacing
        if (count==59){cout<<endl;}                                     //Spacing
        if (count==69){cout<<endl;}                                     //Spacing
        if (count==79){cout<<endl;}                                     //Spacing
        if (count==89){cout<<endl;}                                     //Spacing
        if (count==99){cout<<endl;}                                     //Spacing
    }
    cout<<endl;                                                         //Spacing
}

int search(int array [], const int SIZE, int val)                       //Search function
{
    int first=0,                                                        //First array element
        last=SIZE-1,                                                    //Last array element
        mid=0,                                                          //Midpoint of search
        position=-1;                                                    //Position of search value
    bool found=false;                                                   //Flag
    while (!found && first<=last)                                       //Loop to find value
    {
        mid=(first+last)/2;                                             //Midpoint calculation
        if (array[mid]==val)                                            //If loop is found at midpoint
        {
            found=true;                                                 //Sets flag to true
            position=mid;                                               //Sets position to midpoint
        }
        else if (array[mid]>val)                                        //If value is in lower half
        {
            last=mid-1;                                                 
        }
        else                                                            //If value is in upper half
        {
            first=mid+1;                                             
        }
        
    }
    return position;                                                    //Returns position
}