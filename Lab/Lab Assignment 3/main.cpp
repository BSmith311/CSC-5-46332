/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 7
 * Purpose: Calculate the percentage Gas Tax on a gallon of gas, and the profit 
 *              made from a gallon of gas given
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float EXCISE_TAX=0.39;          //Excise Tax per Gallon
const float SALES_TAX=0.08;           //Sales Tax %
const float CAP_AND_TRADE_FEE=0.10;   //Cap and Trade "Fee" - tax on a tax/gallon
const float FEDERAL_EXCISE_TAX=0.184;  //Federal Excise Tax per Gallon
const float OIL_COMPANY_PROFIT=0.065; //Oil Company profit %
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float costGal,      //Cost per gallon
            feeCst,     //How government fees cost per gallon
            origCst,    //Cost of a gallon minus taxes
            govProfP,   //Government Profit Percentage
            comProfP,   //Oil Company Profit Percentage
            govProfD,   //Government Profit Dollar Amount
            comProfD;   //Oil Company Profit Dollar Amount
    //Initialize Variables
    cout<<"This program calculates the profit of "      
            <<"Gas companies vs the Government."<<endl;         //Program Prompt
    cout<<"Please enter the cost of One Gallon of Gas:"<<endl;  //Prompt for input
    cin>>costGal;                                               //Input
    //Map inputs to outputs -> The Process
    if (costGal>0)
        {
            comProfP=OIL_COMPANY_PROFIT*100;                        //Company Profit %
            feeCst=EXCISE_TAX+CAP_AND_TRADE_FEE+FEDERAL_EXCISE_TAX; //Calculation of government fees per gallon
            origCst=(costGal-feeCst)/(1+SALES_TAX);                 //Calculation for cost of gallon of gas without taxes
            govProfD=costGal-origCst;                               //Calculation for Government Profit in Dollars
            govProfP=(costGal/govProfD);                            //Calculation of Government Profit Percentage
            comProfD=(origCst*OIL_COMPANY_PROFIT);                  //Calculation of Company Profit in Dollars
            //Display Results
            cout<<"If it costs $"<<fixed<<setprecision(2)<<costGal
                    <<" for a gallon of gas:"<<endl;
            cout<<"The oil company makes a profit of "<<fixed<<setprecision(2)
                    <<comProfP<<"% per gallon."<<endl;
            cout<<"This is equivalent to $"<<fixed<<setprecision(2)<<comProfD
                    <<" per gallon."<<endl;
            cout<<"The government makes a profit of "<<fixed<<setprecision(2)
                    <<govProfP<<"% per gallon."<<endl;
            cout<<"This is equivalent to $"<<fixed<<setprecision(2)<<govProfD
                    <<" per gallon.";
        }
    else if (costGal<=0)        //In case input is negative or includes characters
    {
        cout<<"Invalid input. "<<
                "Please rerun the program using positive numeric characters only.";
    }
    //Exit stage right
        return 0;
}

