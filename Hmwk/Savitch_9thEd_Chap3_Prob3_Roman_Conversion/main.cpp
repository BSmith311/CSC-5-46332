/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 8
 * Purpose:  Translate years 1000-3000 from arabic numerals to roman numerals
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int abcNum,        //Year in Arabic Numerals
                    n1,         //Number in ones place
                    n10,        //Number in tens place
                    n100,       //Number in hundreds place
                    n1000;      //Number in thousands place
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Arabic to Roman numeral conversion."<<endl;  //Initial Output
    cout<<"Input the integer to convert."<<endl;        //Prompt for input
    cin>>abcNum;                                        //Input
    //Display the outputs
    n1000=(abcNum/1000)%10;                 //Calculation for thousands place
    n100=(abcNum/100)%10;                   //Calculation for hundreds place
    n10=(abcNum/10)%10;                     //Calculation for tens place
    n1=(abcNum/1)%10;                       //Calculation for ones place
    if (abcNum<=3000 && abcNum>=1000)       //Process if input is within range
    {
        cout<<abcNum<<" is equal to ";      //Initial output for results
        
        if (n1000==1)                       //Process for thousands place result 1-3
        {
           cout<<"M";
        }
        else if (n1000==2)
        {
           cout<<"MM";
        }
        else if (n1000==3)
        {
           cout<<"MMM";
        }
        
        if (n100==1)                        //Process for hundreds place result 1-9
        {
            cout<<"C";
        }
        else if (n100==2)
        {
            cout<<"CC";
        }
        else if (n100==3)
        {
            cout<<"CCC";
        }
        else if (n100==4)
        {
            cout<<"CD";
        }
        else if (n100==5)
        {
            cout<<"D";
        }
        else if (n100==6)
        {
            cout<<"DC";
        }
        else if (n100==7)
        {
            cout<<"DDC";
        }
        else if (n100==8)
        {
            cout<<"DDDC";
        }
        else if (n100==9)
        {
            cout<<"CM";
        }
        
        if (n10==1)                         //Process for tens place result 1-9
        {
            cout<<"X";
        }
        else if (n10==2)
        {
            cout<<"XX";
        }
        else if (n10==3)
        {
            cout<<"XXX";
        }
        else if (n10==4)
        {
            cout<<"XL";
        }
        else if (n10==5)
        {
            cout<<"L";
        }
        else if (n10==6)
        {
           cout<<"LX"; 
        }
        else if (n10==7)
        {
            cout<<"LXX";
        }
        else if (n10==8)
        {
            cout<<"LXXX";
        }
        else if (n10==9)
        {
            cout<<"XC";
        }
        
        if (n1==1)                          //Process for ones place result 1-9
        {
            cout<<"I";
        }
        else if (n1==2)
        {
            cout<<"II";
        }
        else if (n1==3)
        {
            cout<<"III";
        }
        else if (n1==4)
        {
            cout<<"IV";
        }
        else if (n1==5)
        {
            cout<<"V";
        }
        else if (n1==6)
        {
            cout<<"VI";
        }
        else if (n1==7)
        {
            cout<<"VII";
        }
        else if (n1==8)
        {
            cout<<"VIII";
        }
        else if (n1==9)
        {
            cout<<"IX";
        }
    }
    else                                        //Process if output is outside of range
    {
        cout<<abcNum<<" is Out of Range!";
    }
    
    
    //Exit stage right or left!
    return 0;
}