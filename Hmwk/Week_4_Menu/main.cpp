/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 8th
 * Purpose:  Basic Menu for Week 3
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <iomanip>
#include <string>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 1 - Sum - Gaddis 9thEd Chap5 Prob1"<<endl;
        cout<<"Problem 2 - Pay in Pennies  - Gaddis 9thEd Chap5 Prob7"<<endl;
        cout<<"Problem 3 - MinMax - Gaddis 9thEd Chap5 Prob13"<<endl;
        cout<<"Problem 4 - Rectangle - Gaddis 9thEd Chap5 Prob22"<<endl;
        cout<<"Problem 5 - Pattern - Gaddis 9thEd Chap5 Prob23"<<endl;
        cout<<"Problem 6 - MPG - Savitch 9thEd Chap4 Prob1"<<endl;
        cout<<"Problem 7 - Fuel Efficiency - Savitch 9thEd Chap4 Prob2"<<endl;
        cout<<"Problem 8 - Inflation  - Savitch 9thEd Chap4 Prob4"<<endl;
        cout<<"Problem 9 - Estimated Cost - Savitch 9thEd Chap4 Prob5"<<endl;
        cout<<"Problem 10 - 2 or 3 Max - Savitch 9thEd Chap4 Prob9"<<endl;
        cout<<"11 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 1:{
                //Declare Variables
                int uNum, num, total;                                       //User number, number for addition, total
                //Initialize or input i.e. set variable values
                cin>>uNum;                                                  //User input
                num=1;                                                      //Setting variable to starting number
                total=0;                                                    //Setting total to zero
                //Map inputs -> outputs
                while (uNum<1)                                              //Invalid input process
                {
                    cout<<"Invalid input, use positive integers only.";
                    cin>>uNum;
                }
                while (num<=uNum)                                           //Addition
                {
                    total=total+num++;
                }
                cout<<"Sum = "<<total;                                      //Final result output
                cout<<endl;
                    break;}
            case 2:{
                //Declare Variables
                int num, days;                  //Number of days calculated and number of days required
                double pay, total;              //Pay rate and total pay (Only works for TestCase3 if it's a double)
                //Initialize or input i.e. set variable values
                cin>>days;                      //User input for days
                num=1;                          //Initialize num
                total=0;                        //Initialize total
                pay=0.01;                       //Initialize pay
                //Map inputs -> outputs
                while (days<1)                  //Input validation
                {
                    cout<<"Number of days worked must be at least 1";
                }
                while (num<=days)               //Loop calculation
                {
                    total=total+pay;            //Total pay calculation
                    pay=pay*2;                  //Double pay rate
                    num++;                      //+1 to day counter
                }
                //Display the outputs
                cout<<"Pay = $"<<fixed<<setprecision(2)<<total;     //Final output of results
                cout<<endl;
                    break;}
            case 3:{
                //Declare Variables
                float num, low, high;   //User number, smallest number, largest number
                //Initialize or input i.e. set variable values
                high=-10000000;         //Initialize large number
                low=10000000;           //Initialize small number
                //Map inputs -> outputs
                while (num != -99)      //Loop, first input cannot be exit prompt
                {
                    cin>>num;           //User input number
                    if (num==-99)       //Breaks loop if number is exit prompt
                    {
                        break;
                    }
                    if (num<low)        //If number is smaller than previous number
                    {
                        low=num;        //Sets lowest value to the number of the input
                    }
                    else if (num>high)  //If number is larger than previous number
                    {
                        high=num;       //Sets largest value to the number of the input
                    }
                }
                //Display the outputs
                cout<<"Smallest number in the series is "<<low<<endl;
                cout<<"Largest  number in the series is "<<high;
                cout<<endl;
                    break;}
            case 4:{
                //Declare Variables
                char letter;                //Character used for rectangle
                int uNum, numR, numC;       //User number, row number, column number
                //Initialize or input i.e. set variable values
                cin>>uNum>>letter;          //User inputs
                //Map inputs -> outputs
                while (uNum<1 or uNum>15)   //Input validation
                {
                    cout<<"Invalid input, enter a number between 1 and 15";
                    cin>>uNum>>letter;
                }
                for (numC=1; numC<uNum; numC++)         //Loop for column
                {
                    for (numR=1; numR<=uNum; numR++)    //Loop for row
                    {
                        cout<<letter;                   //Prints the letter
                    }
                    cout<<endl;                         //Ends the row
                }
                for ( ; numC==uNum; numC++)             //Loop for the last row because codeE doesn't want the last one to have endl
                {
                    for (numR=1; numR<=uNum; numR++)    //Loop for row
                    {
                        cout<<letter;                   //Prints the letter
                    }

                }
                cout<<endl;
                    break;}
            case 5:{
                //Declare Variables
                int uNum, numC, numR;
                //Initialize or input i.e. set variable values
                cin>>uNum;
                //Map inputs -> outputs
                for (numC=1; numC<=uNum; numC++)        //Loop for going up to user number
                {
                    for (numR=1; numR<=numC; numR++)    //Loop for + needed per row
                    {
                        cout<<"+";                      //Loop output
                    }
                    cout<<endl<<endl;                   //Spacing
                }
                for (numC=uNum; numC>1; numC--)         //Loop for going down from user number
                {
                    for (numR=1; numR<=numC; numR++)    //Loop for + needed per row
                    {
                        cout<<"+";                      //Loop output
                    }
                    cout<<endl<<endl;                   //Spacing
                }
                for ( ; numC==1; numC--)                //Loop for the last line since codeE does not want endl at the end of it
                {
                    for (numR=1; numR<=numC; numR++)
                    {
                        cout<<"+";
                    }
                }
                cout<<endl;
                    break;}
            case 6:{
                //Global Constants, no Global Variables are allowed
                //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
                const float LITERS_TO_GALLONS=0.264179;     //Conversion for liters to gallons
                //Declare Variables
                float litGas,           //Liters of gas
                        galGas,         //Gallons of gas
                        milTrv,         //Miles traveled
                        mpg;            //Miles per gallon
                char again;             //User choice
                //Initialize or input i.e. set variable values
                do
                {
                    cout<<"Enter number of liters of gasoline:"<<endl<<endl;    //Prompt for Liters of gas
                    cin>>litGas;                                                //Input for Liters of gas
                    galGas=(litGas*LITERS_TO_GALLONS);                          //Conversion from liters to gallons
                    cout<<"Enter number of miles traveled:"<<endl<<endl;        //Prompt for miles traveled
                    cin>>milTrv;                                                //Input for miles traveled
                    mpg=(milTrv/galGas);                                        //Calculation for miles per gallon
                    cout<<"miles per gallon:"<<endl;                            //Output script
                    cout<<fixed<<setprecision(2)<<mpg<<endl;                    //Output mpg
                    cout<<"Again:"<<endl;                                       //Prompt for repeat usage
                    cin>>again;                                                 //Input for repeat usage
                    if (again == 'Y' or again =='y')                            //Formatting for codeE
                    {
                        cout<<endl;                                             //CodeE formatting
                    }
                } while (again == 'Y' or again =='y');                          //Repeats if choice is yes
                cout<<endl;
                    break;}
            case 7:{
                //Global Constants, no Global Variables are allowed
                //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
                const float LITERS_TO_GALLONS=0.264179;     //Conversion for liters to gallons
                //Declare Variables
                float litGas1,           //Liters of gas for car 1
                        galGas1,         //Gallons of gas for car 1
                        milTrv1,         //Miles traveled for car 1
                        mpg1,            //Miles per gallon for car 1
                        litGas2,         //Liters of gas for car 2
                        galGas2,         //Gallons of gas for car 2
                        milTrv2,         //Miles traveled for car 2
                        mpg2;            //Miles per gallon for car 2
                char again;              //User choice
                //Initialize or input i.e. set variable values

                //Map inputs -> outputs

                //Display the outputs
                do
                {
                    cout<<"Car 1"<<endl;                                                    //Output prompt, following lines all for Car 1
                    cout<<"Enter number of liters of gasoline:"<<endl;                      //Prompt for Liters of gas
                    cin>>litGas1;                                                           //Input for Liters of gas
                    galGas1=(litGas1*LITERS_TO_GALLONS);                                    //Conversion from liters to gallons
                    cout<<"Enter number of miles traveled:"<<endl;                          //Prompt for miles traveled
                    cin>>milTrv1;                                                           //Input for miles traveled
                    mpg1=(milTrv1/galGas1);                                                 //Calculation for miles per gallon
                    cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg1<<endl<<endl;   //Output script

                    cout<<"Car 2"<<endl;                                                    //Output prompt, following lines all for Car 2 but same as Car 1
                    cout<<"Enter number of liters of gasoline:"<<endl;
                    cin>>litGas2;
                    galGas2=(litGas2*LITERS_TO_GALLONS);
                    cout<<"Enter number of miles traveled:"<<endl;
                    cin>>milTrv2;
                    mpg2=(milTrv2/galGas2);
                    cout<<"miles per gallon: "<<fixed<<setprecision(2)<<mpg2<<endl<<endl;

                    if (mpg1>mpg2)                                                          //If car 1 is more efficient
                    {
                        cout<<"Car 1 is more fuel efficient"<<endl<<endl;                   //Output
                    }
                    else if (mpg2>mpg1)                                                     //If car 2 is more efficient
                    {
                        cout<<"Car 2 is more fuel efficient"<<endl<<endl;                   //Output
                    }

                    cout<<"Again:"<<endl;                                       //Prompt for repeat usage
                    cin>>again; 
                    if (again == 'Y' or again =='y')                            //Formatting for codeE
                    {
                        cout<<endl;                                             //CodeE formatting
                    }
                } while (again == 'Y' or again =='y');                          //Repeats if choice is yes
                cout<<endl;
                    break;}
            case 8:{
                //Declare Variables
                float pr1, pr2, inflD, inflP;   //Price 1, price 2, inflation decimal, inflation percentage
                char again;                     //Choice to repeat program
                //Initialize or input i.e. set variable values
                do
                {
                    cout<<"Enter current price:"<<endl;         //Price 1 prompt
                    cin>>pr1;                                   //Price 1 input
                    cout<<"Enter year-ago price:"<<endl;        //Price 2 prompt
                    cin>>pr2;                                   //Price 2 input
                    inflD=(pr1/pr2)-1;                          //Inflation calculation
                    inflP=inflD*100;                            //Inflation converted to percentage
                    cout<<"Inflation rate: "<<fixed<<setprecision(2)<<inflP<<"%"<<endl<<endl;       //Results output

                    cout<<"Again:"<<endl;                       //Again prompt
                    cin>>again;                                 //Again input
                    if (again=='y' or again=='Y')               //CodeE formatting
                    {
                        cout<<endl;
                    }
                } while (again=='y' or again=='Y');             //Repeats if yes
                    break;}
            case 9:{
                //Set the random number seed
                float pr1, pr2, inflD, inflP,   //Price 1, price 2, inflation decimal, inflation percentage
                        yr1, yr2;               //Price in 1 year, price in 2 years
                char again;                     //Choice to repeat program
                //Declare Variables

                //Initialize or input i.e. set variable values

                //Map inputs -> outputs
                do
                {
                    cout<<"Enter current price:"<<endl;                                             //Price 1 prompt
                    cin>>pr1;                                                                       //Price 1 input
                    cout<<"Enter year-ago price:"<<endl;                                            //Price 2 prompt
                    cin>>pr2;                                                                       //Price 2 input
                    inflD=(pr1/pr2)-1;                                                              //Inflation calculation
                    inflP=inflD*100;                                                                //Inflation converted to percentage
                    cout<<"Inflation rate: "<<fixed<<setprecision(2)<<inflP<<"%"<<endl<<endl;       //Results output
                    yr1=(pr1+(pr1*inflD));                                                          //Price after 1 year calculation
                    cout<<"Price in one year: $"<<fixed<<setprecision(2)<<yr1<<endl;                //Price after 1 year output
                    yr2=(yr1+(yr1*inflD));                                                          //Price after 2 years calculation
                    cout<<"Price in two year: $"<<fixed<<setprecision(2)<<yr2<<endl<<endl;          //Price after 2 years output

                    cout<<"Again:"<<endl;                       //Again prompt
                    cin>>again;                                 //Again input
                    if (again=='y' or again=='Y')               //CodeE formatting
                    {
                        cout<<endl;
                    }
                } while (again=='y' or again=='Y');             //Repeats if yes
                cout<<endl;
                    break;}
            case 10:{
                //Declare Variables
                float par1, par2, par3,     //Parameters 1, 2, 3
                        big;                //Largest number
                //Initialize or input i.e. set variable values
                big=-1000000;                                               //Initialize largest number
                cout<<"Enter first number:"<<endl<<endl;                    //Prompt for 1st input
                cin>>par1;                                                  //Input for 1st input
                cout<<"Enter Second number:"<<endl<<endl;                   //Prompt for 2nd input
                cin>>par2;                                                  //Input for 2nd input
                cout<<"Enter third number:"<<endl<<endl;                    //Prompt for 3rd input
                cin>>par3;                                                  //Input for 3rd input

                //Map inputs -> outputs
                if (par1>big)               //If parameter 1 is largest
                {
                    big=par1;               //Set big equal to parameter 1
                }
                if (par2>big)               //If parameter 2 is largest
                {
                    big=par2;               //Set big equal to parameter 2
                }
                cout<<"Largest number from two parameter function:"<<endl;  //Output for first two parameters
                cout<<fixed<<setprecision(1)<<big<<endl<<endl;              //Result of first two parameters

                if (par3>big)               //If parameter 3 is largest
                {
                    big=par3;               //Set big equal to parameter 3
                }
                cout<<"Largest number from three parameter function:"<<endl;//Output for first three parameters
                cout<<fixed<<setprecision(1)<<big<<endl;                    //Result of first three parameters
                    break;}
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=1 && choose<=10);

    return 0;
}