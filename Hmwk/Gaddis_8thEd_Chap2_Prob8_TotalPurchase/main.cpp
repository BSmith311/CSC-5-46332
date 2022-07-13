/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 23, 2022
 * Purpose: HMWK 1
 *          Hold five variables and display price, subtotal, sales tax, total
 */

//System Libraries
#include <iostream>
#include <iomanip> //Same deal as before, 3+ decimals bugged me
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float itemOne, itemTwo, itemThree, itemFour, itemFive, salesTax;
    float subTotal, taxAmount, totalCost;
    //Initialize Variables
    itemOne=15.95, itemTwo=24.95, itemThree=6.95, itemFour=12.95, itemFive=3.95,
    salesTax=0.07;
    //Map inputs to outputs -> The Process
    subTotal=itemOne+itemTwo+itemThree+itemFour+itemFive;
    taxAmount=subTotal*salesTax;
    totalCost=subTotal+taxAmount;
    
    //Display Results
    cout<<"The subtotal of the sale is $"<<subTotal<<endl;
    cout<<"The amount of sales tax is $"<<setprecision(3)<<taxAmount<<endl;
    cout<<"The total amount of the sale is $"<<setprecision(4)<<totalCost<<endl;
    //Exit stage right
        return 0;
}

