/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 23, 2022
 * Purpose: HMWK 1
 *          Compute tax and tip on a restaurant bill with fixed variables
 */

//System Libraries
#include <iostream>
#include <iomanip>  //Techincally from Ch.3 but 3+ decimals was bugging me
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float mealCharge, salesTax, tip,
          taxAmount, tipAmount, totalBill;
    //Initialize Variables
    mealCharge=88.67;
    salesTax=0.0675;
    tip=0.2;
    //Map inputs to outputs -> The Process
    taxAmount=mealCharge*salesTax;
    tipAmount=mealCharge*tip;
    totalBill=mealCharge+taxAmount+tipAmount;
    //Display Results
    cout<<"The cost of the meal is $"<<setprecision(4)<<mealCharge<<endl;
    cout<<"The cost of the tax is $"<<setprecision(3)<<taxAmount<<endl;
    cout<<"The cost of the tip is $"<<setprecision(4)<<tipAmount<<endl;
    cout<<"The total cost of the bill is $"<<setprecision(5)<<totalBill<<endl;
    //Exit stage right
        return 0;
}

