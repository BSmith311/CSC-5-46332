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
        cout<<"Problem 0 - Truth Table"<<endl;
        cout<<"Problem 1 - Sort Names - Gaddis 9thEd Chap4 Prob8"<<endl;
        cout<<"Problem 2 - Books - Gaddis 9thEd Chap4 Prob11"<<endl;
        cout<<"Problem 3 - Bank Charges - Gaddis 9thEd Chap4 Prob12"<<endl;
        cout<<"Problem 4 - Race - Gaddis 9thEd Chap4 Prob14"<<endl;
        cout<<"Problem 5 - ISP - Gaddis 9thEd Chap4 Prob23"<<endl;
        cout<<"Problem 6 - RockPaperScissors - Savitch 9thEd Chap3 PracProb1"<<endl;
        cout<<"Problem 7 - Roman Conversion - Savitch 9thEd Chap3 Prob3"<<endl;
        cout<<"Problem 8 - Compatible Signs - Savitch 9thEd Chap3 PracProb4"<<endl;
        cout<<"9 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:{
                bool x, y;

                //Heading
                cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
                        << "!(X||Y) !X||!Y !(X&&Y)" << endl;

                //First Row
                x = y = true;
                cout << (x ? 'T' : 'F') << " ";
                cout << (y ? 'T' : 'F') << "  ";
                cout << (!x ? 'T' : 'F') << "  ";
                cout << (!y ? 'T' : 'F') << "   ";
                cout << (x && y ? 'T' : 'F') << "    ";
                cout << (x || y ? 'T' : 'F') << "   ";
                cout << (x^y ? 'T' : 'F') << "    ";
                cout << (x^y^x ? 'T' : 'F') << "     ";
                cout << (x^y^y ? 'T' : 'F') << "     ";
                cout << (!x && y ? 'T' : 'F') << "       ";
                cout << (!(x || y) ? 'T' : 'F') << "       ";
                cout << (!x || !y ? 'T' : 'F') << "      ";
                cout << (!(x && y) ? 'T' : 'F') << " ";
                cout << endl;

                //Second Row
                y = false;
                cout << (x ? 'T' : 'F') << " ";
                cout << (y ? 'T' : 'F') << "  ";
                cout << (!x ? 'T' : 'F') << "  ";
                cout << (!y ? 'T' : 'F') << "   ";
                cout << (x && y ? 'T' : 'F') << "    ";
                cout << (x || y ? 'T' : 'F') << "   ";
                cout << (x^y ? 'T' : 'F') << "    ";
                cout << (x^y^x ? 'T' : 'F') << "     ";
                cout << (x^y^y ? 'T' : 'F') << "     ";
                cout << (!x && y ? 'T' : 'F') << "       ";
                cout << (!(x || y) ? 'T' : 'F') << "       ";
                cout << (!x || !y ? 'T' : 'F') << "      ";
                cout << (!(x && y) ? 'T' : 'F') << " ";
                cout << endl;

                //Third Row
                x = false;
                y = true;
                cout << (x ? 'T' : 'F') << " ";
                cout << (y ? 'T' : 'F') << "  ";
                cout << (!x ? 'T' : 'F') << "  ";
                cout << (!y ? 'T' : 'F') << "   ";
                cout << (x && y ? 'T' : 'F') << "    ";
                cout << (x || y ? 'T' : 'F') << "   ";
                cout << (x^y ? 'T' : 'F') << "    ";
                cout << (x^y^x ? 'T' : 'F') << "     ";
                cout << (x^y^y ? 'T' : 'F') << "     ";
                cout << (!x && y ? 'T' : 'F') << "       ";
                cout << (!(x || y) ? 'T' : 'F') << "       ";
                cout << (!x || !y ? 'T' : 'F') << "      ";
                cout << (!(x && y) ? 'T' : 'F') << " ";
                cout << endl;

                //Fourth Row
                x = y = false;
                cout << (x ? 'T' : 'F') << " ";
                cout << (y ? 'T' : 'F') << "  ";
                cout << (!x ? 'T' : 'F') << "  ";
                cout << (!y ? 'T' : 'F') << "   ";
                cout << (x && y ? 'T' : 'F') << "    ";
                cout << (x || y ? 'T' : 'F') << "   ";
                cout << (x^y ? 'T' : 'F') << "    ";
                cout << (x^y^x ? 'T' : 'F') << "     ";
                cout << (x^y^y ? 'T' : 'F') << "     ";
                cout << (!x && y ? 'T' : 'F') << "       ";
                cout << (!(x || y) ? 'T' : 'F') << "       ";
                cout << (!x || !y ? 'T' : 'F') << "      ";
                cout << (!(x && y) ? 'T' : 'F') << " ";
                cout << endl;
                    break;}
            case 1:{
                //Declare Variables
                string name1, name2, name3;         //Declared Names 1-3
                //Initialize or input i.e. set variable values
                cout<<"Sorting Names"<<endl<<"Input 3 names"<<endl;     //Prompt of inputs
                cin>>name1>>name2>>name3;                               //Inputs
                //Map inputs -> outputs
                if (name1<name2 && name1<name3)             //Process if Name 1 is first
                {
                    cout<<name1<<endl;
                    if (name2<name3)                        //Process if Name 2 is second and Name 3 is third
                    {
                        cout<<name2<<endl<<name3;
                    }
                    else                                    //Process if Name 3 is second and Name 2 is third
                    {
                        cout<<name3<<endl<<name2;
                    }
                }
                else if(name2<name1 && name2<name3)         //Process if Name 2 is first
                {
                    cout<<name2<<endl;
                    if (name1<name3)                        //Process if Name 1 is second and Name 3 is third
                    {
                        cout<<name1<<endl<<name3;
                    }
                    else                                    //Process if Name 3 is second and Name 1 is third
                    {
                        cout<<name3<<endl<<name1;
                    }
                }
                else if(name3<name1 && name3<name2)         //Process if Name 3 is first
                {
                    cout<<name3<<endl;
                    if (name1<name2)                        //Process if Name 1 is second and Name 2 is third
                    {
                        cout<<name1<<endl<<name2;
                    }
                    else                                    //Process if Name 2 is second and Name 1 is third
                    {
                        cout<<name2<<endl<<name1;
                    }
                }
                cout<<endl;
                    break;}
            case 2:{
                //Declare Variables
                unsigned int custPur,   //Value of Customer Purchase
                                ptsErn; //Points Earned

                //Initialize or input i.e. set variable values
                cout<<"Book Worm Points"<<endl;                                     //Program Name Output
                cout<<"Input the number of books purchased this month."<<endl;      //Prompt for input
                cin>>custPur;                                                       //Input for books purchased
                //Map inputs -> outputs
                if (custPur==0)                                                 //If purchased books is zero
                {
                    ptsErn=0;                                                   //Set points earned
                    cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
                    cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
                }
                else if (custPur==1)                                            //If purchased books is one
                {
                    ptsErn=5;                                                   //Set points earned
                    cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
                    cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
                }
                else if (custPur==2)                                            //If purchased books is two
                {
                    ptsErn=15;                                                  //Set points earned
                    cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
                    cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
                }
                else if (custPur==3)                                            //If purchased books is three
                {
                    ptsErn=30;                                                  //Set points earned
                    cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
                    cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
                }
                else if (custPur>=4)                                            //If purchased books is four or more
                {
                    ptsErn=60;                                                  //Set points earned
                    cout<<"Books purchased ="<<fixed<<setw(3)<<custPur<<endl;   //Output for books purchased
                    cout<<"Points earned   ="<<fixed<<setw(3)<<ptsErn;          //Output for points earned
                }
                cout<<endl;
                    break;}
            case 3:{
                //Global Constants, no Global Variables are allowed
                //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
                const float BASE_CHARGE=10.00,          //Base charge of the bank per month
                            UNDER_BALANCE_FEE=15.00,    //Base charge if balance is under $400
                            RANGE_ONE_FEE=0.10,         //Charge per check if fewer than 20 checks
                            RANGE_TWO_FEE=0.08,         //Charge per check if between 20-39 checks
                            RANGE_THREE_FEE=0.06,       //Charge per check if between 40-59 checks
                            RANGE_FOUR_FEE=0.04;        //Charge per check if over 60 checks
                //Declare Variables
                float begBal,       //Beginning Balance
                        cksWrt,     //Checks Written
                        ckFee,      //Check Fee
                        mtFee,      //Monthly Fee
                        lowFee,     //Low Balance Fee
                        newBal;     //New Balance
                //Initialize or input i.e. set variable values
                mtFee=BASE_CHARGE;
                cout<<"Monthly Bank Fees"<<endl;                                //Program function output
                cout<<"Input Current Bank Balance and Number of Checks"<<endl;  //Input Prompt
                cin>>begBal>>cksWrt;                                            //Inputs for beginning balance and checks written
                //Map inputs -> outputs
                if (begBal<400)                     //If balance is under $400, a $15 charge is placed
                    {
                        lowFee=UNDER_BALANCE_FEE;
                    }
                else if (begBal>400)
                    {
                        lowFee=0;
                    }

                if (cksWrt<20)                      //Process for under 20 written checks
                    {
                        ckFee=cksWrt*RANGE_ONE_FEE;
                        newBal=begBal-(ckFee+mtFee+lowFee);
                        cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
                        cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
                        cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
                        cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
                        cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
                        if (newBal<0)
                            {
                                cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                            }
                    }
                if (cksWrt>19 && cksWrt<39)         //Process for between 20-39 checks
                    {
                        ckFee=cksWrt*RANGE_TWO_FEE;
                        newBal=begBal-(ckFee+mtFee+lowFee);
                        cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
                        cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
                        cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
                        cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
                        cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
                        if (newBal<0)
                            {
                                cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                            }
                    }
                if (cksWrt>39 && cksWrt<59)         //Process for between 40-59 checks
                    {
                        ckFee=cksWrt*RANGE_THREE_FEE;
                        newBal=begBal-(ckFee+mtFee+lowFee);
                        cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
                        cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
                        cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
                        cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
                        cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
                        if (newBal<0)
                            {
                                cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                            }
                    }
                if (cksWrt>59)                      //Process for over 60 checks
                    {
                        ckFee=cksWrt*RANGE_FOUR_FEE;
                        newBal=begBal-(ckFee+mtFee+lowFee);
                        cout<<"Balance     $"<<fixed<<setprecision(2)<<setw(9)<<begBal<<endl;
                        cout<<"Check Fee   $"<<fixed<<setprecision(2)<<setw(9)<<ckFee<<endl;
                        cout<<"Monthly Fee $"<<fixed<<setprecision(2)<<setw(9)<<mtFee<<endl;
                        cout<<"Low Balance $"<<fixed<<setprecision(2)<<setw(9)<<lowFee<<endl;
                        cout<<"New Balance $"<<fixed<<setprecision(2)<<setw(9)<<newBal;
                        if (newBal<0)
                            {
                                cout<<endl<<"URGENT: ACCOUNT IS OVERDRAWN!";
                            }
                    }
                cout<<endl;
                    break;}
            case 4:{
                //Declare Variables
                string name1, name2, name3;
                int time1, time2, time3;
                //Initialize or input i.e. set variable values
                cout<<"Race Ranking Program"<<endl;
                cout<<"Input 3 Runners"<<endl<<"Their names, then their times"<<endl;
                cin>>name1>>time1>>name2>>time2>>name3>>time3;
                //Map inputs -> outputs

                //Display the outputs
                if (time1<0 || time2<0 || time3<0)
                    {
                        cout<<"Invalid time, times must be positive numbers.";
                    }
                else if (time1<=time2 && time1<=time3)
                    {
                        cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                        if (time2<=time3)
                            {
                                cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                                cout<<name3<<"\t"<<setw(3)<<time3;
                            }
                        else if (time3<time2)
                            {
                                cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                                cout<<name2<<"\t"<<setw(3)<<time2;
                            }
                    }
                else if (time2<=time1 && time2<=time3)
                    {
                        cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                        if (time1<=time3)
                            {
                                cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                                cout<<name3<<"\t"<<setw(3)<<time3;
                            }
                        else if (time3<time1)
                            {
                                cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                                cout<<name1<<"\t"<<setw(3)<<time1;
                            }
                    }
                else if (time3<=time1 && time3<=time2)
                    {
                        cout<<name3<<"\t"<<setw(3)<<time3<<endl;
                        if (time1<=time2)
                            {
                                cout<<name1<<"\t"<<setw(3)<<time1<<endl;
                                cout<<name2<<"\t"<<setw(3)<<time2;
                            }
                        else if (time2<time1)
                            {
                                cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                                cout<<name1<<"\t"<<setw(3)<<time1;
                            }
                    }
                cout<<endl;
                    break;}
            case 5:{
                //Global Constants, no Global Variables are allowed
                //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
                const float PACKAGE_A_BASE=9.95,        //Base fee for package A, includes 10 hours
                            PACKAGE_A_ADDITIONAL=2.00,  //Additional charge for package A per hour over base
                            PACKAGE_B_BASE=14.95,       //Base fee for package B, includes 20 hours
                            PACKAGE_B_ADDITIONAL=1.00,  //Additional charge for package B per hour over base
                            PACKAGE_C_BASE=19.95;       //Base fee for package C, unlimited hours
                //Declare Variables
                char choice;            //User Choice
                unsigned int hrsUsed;   //Hours used
                float moChrg,           //Monthly Charge of package
                        addChrg,        //Additional Charge of package
                        bill;           //Total Bill
                //Initialize or input i.e. set variable values

                //Map inputs -> outputs
                cout<<"ISP Bill"<<endl;                 //Program Prompt
                cout<<"Input Package and Hours"<<endl;  //Input Prompt
                cin>>choice>>hrsUsed;                   //Inputs
                //Display the outputs
                switch (choice)
                {
                    case 'A':                                       //Process for Package A
                                moChrg=PACKAGE_A_BASE;              //Setting the monthly charge
                                addChrg=PACKAGE_A_ADDITIONAL;       //Setting the additional charge
                                if (hrsUsed<=10)                    //Process if under base hours
                                {
                                    bill=moChrg;
                                }
                                else if (hrsUsed>10)                //Process if over base hours
                                {
                                    bill=moChrg+((hrsUsed-10)*addChrg);
                                }
                                cout<<"Bill = $ "<<bill;
                                break;
                    case 'B':                                       //Process for Package B
                                moChrg=PACKAGE_B_BASE;
                                addChrg=PACKAGE_B_ADDITIONAL;
                                if (hrsUsed<=20)
                                {
                                    bill=moChrg;
                                }
                                else if (hrsUsed>20)
                                {
                                    bill=moChrg+((hrsUsed-20)*addChrg);
                                }
                                cout<<"Bill = $ "<<bill;
                                break;
                    case 'C':                                       //Process for Package C
                                moChrg=PACKAGE_C_BASE;
                                bill=moChrg;
                                cout<<"Bill = $ "<<bill;
                                break;
                    default: cout<<"Invalid choice, please enter A, B, or C."<<endl;  //Incase invalid choice
                }
                cout<<endl;
                    break;}
            case 6:{
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
                cout<<endl;
                    break;}
            case 7:{
                //Declare Variables
                unsigned int abcNum,        //Year in Arabic Numerals
                                n1,         //Number in ones place
                                n10,        //Number in tens place
                                n100,       //Number in hundreds place
                                n1000;      //Number in thousands place
                //Initialize or input i.e. set variable values

                //Map inputs -> outputs
                cout<<"Arabic to Roman numeral conversion."<<endl;  //Initial Output
                cout<<"Input the integer to convert."<<endl;        //Prompt for input
                cin>>abcNum;                                        //Input
                //Display the outputs
                n1000=(abcNum/1000)%10;                 //Calculation for thousands place
                n100=(abcNum/100)%10;                   //Calculation for hundreds place
                n10=(abcNum/10)%10;                     //Calculation for tens place
                n1=(abcNum/1)%10;                       //Calculation for ones place
                if (abcNum<=3000 && abcNum>=1000)       //Process if input is within range
                {
                    cout<<abcNum<<" is equal to ";      //Initial output for results

                    if (n1000==1)                       //Process for thousands place result 1-3
                    {
                       cout<<"M";
                    }
                    else if (n1000==2)
                    {
                       cout<<"MM";
                    }
                    else if (n1000==3)
                    {
                       cout<<"MMM";
                    }

                    if (n100==1)                        //Process for hundreds place result 1-9
                    {
                        cout<<"C";
                    }
                    else if (n100==2)
                    {
                        cout<<"CC";
                    }
                    else if (n100==3)
                    {
                        cout<<"CCC";
                    }
                    else if (n100==4)
                    {
                        cout<<"CD";
                    }
                    else if (n100==5)
                    {
                        cout<<"D";
                    }
                    else if (n100==6)
                    {
                        cout<<"DC";
                    }
                    else if (n100==7)
                    {
                        cout<<"DDC";
                    }
                    else if (n100==8)
                    {
                        cout<<"DDDC";
                    }
                    else if (n100==9)
                    {
                        cout<<"CM";
                    }

                    if (n10==1)                         //Process for tens place result 1-9
                    {
                        cout<<"X";
                    }
                    else if (n10==2)
                    {
                        cout<<"XX";
                    }
                    else if (n10==3)
                    {
                        cout<<"XXX";
                    }
                    else if (n10==4)
                    {
                        cout<<"XL";
                    }
                    else if (n10==5)
                    {
                        cout<<"L";
                    }
                    else if (n10==6)
                    {
                       cout<<"LX"; 
                    }
                    else if (n10==7)
                    {
                        cout<<"LXX";
                    }
                    else if (n10==8)
                    {
                        cout<<"LXXX";
                    }
                    else if (n10==9)
                    {
                        cout<<"XC";
                    }

                    if (n1==1)                          //Process for ones place result 1-9
                    {
                        cout<<"I";
                    }
                    else if (n1==2)
                    {
                        cout<<"II";
                    }
                    else if (n1==3)
                    {
                        cout<<"III";
                    }
                    else if (n1==4)
                    {
                        cout<<"IV";
                    }
                    else if (n1==5)
                    {
                        cout<<"V";
                    }
                    else if (n1==6)
                    {
                        cout<<"VI";
                    }
                    else if (n1==7)
                    {
                        cout<<"VII";
                    }
                    else if (n1==8)
                    {
                        cout<<"VIII";
                    }
                    else if (n1==9)
                    {
                        cout<<"IX";
                    }
                }
                else                                        //Process if output is outside of range
                {
                    cout<<abcNum<<" is Out of Range!";
                }
                cout<<endl;
                    break;}
            case 8:{
                //Declare Variables
                string sign1, sign2;
                //Initialize or input i.e. set variable values

                //Map inputs -> outputs
                cout<<"Horoscope Program which examines compatible signs."<<endl;
                cout<<"Input 2 signs."<<endl;
                cin>>sign1>>sign2;

                //Display the outputs
                if (sign1=="Aries" || sign1=="Leo" || sign1=="Sagittarius")
                {
                    if (sign2=="Aries" || sign2=="Leo" || sign2=="Sagittarius")
                    {
                       cout<<sign1<<" and "<<sign2<<" are compatible Fire signs."; 
                    }
                    else
                    {
                        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                    }

                }
                else if (sign1=="Taurus" || sign1=="Virgo" || sign1=="Capricorn")
                {
                    if (sign2=="Taurus" || sign2=="Virgo" || sign2=="Capricorn")
                    {
                        cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
                    }
                    else
                    {
                        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                    }
                }
                else if (sign1=="Gemini" || sign1=="Libra" || sign1=="Aquarius")
                {
                    if (sign2=="Gemini" || sign2=="Libra" || sign2=="Aquarius")
                    {
                        cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
                    }
                    else
                    {
                        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                    }
                }
                else if (sign1=="Cancer" || sign1=="Scorpio" || sign1=="Pisces")
                {
                    if (sign2=="Cancer" || sign2=="Scorpio" || sign2=="Pisces")
                    {
                        cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
                    }
                    else
                    {
                        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
                    }
                }
                cout<<endl;
                    break;}
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=8);

    return 0;
}