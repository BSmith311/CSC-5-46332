/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 6
 * Purpose:  Calculate points earned purchasing books
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    unsigned int custPur,   //Value of Customer Purchase
                    ptsErn; //Points Earned
                    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points"<<endl;                                     //Program Name Output
    cout<<"Input the number of books purchased this month."<<endl;      //Prompt for input
    cin>>custPur;                                                       //Input for books purchased
    //Map inputs -> outputs
    if (custPur==0)                                                 //If purchased books is zero
    {
        ptsErn=0;                                                   //Set points earned
        cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
        cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
    }
    else if (custPur==1)                                            //If purchased books is one
    {
        ptsErn=5;                                                   //Set points earned
        cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
        cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
    }
    else if (custPur==2)                                            //If purchased books is two
    {
        ptsErn=15;                                                  //Set points earned
        cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
        cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
    }
    else if (custPur==3)                                            //If purchased books is three
    {
        ptsErn=30;                                                  //Set points earned
        cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
        cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
    }
    else if (custPur>=4)                                            //If purchased books is four or more
    {
        ptsErn=60;                                                  //Set points earned
        cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
        cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}