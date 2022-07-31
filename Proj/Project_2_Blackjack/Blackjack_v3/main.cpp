/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 22
 * Purpose: Blackjack v3, complete overhaul of Project 1 code
 *          Removed most functions for the overhaul
 */

//System Libraries
#include <iostream>     //Input/Output library
#include <iomanip>      //Format Library
#include <cmath>        //Math Library
#include <cstdlib>      //Srand
#include <fstream>      //File operator
#include <string>       //String Library
#include <ctime>        //Time to set random number seed
using namespace std;

//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes
void shuffle(int[],int[],const int,const int,const int);                    //Function to shuffle the cards
void draw(int[],int[],string[],string[],const int, const int, const int); //Function to assign cards
void points(int[],int[],int[],int[],const int, const int);                  //Function to calculate card point values
void hit();
void stand();
void dealer();

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int DECK_OF_CARDS=52;              //Cards in a deck
    const int USER_CARDS=21;                 //How many cards can be drawn by user
    const int DEALER_CARDS=17;               //How many cards can be drawn by dealer
    int uCardV[USER_CARDS],                  //User card value array
        dCardV[DEALER_CARDS],                //Dealer card value array
        uC[USER_CARDS],                      //User card points array
        dC[DEALER_CARDS];                    //Dealer card points array
    string uCard[USER_CARDS],                //User card name array
           dCard[DEALER_CARDS];              //Dealer card name array
    int userT, dealT;                        //User total, dealer total
    float gWon, gPlay,                       //Games won, game played
          winP;                              //Win Percentage
    char hOs;                                //hit or stand
    char again;                              //Play again
    bool uBust, dBust, win;                  //User bust, dealer bust, game result
    
    //Initialize Variables
    userT=0;                    //Default user total
    dealT=0;                    //Default dealer total
    gWon=0;                     //Default games won
    gPlay=0;                    //Default games played
    uBust=false;                //Default user bust
    dBust=false;                //Default dealer bust
    win=false;                  //Default game result
    
    //Game play
    do{
        shuffle(uCardV,dCardV,USER_CARDS,DEALER_CARDS,DECK_OF_CARDS);           //Calls shuffle function
        draw(uCardV,dCardV,uCard,dCard,USER_CARDS,DEALER_CARDS,DECK_OF_CARDS);  //Calls draw function
        points(uCardV,dCardV,uC,dC,USER_CARDS,DEALER_CARDS);                    //Calls point function
        //Temporary game output
        cout<<"-----------------------------------------------"<<endl;
        userT=uC[1]+uC[2];
        dealT=dC[1]+dC[2];
        cout<<"Dealer's Hand: "<<dealT<<endl;
        cout<<left<<setw(12)<<dCard[1]<<left<<setw(12)<<dCard[2]<<endl;
        cout<<"Your Hand: "<<userT<<endl;
        cout<<left<<setw(12)<<uCard[1]<<left<<setw(12)<<uCard[2]<<endl;
        cout<<"-----------------------------------------------"<<endl;
        //Game win, loss, draw result
        if (userT>dealT)
        {
            cout<<"You won! Congratulations!"<<endl;
            gPlay++;
            gWon++;
        }
        else if (userT<dealT)
        {
            cout<<"You lost, better luck next time!"<<endl;
            gPlay++;
        }
        else
        {
            cout<<"It's a draw!"<<endl;
            gPlay++;
        }
        cout<<"Enter 'Y' or 'y' to play again, "        //Play again prompt
            <<"all other inputs quit game."<<endl;
        cin>>again;                                     //Play again input
    }while (again=='Y' or again=='y');                  //Loops if yes
    
    //Final results output
    cout<<"You won "<<static_cast<int>(gWon)                //Outputs games won
        <<" games out of "<<static_cast<int>(gPlay)<<endl;  //Outputs games played
    winP=(gWon/gPlay)*100.00;                               //Calculates win%
    cout<<"Your win percentage is "                         //Outputs win%
        <<fixed<<setprecision(2)<<winP<<"%"<<endl;
    
    //Exit stage right
    return 0;
}

//Functions
void shuffle(int uCardV[],int dCardV[],const int USER_CARDS,const int DEALER_CARDS,const int DECK_OF_CARDS)
{
    for (int uCount=0; uCount<USER_CARDS; uCount++)        //User card shuffle
    {
        uCardV[uCount]=(rand()%DECK_OF_CARDS+1);           //Calculates random value
    }
    
    for (int dCount=0; dCount<DEALER_CARDS; dCount++)      //Dealer card shuffle
    {
        dCardV[dCount]=(rand()%DECK_OF_CARDS+1);           //Calculates random value
    }
}

