/* 
 * File: main.cpp
 * Author: Brandon Smith
 * Created on July 20
 * Purpose:  Time clock problem using AM/PM
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void timeClock (int,int,char,int,int&,int&,char&);             //Function to calculate time
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char uTime, nTime,                                  //12 hour notation time, AM/PM
            choice;                                     //User choice
    int uHour, uMin, uWait,                             //User Hours, user minutes, user wait time
            hour, min;                                  //Hours, minutes
    //Initialize or input i.e. set variable values
    hour=0;                                             //Sets default value for hours
    min=0;                                              //Sets defualt value for minutes
    
    //Map inputs -> outputs
    
    //Display the outputs
    do {                                                    //Program loop
        cout<<"Enter hour:"<<endl<<endl;                    //Input prompt
        cin>>uHour;                                         //Input
        cout<<"Enter minutes:"<<endl<<endl;                 //Input prompt
        cin>>uMin;                                          //Input
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;      //Input prompt
        cin>>uTime;                                         //Input
        cout<<"Enter waiting time:"<<endl<<endl;            //Input prompt
        cin>>uWait;                                         //Input
        cout<<"Current time = "<<                           //Current time output
                setw(2)<<std::setfill('0')<<uHour<<":"<<    //Outputs hours
                setw(2)<<std::setfill('0')<<uMin;           //Outputs minutes
        if (uTime=='A'){                                    //Outputs AM
            cout<<" AM"<<endl;}
        else if (uTime=='P'){                               //Outputs PM
            cout<<" PM"<<endl;}
        timeClock(uHour,uMin,uTime,uWait,hour,min,nTime);   //Calls void funciton
        cout<<"Time after waiting period = "<<              //Time after wait output
                setw(2)<<std::setfill('0')<<hour<<":"<<     //Outputs hours
                setw(2)<<std::setfill('0')<<min;            //Outputs minutes
        if (nTime=='A'){                                    //Outputs AM
            cout<<" AM"<<endl;}
        else if (nTime=='P'){                               //Outputs PM
            cout<<" PM"<<endl;}
        cout<<endl<<"Again:"<<endl;                         //Input prompt
        cin>>choice;                                        //Input
        if (choice=='y' or choice=='Y'){                    //CodeE formatting
            cout<<endl;}
        } while (choice=='y' or choice=='Y');               //Repeats loop if choice is yes
    //Exit stage right or left!
    return 0;
}

//Void Functions
void timeClock(int uHour,int uMin,char uTime,int uWait,int& hour,int& min,char& nTime){
    hour=uHour;                                             //Sets default hours
    min=uMin;                                               //Sets default minutes
    nTime=uTime;
    for ( ; uWait>60; ){                                    //+1 hour for every 60 minutes
        hour++;
        uWait-=60;
    }
    min+=uWait;                                             //Adds remaining minutes
    if (min>60){                                            //Removes minutes over 60, adds 1 hour
        min-=60;
        hour++;
    }
    if (hour>12){                                           //If hour is over 12, rolls over time
        hour-=12;
        if (nTime=='A'){nTime='P';}
        else if (nTime=='P'){nTime='A';}
    }
}