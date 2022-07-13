/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 25, 2022
 * Purpose: Lab 1 Optimize Fuel Purchase
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const unsigned char PERCENTAGE=100;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    //Vehicle Variables
    float gasFull,      //Gas gauge percentage full
            tankSize,   //Size of the tank in gallons
            mpg,        //Gas Mileage mpg
            galReq;     //Gallons required to fill up tank
    
    //Gas Station 1 Variables
    float milesAwayOne,     //Gas station 1 distance from home
            roundTripOne,   //Round trip 1 distance
            gallonPriceOne, //Regular price for one gallon at Station 1
            fillCostOne,    //Cost to fill tank at Station 1
            tripCostOne,    //Cost of round trip 1
            totalCostOne,   //Total cost for Station 1
            pricePerGalOne; //Price per gallon for Station 1
    
    //Gas Station 2 Variables
    float milesAwayTwo,     //Gas station 2 distance from home
            roundTripTwo,   //Round trip 2 distance
            gallonPriceTwo, //Regular price for one gallon at Station 2
            fillCostTwo,    //Cost to fill tank at Station 2
            tripCostTwo,    //Cost of round trip 2
            totalCostTwo,   //Total cost for Station 2
            pricePerGalTwo; //Price per gallon for Station 2
    
    //Initialize Variables
    //Vehicle Variables
    gasFull=0.50;
    tankSize=22;
    mpg=16;
    
    //Gas Station 1 Variables
    milesAwayOne=1;
    gallonPriceOne=6.30;
    
    //Gas Station 2 Variables
    milesAwayTwo=8;
    gallonPriceTwo=5.90;
    
    //Map inputs to outputs -> The Process
    //Vehicle Calculations
    galReq=tankSize*gasFull;
    
    //Gas Station 1 Calculations
    roundTripOne=milesAwayOne*2;
    fillCostOne=galReq*gallonPriceOne;
    pricePerGalOne=gallonPriceOne/mpg;
    tripCostOne=pricePerGalOne*roundTripOne;
    totalCostOne=fillCostOne+tripCostOne;
    
    //Gas Station 2 Calculations
    roundTripTwo=milesAwayTwo*2;
    fillCostTwo=galReq*gallonPriceTwo;
    pricePerGalTwo=gallonPriceTwo/mpg;
    tripCostTwo=pricePerGalTwo*roundTripTwo;
    totalCostTwo=fillCostTwo+tripCostTwo;
    
    //Display Results
    cout<<fixed<<showpoint<<setprecision(2)<<
            "A particular vehicle has a "<<tankSize<<" gallon tank "<<
            "and gets "<<mpg<<" miles per gallon."<<endl;
    cout<<"Gas Station One is "<<milesAwayOne<<" mile away and charges $"<<
            gallonPriceOne<<" per gallon."
            <<endl<<"To fill the vehicle with "<<galReq<<" gallons of gas "<<
            "at station One would cost $"<<totalCostOne<<" total."<<endl;
    cout<<"Gas Station Two is "<<milesAwayTwo<<" mile away and charges $"<<
            gallonPriceTwo<<" per gallon."
            <<endl<<"To fill the vehicle with "<<galReq<<" gallons of gas "<<
            "at station Two would cost $"<<totalCostTwo<<" total."<<endl;
    //Exit stage right
        return 0;
}

