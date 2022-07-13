/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 1, 2022
 * Purpose:  Calculate how much diet soda before your friend dies
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float ARTIFICIAL_SWEETENER_AMOUNT=0.001f;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int sWgt,           //Mass of a Soda Can in grams
        cansD;          //Number of diet soda cans that can be consumed
    
    float asKM,         //Artificial Sweetener required to kill a mouse in grams
            mWgt,       //Weight of the mouse in grams
            ltlDose,    //Lethal amount of Artificial Sweetener
            asWPC,      //Aritifical Sweetener in can in grams
            asKF,       //Artificial Sweetener required to kill friend in grams
            dfWgt,      //Desired weight for friend after diet in lbs
            convDFW;    //Conversion for friend's desired weight to grams
        
    //Initialize or input i.e. set variable values
    sWgt=350;
    asKM=5.0;
    mWgt=35.0;
    ltlDose=(asKM/mWgt);
    asWPC=sWgt*ARTIFICIAL_SWEETENER_AMOUNT;
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;  //Initial output prompt
    cout<<"Input the desired dieters weight in lbs."<<endl;                 //Prompt requesting input of desired weight
    cin>>dfWgt;                                                             //Input for desired weight of friend post diet
    convDFW=(dfWgt*453.592);            //Calculation to convert weight from lbs to grams
    asKF=(convDFW*ltlDose);             //Calcultation of Aritificial Sweetener required to kill friend
    cansD=(asKF/asWPC);                 //Calculation for how many cans can be consumed before death
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl<<
    "which can be consumed is "<<cansD<<" cans";
    //Exit stage right or left!
    return 0;
}