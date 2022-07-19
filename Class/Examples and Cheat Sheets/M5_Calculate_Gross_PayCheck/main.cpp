/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 15
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float OVERTIME_PAY=1.5,           //Overtime pay between 20-40 hours
            OVERTIME_DOUBLE_PAY=2.0;    //Overtime pay over 40 hours
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, tltPay,              //Pay rate and total pay
            otPR, dotPR;                //Overtime pay, double overtime pay
    unsigned short hrsWrkd;             //Hours Worked
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    otPR=payRate*OVERTIME_PAY;                                  //Overtime calculation
    dotPR=payRate*OVERTIME_DOUBLE_PAY;                          //Double overtime calculation
    //Calculate Paycheck
    if (hrsWrkd<=20)                                            //If under 20 hours worked
    {
        tltPay=(payRate*hrsWrkd);                               //Total pay calculation
    }
    else if (hrsWrkd>20 && hrsWrkd<=40)                         //If between 20-40 hours worked
    {
        tltPay=(payRate*20)+((hrsWrkd-20)*otPR);                //Total pay calculation
    }
    else if (hrsWrkd>40)                                        //If over 40 hours worked
    {
        tltPay=(payRate*20)+(otPR*20)+((hrsWrkd-40)*dotPR);     //Total pay calculation
    }
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<tltPay<<endl;            //Final output of results
    
    //Exit
    return 0;
}