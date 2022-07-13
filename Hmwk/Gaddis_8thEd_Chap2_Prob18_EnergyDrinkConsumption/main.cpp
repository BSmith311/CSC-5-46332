/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 24, 2022
 * Purpose: HMWK 1
 *          Calculate/Display customers who purchase 1+ drinks per week
 *          Calculate/Display preference for citrus flavored drinks
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
    unsigned short customersSurveyed, totalPerWeek,totalCitrus;
    float oncePerWeek, perferCitrus;
    
    //Initialize Variables
    customersSurveyed=16500;
    oncePerWeek=0.15;
    perferCitrus=0.58;
    
    //Map inputs to outputs -> The Process
    totalPerWeek=customersSurveyed*oncePerWeek;
    totalCitrus=customersSurveyed*perferCitrus;
    //Display Results
    cout<<customersSurveyed<<" customers were surveyed and"
        <<" according to the survey:"<<endl
        <<totalPerWeek<<" customers purchased at least one energy drink"
        <<" per week."<<endl
        <<totalCitrus<<" customers preferred the citrus-flavored energy drink"
        <<endl;
    //Exit stage right
        return 0;
}

