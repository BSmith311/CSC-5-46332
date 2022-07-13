/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 24, 2022
 * Purpose: HMWK 1
 *          Calculate number of acres in xAmount of land
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
    float acreSqFt, tractOfLand, acresInLand;
    //Initialize Variables
    acreSqFt=43560.00;
    tractOfLand=391876.00;
    //Map inputs to outputs -> The Process
    acresInLand=tractOfLand/acreSqFt;
    //Display Results
    cout<<"There are "<<acresInLand<<" acres in "<<tractOfLand
            <<" square feet of land."<<endl;
    //Exit stage right
        return 0;
}

