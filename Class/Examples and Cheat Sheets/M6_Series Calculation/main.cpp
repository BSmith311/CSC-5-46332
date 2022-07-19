/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 15
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x, fx,            //X value, f(x) value
          denomV;           //Denominator value
    int nterms, term,       //Number of terms, term value
        denom,              //Denominator
        number;
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    number=1;
    fx=0;
    //Calculate Sequence sum here
    for (term=0; term<nterms; term++)
    {
        if (term % 2 == 0)                   //Beginning equation is +
        {
            for (denom=1, denomV=1; denom<=number; denom++)
            {
                denomV*=denom;
            }
            fx+=(pow(x, number)/denomV);
            number+=2;
        }
        else if (term % 2 == 1)              //Following equation is -
        {
            for (denom=1, denomV=1; denom<=number; denom++)
            {
                denomV*=denom;
            }
            fx-=(pow(x, number)/denomV);
            number+=2;
        }
    }
    //Output the result here
    cout<<fixed<<setprecision(6)<<fx<<endl;
    //Exit
    return 0;
}