void draw(int uCardV[],int dCardV[],string uCard[],string dCard[],const int USER_CARDS,const int DEALER_CARDS,const int DECK_OF_CARDS)
{
    //Variables for File
    fstream input;                           //File input
    string cardIn;                           //Card string
    string fileName;                         //File name
    //Initialize file parameters
    fileName="deckOfCards.dat";             //File name
    input.open(fileName.c_str(),ios::in);   //Opens file
    
    for (int count=1; count<=DECK_OF_CARDS; count++)         //Loop to input cards
    {
        input>>cardIn;                                      //Inputs current card
        for (int uCount=0; uCount<USER_CARDS; uCount++)     //User Cards loop
        {
            if (count==uCardV[uCount])
            {
                uCard[uCount]=cardIn; //Assigns cards
            }
        }
        for (int dCount=0; dCount<DEALER_CARDS; dCount++)   //Dealer cards loop
        {
            if (count==dCardV[dCount])
            {
                dCard[dCount]=cardIn; //Assigns cards
            }
        }
    }
    //Close the file
    input.close();
}

void points(int uCardV[],int dCardV[],int uC[],int dC[],const int USER_CARDS,const int DEALER_CARDS)
{
    for (int uCount=0; uCount<USER_CARDS; uCount++)         //Loop to assign point values to user cards
    {
        if (uCardV[uCount]==1  or uCardV[uCount]==14  or uCardV[uCount]==27  or uCardV[uCount]==40)uC[uCount]=11;
        else if (uCardV[uCount]==2  or uCardV[uCount]==15  or uCardV[uCount]==28  or uCardV[uCount]==41)uC[uCount]=2;
        else if (uCardV[uCount]==3  or uCardV[uCount]==16  or uCardV[uCount]==29  or uCardV[uCount]==42)uC[uCount]=3;
        else if (uCardV[uCount]==4  or uCardV[uCount]==17  or uCardV[uCount]==30  or uCardV[uCount]==43)uC[uCount]=4;
        else if (uCardV[uCount]==5  or uCardV[uCount]==18  or uCardV[uCount]==31  or uCardV[uCount]==44)uC[uCount]=5;
        else if (uCardV[uCount]==6  or uCardV[uCount]==19  or uCardV[uCount]==32  or uCardV[uCount]==45)uC[uCount]=6;
        else if (uCardV[uCount]==7  or uCardV[uCount]==20  or uCardV[uCount]==33  or uCardV[uCount]==46)uC[uCount]=7;
        else if (uCardV[uCount]==8  or uCardV[uCount]==21  or uCardV[uCount]==34  or uCardV[uCount]==47)uC[uCount]=8;
        else if (uCardV[uCount]==9  or uCardV[uCount]==22  or uCardV[uCount]==35  or uCardV[uCount]==48)uC[uCount]=9;
        else uC[uCount]=10;
    }
    for (int dCount=0; dCount<DEALER_CARDS; dCount++)         //Loop to assign point values to user cards
    {
        if (dCardV[dCount]==1  or dCardV[dCount]==14  or dCardV[dCount]==27  or dCardV[dCount]==40)dC[dCount]=11;
        else if (dCardV[dCount]==2  or dCardV[dCount]==15  or dCardV[dCount]==28  or dCardV[dCount]==41)dC[dCount]=2;
        else if (dCardV[dCount]==3  or dCardV[dCount]==16  or dCardV[dCount]==29  or dCardV[dCount]==42)dC[dCount]=3;
        else if (dCardV[dCount]==4  or dCardV[dCount]==17  or dCardV[dCount]==30  or dCardV[dCount]==43)dC[dCount]=4;
        else if (dCardV[dCount]==5  or dCardV[dCount]==18  or dCardV[dCount]==31  or dCardV[dCount]==44)dC[dCount]=5;
        else if (dCardV[dCount]==6  or dCardV[dCount]==19  or dCardV[dCount]==32  or dCardV[dCount]==45)dC[dCount]=6;
        else if (dCardV[dCount]==7  or dCardV[dCount]==20  or dCardV[dCount]==33  or dCardV[dCount]==46)dC[dCount]=7;
        else if (dCardV[dCount]==8  or dCardV[dCount]==21  or dCardV[dCount]==34  or dCardV[dCount]==47)dC[dCount]=8;
        else if (dCardV[dCount]==9  or dCardV[dCount]==22  or dCardV[dCount]==35  or dCardV[dCount]==48)dC[dCount]=9;
        else dC[dCount]=10;
    }
}


/*
 * FUTURE CHANGES
 * Implement hit and stand mechanics
 * Ace turns to 1 if over 21 (this is causing a few bugs currently)
 * 
 * BUGS
 * Can "bust" if two aces are drawn
 */