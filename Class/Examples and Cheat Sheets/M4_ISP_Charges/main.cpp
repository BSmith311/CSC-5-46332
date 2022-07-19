/* 
 * File:   main.cpp
 * Author: Brandon
 * Created on July 14
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float A_MONTHLY_CHARGE=16.99,     //Package A monthly charge under 10 hours
                A_ADDITIONAL_1=0.95,    //Pacakge A additional charge between 10-20 hours
                A_ADDITIONAL_2=0.85,    //Package A additional charge over 20 hours
                B_MONTHLY_CHARGE=26.99, //Package B monthly charge under 20 hours
                B_ADDITIONAL_1=0.74,    //Pacakge B additional charge between 20-30 hours
                B_ADDITIONAL_2=0.64,    //Package B additional charge over 30 hours
                C_MONTHLY_CHARGE=36.99; //Package C monthly charge, unlimited hours
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours; 
    float lowC, cost, aCost, bCost, cCost;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    lowC=50000;
    //Basic Charges
    //Pacakge A Charges
    if (hours<=10)                                                                  //Package A under 10 hours
    {
        aCost=A_MONTHLY_CHARGE;                                                     //Package A Calculation
    }
    else if (hours>10 && hours<=20)                                                 //Package A between 10-20 hours
    {
        aCost=(A_MONTHLY_CHARGE)+((hours-10)*A_ADDITIONAL_1);                       //Package A Calculation
    }
    else if (hours>20)                                                              //Package A over 20 hours
    {
        aCost=(A_MONTHLY_CHARGE)+(10*A_ADDITIONAL_1)+((hours-20)*A_ADDITIONAL_2);   //Package A Calculation
    }
    if (aCost<lowC)                                                                 //If package A is cheapest
    {
        lowC=aCost;                                                                 //Sets lowest cost to package
    }
    //Package B Charges
    if (hours<=20)                                                                  //Package B under 20 hours
    {
        bCost=B_MONTHLY_CHARGE;                                                     //Package B Calculation
    }
    if (hours>20 && hours<=30)                                                      //Package B between 20-30 hours
    {
        bCost=(B_MONTHLY_CHARGE)+((hours-20)*B_ADDITIONAL_1);                       //Package B Calculation
    }
    if (hours>30)                                                                   //Package B over 30 hours
    {
        bCost=(B_MONTHLY_CHARGE)+(10*B_ADDITIONAL_1)+((hours-30)*B_ADDITIONAL_2);   //Package B Calculation
    }
    if (bCost<lowC)                                                                 //If package B is cheapest
    {
        lowC=bCost;                                                                 //Sets lowest cost to package
    }
    //Package C Charges
    cCost=C_MONTHLY_CHARGE;                                                         //Package C, unlimited hours
    if (cCost<lowC)                                                                 //If package C is cheapest
    {
        lowC=cCost;                                                                 //Sets lowest cost to package
    }
    //Output the Charge
    switch (package)
    {
        //Package A Output
        case 'a':
        case 'A':
            cost=aCost;
            cout<<"$"<<fixed<<setprecision(2)<<aCost;
            break;
        //Package B Output
        case 'b':
        case 'B':
            cost=bCost;
            cout<<"$"<<fixed<<setprecision(2)<<bCost;
            break;
        //Package C Output
        case 'c':
        case 'C':
            cost=cCost;
            cout<<"$"<<fixed<<setprecision(2)<<cCost;
            break;
    }

    //Output the cheapest package and the savings
    if (lowC==aCost)                                                //Calculates and displays if package A is cheapest
    {
        cout<<" A $"<<fixed<<setprecision(2)<<(cost-lowC)<<endl;
    }
    if (lowC==bCost)                                                //Calculates and displays if package B is cheapest
    {
        cout<<" B $"<<fixed<<setprecision(2)<<(cost-lowC)<<endl;
    }
    if (lowC==cCost)                                                //Calculates and displays if package C is cheapest
    {
        cout<<" C $"<<fixed<<setprecision(2)<<(cost-lowC)<<endl;
    }
    //Exit
    return 0;
}