/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 8
 * Purpose:  Determine if two horoscopes are compatible
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
    string sign1, sign2;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    
    //Display the outputs
    if (sign1=="Aries" || sign1=="Leo" || sign1=="Sagittarius")
    {
        if (sign2=="Aries" || sign2=="Leo" || sign2=="Sagittarius")
        {
           cout<<sign1<<" and "<<sign2<<" are compatible Fire signs."; 
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
        
    }
    else if (sign1=="Taurus" || sign1=="Virgo" || sign1=="Capricorn")
    {
        if (sign2=="Taurus" || sign2=="Virgo" || sign2=="Capricorn")
        {
            cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    else if (sign1=="Gemini" || sign1=="Libra" || sign1=="Aquarius")
    {
        if (sign2=="Gemini" || sign2=="Libra" || sign2=="Aquarius")
        {
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    else if (sign1=="Cancer" || sign1=="Scorpio" || sign1=="Pisces")
    {
        if (sign2=="Cancer" || sign2=="Scorpio" || sign2=="Pisces")
        {
            cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
        }
        else
        {
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    //Exit stage right or left!
    return 0;
}