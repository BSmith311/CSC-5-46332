/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 29
 * Purpose: Blackjack v5, now includes Ace mechanics
 *              Added more lines of code to meet various requirements
 */

//System Libraries
#include <iostream>     //Input/Output library
#include <iomanip>      //Format Library
#include <cmath>        //Math Library
#include <cstdlib>      //Srand
#include <fstream>      //File operator
#include <string>       //String Library
#include <ctime>        //Time to set random number seed
#include <vector>       //Includes vectors
using namespace std;

//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes
void stars(int=47);                               //Function to display stars
void shuffle(int[],int[],const int,const int,const int);                              //Function to shuffle the cards
void draw(int[],int[],string[],string[],const int, const int, const int);             //Function to assign cards
void points(int[],int[],int[],int[],const int, const int);                            //Function to calculate card point values
void user(int[],int[],string[],string[],int&,int,int&,bool&,const int,int[]);         //Function for users turn
void dealer(int[],int[],string[],string[],int&,int&,int&,int&,bool&,const int,int[]); //Function for dealers turn
void results(int,int,bool,bool,float&,float&,float);                                  //Function to display results
void sortD(int,int[],string[]);                   //Function to sort the dealers cards
void sortU(int,int[],string[]);                   //Function to sort the users cards
void printF(int,int,string[],string[],int,int);   //Function to print the final cards
float winP(float,float);                          //Function to calculate win percentage
bool mWL(float,float);                            //Function to calculate if more wins/losses
void bet(int,float);                              //Function to calculate betting

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
    int userT, dealT,                        //User total, dealer total
            cdU, cdD;                        //User cards drawn, dealer cards drawn
    float gWon, gPlay,                       //Games won, game played
          betA;                              //Betting amount
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
    cdU=2;                      //Default user cards drawn
    cdD=2;                      //Default dealer cards drawn
    //Game play
    stars();
    do{
        //Betting
        cout<<"How much would you like to bet? Max bet is $100."<<endl;
        cin>>betA;
        while (betA<0 or betA>100)     //Input validation
        {
            cout<<"Invalid amount, enter an amount from $0.01 to $100.00."<<endl;
            cin>>betA;
        }
        //Shuffle and assign cards
        shuffle(uCardV,dCardV,USER_CARDS,DEALER_CARDS,DECK_OF_CARDS);           //Calls shuffle function
        draw(uCardV,dCardV,uCard,dCard,USER_CARDS,DEALER_CARDS,DECK_OF_CARDS);  //Calls draw function
        points(uCardV,dCardV,uC,dC,USER_CARDS,DEALER_CARDS);                    //Calls point function
        //Initial Game output
        userT=uC[1]+uC[2];          //Initial user total
        dealT=dC[1]+dC[2];          //Initial dealer total
        //Output initial hand
        if (userT>21)               //Sets new ace value if bust
        {
            for (int uCount=0; uCount<USER_CARDS; uCount++)         //Loop to assign point values to user cards
            {
                if (uCardV[uCount]==1  or uCardV[uCount]==14  or uCardV[uCount]==27  or uCardV[uCount]==40)uC[uCount]=1;
            }
            userT=uC[1]+uC[2];
        }
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Dealer's Hand: "<<dC[1]<<" + ?"<<endl;
        cout<<left<<setw(12)<<dCard[1]<<left<<setw(12)<<"?"<<endl;
        cout<<"Your Hand: "<<userT<<endl;
        cout<<left<<setw(12)<<uCard[1]<<left<<setw(12)<<uCard[2]<<endl;
        cout<<"-----------------------------------------------"<<endl;
        //Turns and results
        user(uC,dC,uCard,dCard,userT,dealT,cdU,uBust,USER_CARDS,uCardV);            //Calls user turn function
        dealer(uC,dC,uCard,dCard,userT,dealT,cdU,cdD,dBust,USER_CARDS,dCardV);      //Calls dealer turn function
        sortD(cdD,dC,dCard);                                                        //Calls sort dealer hand function
        sortU(cdU,uC,uCard);                                                        //Calls sort user hand function
        printF(dealT,userT,dCard,uCard,cdD,cdU);
        results(userT,dealT,uBust,dBust,gPlay,gWon,betA);                           //Calls results function
        //Repeat play
        stars(59);
        cout<<"Enter 'Y' or 'y' to play again, "        //Play again prompt
            <<"all other inputs quit game."<<endl;
        cin>>again;                                     //Play again input
        stars(59);
    }while (again=='Y' or again=='y');                  //Loops if yes
    
    //Final results output
    if (mWL(gWon,gPlay)){cout<<"You won more games than you lost."<<endl;}
    else{cout<<"You did not win more games than you lost."<<endl;}
    
    cout<<"You won "<<static_cast<int>(gWon)                //Outputs games won
        <<" games out of "<<static_cast<int>(gPlay)<<endl;  //Outputs games played
    cout<<"Your win percentage is "                         //Outputs win%
        <<fixed<<setprecision(2)<<winP(gWon,gPlay)<<"%"<<endl;
    stars();
    //Exit stage right
    return 0;
}

