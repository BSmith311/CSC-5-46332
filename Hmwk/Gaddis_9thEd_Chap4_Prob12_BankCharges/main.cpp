/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 6
 * Purpose:  Calculate bank charges
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float BASE_CHARGE=10.00,          //Base charge of the bank per month
            UNDER_BALANCE_FEE=15.00,    //Base charge if balance is under $400
            RANGE_ONE_FEE=0.10,         //Charge per check if fewer than 20 checks
            RANGE_TWO_FEE=0.08,         //Charge per check if between 20-39 checks
            RANGE_THREE_FEE=0.06,       //Charge per check if between 40-59 checks
            RANGE_FOUR_FEE=0.04;        //Charge per check if over 60 checks
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float begBal,       //Beginning Balance
            cksWrt,     //Checks Written
            ckFee,      //Check Fee
            mtFee,      //Monthly Fee
            lowFee,     //Low Balance Fee
            newBal;     //New Balance
    //Initialize or input i.e. set variable values
    mtFee=BASE_CHARGE;
    cout<<"Monthly Bank Fees"<<endl;                                //Program function output
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;  //Input Prompt
    cin>>begBal>>cksWrt;                                            //Inputs for beginning balance and checks written
    //Map inputs -> outputs
    if (begBal<400)                     //If balance is under $400, a $15 charge is placed
        {
            lowFee=UNDER_BALANCE_FEE;
        }
    else if (begBal>400)
        {
            lowFee=0;
        }
    
    if (cksWrt<20)                      //Process for under 20 written checks
        {
            ckFee=cksWrt*RANGE_ONE_FEE;
            newBal=begBal-(ckFee+mtFee+lowFee);
            cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
            cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
            cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
            cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
            cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
            if (newBal<0)
                {
                    cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                }
        }
    if (cksWrt>19 && cksWrt<39)         //Process for between 20-39 checks
        {
            ckFee=cksWrt*RANGE_TWO_FEE;
            newBal=begBal-(ckFee+mtFee+lowFee);
            cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
            cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
            cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
            cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
            cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
            if (newBal<0)
                {
                    cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                }
        }
    if (cksWrt>39 && cksWrt<59)         //Process for between 40-59 checks
        {
            ckFee=cksWrt*RANGE_THREE_FEE;
            newBal=begBal-(ckFee+mtFee+lowFee);
            cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
            cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
            cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
            cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
            cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
            if (newBal<0)
                {
                    cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                }
        }
    if (cksWrt>59)                      //Process for over 60 checks
        {
            ckFee=cksWrt*RANGE_FOUR_FEE;
            newBal=begBal-(ckFee+mtFee+lowFee);
            cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
            cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
            cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
            cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
            cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
            if (newBal<0)
                {
                    cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                }
        }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}