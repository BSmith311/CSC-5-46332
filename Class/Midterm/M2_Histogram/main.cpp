/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 14
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char c1, c2, c3, c4, c5;    //Characters 1-4
    unsigned int num,           //Number for *
            n1, n2, n3, n4;     //Numbers 1-4
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>c4>>c3>>c2>>c1;
    
    //Histogram Here
    if (c1<58 && c1>47)                 //If the first input is a number
    {
        cout<<c1<<" ";                  //Outputs first input with a space after
        n1=(c1-48);                     //Converts the first input to number
        for (num=0; num<n1; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the first input is a character
    {
        cout<<c1<<" ?"<<endl;
    }
    
    if (c2<58 && c2>47)                 //If the second input is a number
    {
        cout<<c2<<" ";                  //Outputs second input with a space after
        n2=(c2-48);                     //Converts the second input to number
        for (num=0; num<n2; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the second input is a character
    {
        cout<<c2<<" ?"<<endl;
    }
    
    if (c3<58 && c3>47)                 //If the third input is a number
    {
        cout<<c3<<" ";                  //Outputs third input with a space after
        n3=(c3-48);                     //Converts the third input to number
        for (num=0; num<n3; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the third input is a character
    {
        cout<<c3<<" ?"<<endl;
    }
    
    if (c4<58 && c4>47)                 //If the fourth input is a number
    {
        cout<<c4<<" ";                  //Outputs fourth input with a space after
        n4=(c4-48);                     //Converts the fourth input to number
        for (num=0; num<n4; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the fourth input is a character
    {
        cout<<c4<<" ?"<<endl;
    }
    //Exit
    return 0;
}