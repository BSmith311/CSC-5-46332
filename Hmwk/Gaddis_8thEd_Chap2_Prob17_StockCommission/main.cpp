/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 24, 2022
 * Purpose: HMWK 1
 *          Calculate/Display amount paid, amount of commission, total paid
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float stockAmount,
          pricePerStock,
          commissionPrice,
          totalstockCost,
          commissionCost,
          totalPaid;
    //Initialize Variables
    stockAmount=750;
    pricePerStock=35.00;
    commissionPrice=0.02;
    //Map inputs to outputs -> The Process
    totalstockCost=stockAmount*pricePerStock;
    commissionCost=totalstockCost*commissionPrice;
    totalPaid=totalstockCost+commissionCost;
    //Display Results
    cout<<"Kathryn paid $"<<totalstockCost<<" for the stock alone."<<endl
        <<"She paid $"<<commissionCost<<" for the commission alone."<<endl
        <<"In total, Kathryn paid $"<<totalPaid<<"."<<endl;
    //Exit stage right
        return 0;
}

