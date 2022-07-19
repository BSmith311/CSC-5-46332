/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 14
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number,                  //Number
        n1, n10, n100, n1000;               //Place calculations
    string zero, one, two, three, four,     //0-4 
        five, six, seven, eight, nine;      //5-9
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    //Calculate the 1000's, 100's, 10's and 1's
    n1000=(number/1000)%10;             //1000's calculation
    n100=(number/100)%10;               //100's calculation
    n10=(number/10)%10;                 //10's calculation
    n1=(number/1)%10;                   //1's calculation
    //Output the check value
    if (number<=3000 && number>=1)      //Input verification
    {
        if (n1000<=3 && n1000>=1)       //Thousands
        {
            one="One Thousand ";
            two="Two Thousand ";
            three="Three Thousand ";
            if (n1000==3)
            {
                cout<<three;
            }
            if (n1000==2)
            {
                cout<<two;
            }
            if (n1000==1)
            {
                cout<<one;
            }
        }
        if (n100<=9 && n100>=1)         //Hundreds
        {
            one="One Hundred ";
            two="Two Hundred ";
            three="Three Hundred ";
            four="Four Hundred ";
            five="Five Hundred ";
            six="Six Hundred ";
            seven="Seven Hundred ";
            eight="Eight Hundred ";
            nine="Nine Hundred ";
            if (n100==9)
            {
                cout<<nine;
            }
            if (n100==8)
            {
                cout<<eight;
            }
            if (n100==7)
            {
                cout<<seven;
            }
            if (n100==6)
            {
                cout<<six;
            }
            if (n100==5)
            {
                cout<<five;
            }
            if (n100==4)
            {
                cout<<four;
            }
            if (n100==3)
            {
                cout<<three;
            }
            if (n100==2)
            {
                cout<<two;
            }
            if (n100==1)
            {
                cout<<one;
            }
        }
        if (n10<=9 && n10>=2)           //Tens excluding teens
        {
            two="Twenty ";
            three="Thirty ";
            four="Forty ";
            five="Fifty ";
            six="Sixty ";
            seven="Seventy ";
            eight="Eighty ";
            nine="Ninety ";
            if (n10==9)
            {
                cout<<nine;
            }
            if (n10==8)
            {
                cout<<eight;
            }
            if (n10==7)
            {
                cout<<seven;
            }
            if (n10==6)
            {
                cout<<six;
            }
            if (n10==5)
            {
                cout<<five;
            }
            if (n10==4)
            {
                cout<<four;
            }
            if (n10==3)
            {
                cout<<three;
            }
            if (n10==2)
            {
                cout<<two;
            }
        }
        if (n10!=1 && n1<=9 && n1>=1)   //Ones if not teens
        {
                one="One ";
                two="Two ";
                three="Three ";
                four="Four ";
                five="Five ";
                six="Six ";
                seven="Seven ";
                eight="Eight ";
                nine="Nine ";
                if (n1==9)
                {
                    cout<<nine;
                }
                if (n1==8)
                {
                    cout<<eight;
                }
                if (n1==7)
                {
                    cout<<seven;
                }
                if (n1==6)
                {
                    cout<<six;
                }
                if (n1==5)
                {
                    cout<<five;
                }
                if (n1==4)
                {
                    cout<<four;
                }
                if (n1==3)
                {
                    cout<<three;
                }
                if (n1==2)
                {
                    cout<<two;
                }
                if (n1==1)
                {
                    cout<<one;
                }
            }
        if (n10==1 && n1<=9 && n1>=0)   //Teens
        {
                    zero="Ten ";
                    one="Eleven ";
                    two="Twelve ";
                    three="Thirteen ";
                    four="Fourteen ";
                    five="Fifteen ";
                    six="Sixteen ";
                    seven="Seventeen ";
                    eight="Eighteen ";
                    nine="Nineteen ";
                    if (n1==9)
                    {
                        cout<<nine;
                    }
                    if (n1==8)
                    {
                        cout<<eight;
                    }
                    if (n1==7)
                    {
                        cout<<seven;
                    }
                    if (n1==6)
                    {
                        cout<<six;
                    }
                    if (n1==5)
                    {
                        cout<<five;
                    }
                    if (n1==4)
                    {
                        cout<<four;
                    }
                    if (n1==3)
                    {
                        cout<<three;
                    }
                    if (n1==2)
                    {
                        cout<<two;
                    }
                    if (n1==1)
                    {
                        cout<<one;
                    }
                    if (n1==0)
                    {
                        cout<<zero;
                    }
            }
        cout<<"and no/100's Dollars"<<endl;
    }
    else                                //If input is not valid
    {
        cout<<"Invalid input, only integers [1-3000] allowed";
    }
    //Exit
    return 0;
}