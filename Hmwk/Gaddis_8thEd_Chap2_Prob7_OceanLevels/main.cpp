/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 23, 2022
 * Purpose: HMWK 1
 *          Display ocean level after xYears
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
    float risingLevel, yearFive, yearSeven, yearTen;
    //Initialize Variables
    risingLevel=1.5;
    //Map inputs to outputs -> The Process
    yearFive=risingLevel*5;
    yearSeven=risingLevel*7;
    yearTen=risingLevel*10;
    //Display Results
    cout<<"In five years, the ocean will be "<<yearFive;
    cout<<" millimeters higher."<<endl;
    cout<<"In seven years, the ocean will be "<<yearSeven;
    cout<<" millimeters higher."<<endl;
    cout<<"In ten years, the ocean will be "<<yearTen;
    cout<<" millimeters higher."<<endl;
            
    //Exit stage right
        return 0;
}