//Functions
void stars(int row)
{
    for (int i=0; i<row; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}

void shuffle(int uCardV[],int dCardV[],const int USER_CARDS,const int DEALER_CARDS,const int DECK_OF_CARDS)
{
    static int shuf;
    for (int uCount=0; uCount<USER_CARDS; uCount++)        //User card shuffle
    {
        uCardV[uCount]=(rand()%DECK_OF_CARDS+1);           //Calculates random value
    }
    
    for (int dCount=0; dCount<DEALER_CARDS; dCount++)      //Dealer card shuffle
    {
        dCardV[dCount]=(rand()%DECK_OF_CARDS+1);           //Calculates random value
    }
    shuf++;
    cout<<endl<<"The cards have been shuffled a total of "<<shuf<<" times."<<endl;
}

void draw(int uCardV[],int dCardV[],string uCard[],string dCard[],const int USER_CARDS,const int DEALER_CARDS,const int DECK_OF_CARDS)
{
    //Variables for File
    fstream input;                           //File input
    string cardIn;                           //Card string
    string fileName;                         //File name
    //Initialize file parameters
    fileName="deckOfCards.dat";              //File name
    input.open(fileName.c_str(),ios::in);    //Opens file
    
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

void user(int uC[],int dC[],string uCard[],string dCard[],int& userT,int dealT,int& cdU,bool& uBust,const int USER_CARDS,int uCardV[])
{
    char hOs;               //Initial hit or stand
    char repeat;            //Repeat Hit or Stand
    cdU=2;                  //Default cards drawn by user
    cout<<"Would you like to hit (H) or stand (S)?"<<endl;      //Input prompt
    cin>>hOs;                                                   //Input
    while (hOs!='H' and hOs!='h' and hOs!='S' and hOs!='s')     //Input validation
    {
        cout<<"Invalid choice, please enter 'H' for hit or 'S' for stand."<<endl;
        cin>>hOs;
    }
    switch (hOs)                        //Hit or Stand switch
    {
        case 'H':                       //Case Hit
        case 'h':
            do{
                cdU++;                  //Cards drawn by user plus one
                userT+=uC[cdU];         //Adds new card to total
                if (userT>21)           //Sets new ace value if bust
                {
                    for (int uCount=0; uCount<USER_CARDS; uCount++)         //Loop to assign point values to user cards
                    {
                        if (uCardV[uCount]==1  or uCardV[uCount]==14  or uCardV[uCount]==27  or uCardV[uCount]==40)uC[uCount]=1;
                    }
                    userT=0;                    //Reset user total
                    for (int i=1; i<=cdU; i++)
                    {
                        userT+=uC[i];
                    }
                }
                //Outputs new hand
                cout<<"-----------------------------------------------"<<endl;
                cout<<"Dealer's Hand: "<<dC[1]<<" + ?"<<endl;
                cout<<left<<setw(12)<<dCard[1]<<left<<setw(12)<<"?"<<endl;
                cout<<"Your Hand: "<<userT<<endl;
                cout<<left<<setw(12)<<uCard[1]<<left<<setw(12)<<uCard[2];
                for (int i=3; i<=cdU; i++)                          //Loop to display user cards
                {
                    if (i==5 or i==9 or i==13 or i==17 or i==21)    //Spacing
                    {cout<<endl;}
                    cout<<left<<setw(12)<<uCard[i];
                    
                }
                cout<<endl;
                cout<<"-----------------------------------------------"<<endl;
                if (userT<=21)uBust=false;     //If user does not bust, sets bool to false
                if (userT>21)
                {
                    uBust=true;                //If user busts, sets bool to true
                    exit;
                }
                if (userT<21)                  //Only allows choice if user is under 21
                {
                    cout<<"Hit or Stand?"<<endl;
                    cin>>repeat;
                    while (repeat!='H' and repeat!='h' and repeat!='S' and repeat!='s')     //Input validation
                    {
                        cout<<"Invalid choice, please enter 'H' for hit or 'S' for stand."<<endl;
                        cin>>repeat;
                    }
                }
                else{repeat='S';}              //Forces stand if already busted
            }while (repeat=='H' or repeat=='h');    //Repeats if user hits again
            
        case 'S':                       //Case Stand
        case 's':
            //Output initial hand and reveal dealers hand
            cout<<"-----------------------------------------------"<<endl;
            cout<<"Dealer's Hand: "<<dealT<<endl;
            cout<<left<<setw(12)<<dCard[1]<<left<<setw(12)<<dCard[2]<<endl;
            cout<<"Your Hand: "<<userT<<endl;
            cout<<left<<setw(12)<<uCard[1]<<left<<setw(12)<<uCard[2];
            for (int i=3; i<=cdU; i++)      //Outputs additional cards drawn by user
                {
                    if (i==5 or i==9 or i==13 or i==17 or i==21)    //Spacing
                    {cout<<endl;}
                    cout<<left<<setw(12)<<uCard[i];
                }
            cout<<endl;
            cout<<"-----------------------------------------------"<<endl;
    }
}

void dealer(int uC[],int dC[],string uCard[],string dCard[],int& userT,int& dealT,int& cdU,int& cdD,bool& dBust,const int USER_CARDS,int dCardV[])
{
    cdD=2;                      //Default cards drawn by dealer
    if (dealT<17 && userT<22)   //If dealer is under 17 and user did not bust
    {
        do{
        cdD++;                  //Adds one to dealer cards drawn
        dealT+=dC[cdD];         //Adds new card to dealer total
        cout<<"Dealer draws one card."<<endl;   //Dealer draw prompt
        if (dealT>21)           //Sets new ace value if bust
                {
                    for (int dCount=0; dCount<USER_CARDS; dCount++)         //Loop to assign point values to dealer cards
                    {
                        if (dCardV[dCount]==1  or dCardV[dCount]==14  or dCardV[dCount]==27  or dCardV[dCount]==40)dC[dCount]=1;
                    }
                    dealT=0;                    //Reset user total
                    for (int i=1; i<=cdD; i++)
                    {
                        dealT+=dC[i];
                    }
                }
        //Outputs new hand
        cout<<"-----------------------------------------------"<<endl;
        cout<<"Dealer's Hand: "<<dealT<<endl;
        cout<<left<<setw(12)<<dCard[1]<<left<<setw(12)<<dCard[2];
        for (int i=3; i<=cdD; i++)          //Loop to output additional cards
        {
            if (i==5 or i==9 or i==13 or i==17 or i==21)    //Spacing
            {cout<<endl;}
            cout<<left<<setw(12)<<dCard[i];
        }
        cout<<endl;
        cout<<"Your Hand: "<<userT<<endl;
        cout<<left<<setw(12)<<uCard[1]<<left<<setw(12)<<uCard[2];
        for (int i=3; i<=cdU; i++)          //Loop to output additional cards
            {
                if (i==5 or i==9 or i==13 or i==17 or i==21)//Spacing
                {cout<<endl;}
                cout<<left<<setw(12)<<uCard[i];
            }
        cout<<endl;
        cout<<"-----------------------------------------------"<<endl;
        }while (dealT<17);      //Repeats if dealer is still under 17
    }
    if (dealT<=21)dBust=false;  //If dealer does not bust, sets bool to false
    if (dealT>21)dBust=true;    //If dealer busts, sets bool to true
}

void sortD(int cdD,int dC[],string dCard[])
{
    //Bubble Sort
    bool swap;          //Swap bool
    int temp;           //Temporary placeholder
    string temp2;       //Temporary placeholder
    
    do{                 //Bubble sort loop
       swap=false;      //Default swap value
       for (int count=1; count<cdD; count++)    //Loop to check values
       {
           if (dC[count]>dC[count+1])           //If greater than next array
           {
               temp=dC[count];                  //Holds first array value temporarily
               temp2=dCard[count];              //Holds first array value temporarily
               
               dC[count]=dC[count+1];           //Sets first array equal to second
               dCard[count]=dCard[count+1];     //Sets first array equal to second
               
               dC[count+1]=temp;                //Sets second array equal to original first
               dCard[count+1]=temp2;            //Sets second array equal to original first
               swap=true;                       //Sets swap to true
           }
       }
    }while (swap);
}

void sortU(int cdU,int uC[],string uCard[])
{
    //Selection Sort
    int sScan, minI, minV;              //Start scan, min index, min value
    string temp;                        //Temporary placeholder
    for (sScan=1; sScan<cdU; sScan++)   //Selection Sort loop
    {
        minI=sScan;         //Min index default value
        minV=uC[sScan];     //Min value default value
        temp=uCard[sScan];  //Placeholder default value
        for (int index=sScan+1; index<=cdU; index++)  //Loop to check values
        {
            if (uC[index]<minV)      //If next value is less than previous
            {
                minV=uC[index];         //Minimum value set to array value
                minI=index;             //Minimum index set to current index
                temp=uCard[index];      //String value set to array value
            }
        }
        uC[minI]=uC[sScan];             //Sets new values
        uCard[minI]=uCard[sScan];       //Sets new values
        uC[sScan]=minV;                 //Sets new values
        uCard[sScan]=temp;              //Sets new values
    }
}

void printF(int dealT,int userT,string dCard[],string uCard[],int cdD,int cdU)
{
    cout<<endl<<"Final Results!"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Dealer's Hand: "<<dealT<<endl;
    cout<<left<<setw(12)<<dCard[1]<<left<<setw(12)<<dCard[2];
    for (int i=3; i<=cdD; i++)          //Loop to output additional cards
    {
        if (i==5 or i==9 or i==13 or i==17 or i==21)    //Spacing
        {cout<<endl;}
        cout<<left<<setw(12)<<dCard[i];
    }
    cout<<endl;
    cout<<"Your Hand: "<<userT<<endl;
    cout<<left<<setw(12)<<uCard[1]<<left<<setw(12)<<uCard[2];
    for (int i=3; i<=cdU; i++)          //Loop to output additional cards
        {
            if (i==5 or i==9 or i==13 or i==17 or i==21)//Spacing
            {cout<<endl;}
            cout<<left<<setw(12)<<uCard[i];
        }
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl;
}

void results(int userT,int dealT,bool uBust,bool dBust,float& gPlay,float& gWon,float betA)
{
    gPlay++;                                            //Adds 1 to games played counter
    string winH="You win, congratulations!",            //Win by higher number message
           winB="Dealer busts! You win!",               //Win by dealer bust message
           lossH="You lost, better luck next time",     //Loss by lower number message
           lossB="You bust! Better luck next time",     //Loss by user bust message
           draw="It's a draw!";                         //Draw message
    if (uBust!=true)                    //If user does not  busts
    {
        if (dBust==true)                //If dealer busts
        {
            cout<<winB<<endl;           //Output message
            gWon++;                     //Adds 1 to games won counter
            bet(2,betA);                //Bet results
        }
        if (dBust==false)               //If dealer does not bust
        {
            if (userT>dealT)            //If user total higher than dealer
            {
                cout<<winH<<endl;       //Output message
                gWon++;                 //Adds 1 to games won counter
                bet(2,betA);            //Bet results
            }
            else if (userT<dealT)       //If user total less than dealer
            {
                cout<<lossH<<endl;      //Output message
                bet(0,betA);            //Bet results
            }
            else if (userT==dealT)      //If user total equal to dealer
            {
                cout<<draw<<endl;       //Output message
                bet(1,betA);            //Bet results
            }
        }
    }
    else                                //If user busts
    {
        cout<<lossB<<endl;
        bet(0,betA);                    //Bet results
    }
}

void bet(int num, float betA)
{
    cout<<"You receive $"<<fixed<<setprecision(2)<<(betA*num)<<endl;
}

bool mWL(float gWon,float gPlay)
{
    bool status;
    int gLoss=gPlay-gWon;
    if (gWon<gLoss)status=false;
    if (gWon>gLoss)status=true;
    return status;
}

float winP(float gWon,float gPlay)
{
    float percent;
    percent=(gWon/gPlay)*100;
    return percent;
}

/*
 * FUTURE ADDITIONS
 * Add Vectors
 * KNOWN BUGS (Fix in v6)
 * Program will sometimes incorrectly bust user or dealer
 */