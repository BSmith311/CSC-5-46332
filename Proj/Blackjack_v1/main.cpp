/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 20
 * Purpose: Blackjack v1, only deals 2 cards for user and dealer
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
const unsigned CARDS_IN_DECK=52;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned>(time(0)));
    //Declare Variables
    fstream input;
    string fileName,
           card1, card2, card3, card4, card5,                //Cards 1-5 String
           dCard1, dCard2, dCard3, dCard4, dCard5;           //Dealer Cards 1-5 String
    unsigned cardV1, cardV2, cardV3, cardV4, cardV5,         //Cards 1-5
             dCardV1, dCardV2, dCardV3, dCardV4, dCardV5;    //Dealer Cards 1-5
    char choice;
    //Initialize file parameters
    fileName="deckOfCards.dat";
    input.open(fileName.c_str(),ios::in);
    //Initialize Variables
    /*
     *Technically, 21 cards can be drawn by the player and dealer but the code 
     * would be too bloated without arrays so the limit is 3 extra cards
     */
    cardV1=(rand()%CARDS_IN_DECK+1);
    cardV2=(rand()%CARDS_IN_DECK+1);
    cardV3=(rand()%CARDS_IN_DECK+1);
    cardV4=(rand()%CARDS_IN_DECK+1);
    cardV5=(rand()%CARDS_IN_DECK+1);
    dCardV1=(rand()%CARDS_IN_DECK+1);
    dCardV2=(rand()%CARDS_IN_DECK+1);
    dCardV3=(rand()%CARDS_IN_DECK+1);
    dCardV4=(rand()%CARDS_IN_DECK+1);
    dCardV5=(rand()%CARDS_IN_DECK+1);
    
    //Pull cards from the file
    string cardIn;
    for (int count=1; count<=CARDS_IN_DECK; count++)
    {
        input>>cardIn;
        if (count==cardV1)card1=cardIn;
        if (count==cardV2)card2=cardIn;
        if (count==cardV3)card3=cardIn;
        if (count==cardV4)card4=cardIn;
        if (count==cardV5)card5=cardIn;
        if (count==dCardV1)dCard1=cardIn;
        if (count==dCardV2)dCard2=cardIn;
        if (count==dCardV3)dCard3=cardIn;
        if (count==dCardV4)dCard4=cardIn;
        if (count==dCardV5)dCard5=cardIn;
    }
    
    //Display the Cards
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Dealer's Hand:"<<endl;
    cout<<left<<setw(12)<<dCard1<<left<<setw(12)<<dCard2<<endl;
    cout<<"Your Hand: "<<endl;
    cout<<left<<setw(12)<<card1<<left<<setw(12)<<card2<<endl;
    cout<<"-----------------------------------------------"<<endl;
    
    
    
    //Exit stage right
    input.close();
        return 0;
}

