/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on June 24, 2022
 * Purpose: HMWK 1
 *          Calculate/Display distance traveled on tank of gas
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
    float gasTank, townMPG, highwayMPG, distTown, distHighway;
    //Initialize Variables
    gasTank=20;
    townMPG=23.5;
    highwayMPG=28.9;
    //Map inputs to outputs -> The Process
    distTown=gasTank*townMPG;
    distHighway=gasTank*highwayMPG;
    //Display Results
    cout<<"When driving in town, the car can travel "<<distTown
            <<" miles with one tank of gas."<<endl;
    cout<<"When driving on the freeway, the car can travel "<<distHighway
            <<" miles with one tank of gas."<<endl;
    //Exit stage right
        return 0;
}

