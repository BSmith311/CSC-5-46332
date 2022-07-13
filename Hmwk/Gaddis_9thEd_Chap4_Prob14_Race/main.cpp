/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 8
 * Purpose:  Sort fastest times
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;
    int time1, time2, time3;
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl<<"Their names, then their times"<<endl;
    cin>>name1>>time1>>name2>>time2>>name3>>time3;
    //Map inputs -> outputs
    
    //Display the outputs
    if (time1<0 || time2<0 || time3<0)
        {
            cout<<"Invalid time, times must be positive numbers.";
        }
    else if (time1<=time2 && time1<=time3)
        {
            cout<<name1<<"\t"<<setw(3)<<time1<<endl;
            if (time2<=time3)
                {
                    cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                    cout<<name3<<"\t"<<setw(3)<<time3;
                }
            else if (time3<time2)
                {
                    cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                    cout<<name2<<"\t"<<setw(3)<<time2;
                }
        }
    else if (time2<=time1 && time2<=time3)
        {
            cout<<name2<<"\t"<<setw(3)<<time2<<endl;
            if (time1<=time3)
                {
                    cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                    cout<<name3<<"\t"<<setw(3)<<time3;
                }
            else if (time3<time1)
                {
                    cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                    cout<<name1<<"\t"<<setw(3)<<time1;
                }
        }
    else if (time3<=time1 && time3<=time2)
        {
            cout<<name3<<"\t"<<setw(3)<<time3<<endl;
            if (time1<=time2)
                {
                    cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                    cout<<name2<<"\t"<<setw(3)<<time2;
                }
            else if (time2<time1)
                {
                    cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                    cout<<name1<<"\t"<<setw(3)<<time1;
                }
        }
    //Exit stage right or left!
    return 0;
}