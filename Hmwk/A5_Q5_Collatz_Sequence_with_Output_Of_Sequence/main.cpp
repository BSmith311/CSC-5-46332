/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;                  //Program function output
    cout<<"Input a sequence start"<<endl;                   //Input prompt
    cin>>n;                                                 //User input
    cout<<n;                                                //Initial sequence output
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<     //Final output
            ns<<" steps";                                   //Final output
    
    //Exit stage right!
    return 0;
}

//Void Function
int collatz(int n)
{
    int count;                                              //Count
    for (count=1; n!=1; count++)                            //Loops until number reaches 1
    {
        if (n % 2 == 0)                                     //Calculation if even
        {
            n=n/2;
            cout<<", "<<n;                                  //Sequence output
        }
        else if (n % 2 ==1)                                 //Calculation if odd
        {
            n=(n*3)+1;
            cout<<", "<<n;                                  //Sequence output
        }
    }
    cout<<endl;
    return count;                                           //Returns count
}