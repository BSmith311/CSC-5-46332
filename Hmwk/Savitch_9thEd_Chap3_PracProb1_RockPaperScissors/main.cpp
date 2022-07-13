/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 8
 * Purpose:  Determine the results of a game of rock paper scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char pOne, pTwo,            //Players 1 and 2
            P, p, R, r, S, s;   //Various Choices
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Rock Paper Scissors Game"<<endl;             //Program Prompt
    cout<<"Input Player 1 and Player 2 Choices"<<endl;  //Input Prompt
    cin>>pOne>>pTwo;                                    //Inputs for player 1 and player 2
    //Display the outputs
    if (pOne=='P' || pOne=='p')                 //Process if P1 chooses Paper
    {
        if (pTwo=='P' || pTwo=='p')             //Process if P2 chooses Paper
        {
            cout<<"It's a tie!";
        }
        else if (pTwo=='R' || pTwo=='r')        //Process if P2 chooses Rock
        {
            cout<<"Paper covers rock.";
        }
        else if (pTwo=='S' || pTwo=='s')        //Process if P2 chooses Scissors
        {
            cout<<"Scissors cuts paper.";
        }
    }
    else if (pOne=='R' || pOne=='r')            //Process if P1 chooses Rock
    {
        if (pTwo=='P' || pTwo=='p')             //Process if P2 chooses Paper
        {
            cout<<"Paper covers rock.";
        }
        else if (pTwo=='R' || pTwo=='r')        //Process if P2 chooses Rock
        {
            cout<<"It's a tie!";
        }
        else if (pTwo=='S' || pTwo=='s')        //Process if P2 chooses Scissors
        {
            cout<<"Rock breaks scissors.";
        }
    }
    else if (pOne=='S' || pOne=='s')            //Process if P1 chooses Scissors
    {
        if (pTwo=='P' || pTwo=='p')             //Process if P2 chooses Paper
        {
            cout<<"Scissors cuts paper.";
        }
        else if (pTwo=='R' || pTwo=='r')        //Process if P2 chooses Rock
        {
            cout<<"Rock breaks scissors.";      
        }
        else if (pTwo=='S' || pTwo=='s')        //Process if P2 chooses Scissors
        {
            cout<<"It's a tie!";
        }
    }
    //Exit stage right or left!
    return 0;
}