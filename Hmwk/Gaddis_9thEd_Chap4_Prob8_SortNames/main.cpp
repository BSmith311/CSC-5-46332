/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 6
 * Purpose:  Sort Names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;         //Declared Names 1-3
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl<<"Input 3 names"<<endl;     //Prompt of inputs
    cin>>name1>>name2>>name3;                               //Inputs
    //Map inputs -> outputs
    if (name1<name2 && name1<name3)             //Process if Name 1 is first
    {
        cout<<name1<<endl;
        if (name2<name3)                        //Process if Name 2 is second and Name 3 is third
        {
            cout<<name2<<endl<<name3;
        }
        else                                    //Process if Name 3 is second and Name 2 is third
        {
            cout<<name3<<endl<<name2;
        }
    }
    else if(name2<name1 && name2<name3)         //Process if Name 2 is first
    {
        cout<<name2<<endl;
        if (name1<name3)                        //Process if Name 1 is second and Name 3 is third
        {
            cout<<name1<<endl<<name3;
        }
        else                                    //Process if Name 3 is second and Name 1 is third
        {
            cout<<name3<<endl<<name1;
        }
    }
    else if(name3<name1 && name3<name2)         //Process if Name 3 is first
    {
        cout<<name3<<endl;
        if (name1<name2)                        //Process if Name 1 is second and Name 2 is third
        {
            cout<<name1<<endl<<name2;
        }
        else                                    //Process if Name 2 is second and Name 1 is third
        {
            cout<<name2<<endl<<name1;
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}