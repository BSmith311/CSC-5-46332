/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 18
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    //Declare all Variables Here
    unsigned short x,       //User number
                    highS,  //Higher starting number (x shape)
                    lowS,   //Lower starting number (x shape)
                    midS,    //Middle Spaces (x shape)
                    leftS,   //Left Spaces
                    rightS,  //Right Spaces
                    origX,  //Original x value
                    rEnd;   //End row
    char shape;             //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    origX=x;
    //Draw the shape
    switch (shape)
    {
        case 'x':                                       //Case for cross shape
        case 'X':
        {
            highS=x;
            lowS=1;
            origX=x;
            if (x % 2 == 0)                     //If number is even
            {
                for (rEnd=(x/2); rEnd>0; rEnd--)                    //First half of shape
                    {
                        for (leftS=(lowS-1); leftS>0; leftS--)      //Left side spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<lowS;                                 //Outputs left number
                        lowS++;                                     //Lowers left number by one
                        for (midS=(highS-lowS); midS>0; midS--)        //Middle spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<highS;                                //Outputs right number
                        highS--;                                    //Increases right number by one
                        for (rightS=(origX-highS-1); rightS>0; rightS--)   //Right side spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<endl;                                 //Ends line
                    }

                for (rEnd=(x/2); rEnd>0; rEnd--)                    //Second half of shape
                    {
                        for (leftS=(highS-1); leftS>0; leftS--)     //Left side spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<highS;                                //Outputs left number
                        highS--;                                    //Increases left number
                        for (midS=(lowS-highS-2); midS>0; midS--)   //Middle spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<lowS;                                 //Outputs right number
                        lowS++;                                     //Lowers right number by one
                        for (rightS=(origX-lowS+1); rightS>0; rightS--)  //Right Spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<endl;                                 //Ends line
                    }
            }
            
            if (x % 2 == 1)                     //If number is odd
            {
                for (rEnd=(x/2); rEnd>0; rEnd--)                    //First half of shape
                    {
                        for (leftS=(origX-highS); leftS>0; leftS--)    //Left side spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<highS;                                //Outputs left number
                        highS--;                                    //Lowers left number by one
                        for (midS=(highS-lowS); midS>0; midS--)        //Middle spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<lowS;                                 //Outputs right number
                        lowS++;                                     //Increases right number by one
                        for (rightS=(lowS-2); rightS>0; rightS--)      //Right side spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<endl;                                 //Ends line
                    }
                while (highS==lowS)                                 //Middle of shape
                {
                    for (leftS=highS-1; leftS>0; leftS--)              //Left side spacing
                    {
                        cout<<" ";                                  //Spacing
                    }
                    cout<<highS;                                    //Outputs middle number
                    for (rightS=lowS-1; rightS>0; rightS--)            //Right Side Spacing
                    {
                        cout<<" ";                                  //Spacing
                    }
                    highS--;                                        //Lowers left number by one
                    lowS++;                                         //Increases right number by one
                    cout<<endl;                                     //Ends line
                }
                for (rEnd=(x/2); rEnd>0; rEnd--)                    //Second half of shape
                    {
                        for (leftS=(origX-lowS); leftS>0; leftS--)     //Left side spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<lowS;                                 //Outputs left number
                        lowS++;                                     //Increases left number
                        for (midS=(lowS-highS-2); midS>0; midS--)      //Middle spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<highS;                                //Outputs right number
                        highS--;                                    //Lowers right number by one
                        for (rightS=highS; rightS>0; rightS--)         //Right Spacing
                        {
                            cout<<" ";                              //Spacing
                        }
                        cout<<endl;                                 //Ends line
                    }
            }
            
        break;}
        
        case 'b':                                               //Case for back slash
        case 'B':
        {
            lowS=1;
            origX=x;
            if (x % 2 == 1)
            {
                for (rEnd=x; rEnd>0; rEnd--)                    //Ends lines once row is finished
                {
                    leftS=(origX-x);                            //Sets value of left spacing
                    cout<<setw(leftS)<<"";                      //Left spacing
                    cout<<setw(x)<<left<<x--;                   //Outputs x, lowers x by one, right spacing
                    cout<<endl;                                 //Ends line
                }
            }
            if (x % 2 == 0)   
            {
                for (rEnd=x; rEnd>0; rEnd--)                    //Ends lines once row is finished
                {
                    leftS=(origX-x);                            //Sets value of left spacing
                    cout<<setw(leftS)<<"";                      //Left spacing
                    cout<<setw(x)<<left<<lowS++;                //Outputs number, lowers it by one, right spacing
                    x--;                                        //Lowers x by one
                    cout<<endl;                                 //Ends line
                }
            }
        break;}
        
        case 'f':                                               //Case for forward slash
        case 'F':
        {
            lowS=1;
            origX=x;
            if (x % 2 == 1)   
                {
                    for (rEnd=x; rEnd>0; rEnd--)                //Ends line once row  is finished
                    {
                        rightS=(origX-x);                       //Sets value of right spacing
                        cout<<setw(x)<<lowS++;                  //Left spacing, outputs number, increases it by one
                        x--;                                    //Lowers x by one
                        cout<<setw(rightS)<<"";                 //Right spacing
                        cout<<endl;                             //Ends line
                    }
                }
            if (x % 2 == 0)  
            {
                for (rEnd=x; rEnd>0; rEnd--)                //Ends line once row  is finished
                    {
                        rightS=(origX-x);                       //Sets value of right spacing
                        cout<<setw(x)<<x--;                     //Left spacing, outputs x, lowers x by one
                        cout<<setw(rightS)<<"";                 //Right spacing
                        cout<<endl;                             //Ends line
                    }
            }
        break;}
    }
}

void problem2(){
    //Declare all Variables Here
    char c1, c2, c3, c4, c5;    //Characters 1-4
    unsigned int num,           //Number for *
            n1, n2, n3, n4;     //Numbers 1-4
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>c4>>c3>>c2>>c1;
    
    //Histogram Here
    if (c1<58 && c1>47)                 //If the first input is a number
    {
        cout<<c1<<" ";                  //Outputs first input with a space after
        n1=(c1-48);                     //Converts the first input to number
        for (num=0; num<n1; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the first input is a character
    {
        cout<<c1<<" ?"<<endl;
    }
    
    if (c2<58 && c2>47)                 //If the second input is a number
    {
        cout<<c2<<" ";                  //Outputs second input with a space after
        n2=(c2-48);                     //Converts the second input to number
        for (num=0; num<n2; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the second input is a character
    {
        cout<<c2<<" ?"<<endl;
    }
    
    if (c3<58 && c3>47)                 //If the third input is a number
    {
        cout<<c3<<" ";                  //Outputs third input with a space after
        n3=(c3-48);                     //Converts the third input to number
        for (num=0; num<n3; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the third input is a character
    {
        cout<<c3<<" ?"<<endl;
    }
    
    if (c4<58 && c4>47)                 //If the fourth input is a number
    {
        cout<<c4<<" ";                  //Outputs fourth input with a space after
        n4=(c4-48);                     //Converts the fourth input to number
        for (num=0; num<n4; num++)      //Loop for histogram asterisk
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else                                //If the fourth input is a character
    {
        cout<<c4<<" ?"<<endl;
    }
}

void problem3(){
    //Declare all Variables Here
    unsigned short number,                  //Number
        n1, n10, n100, n1000;               //Place calculations
    string zero, one, two, three, four,     //0-4 
        five, six, seven, eight, nine;      //5-9
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    //Calculate the 1000's, 100's, 10's and 1's
    n1000=(number/1000)%10;             //1000's calculation
    n100=(number/100)%10;               //100's calculation
    n10=(number/10)%10;                 //10's calculation
    n1=(number/1)%10;                   //1's calculation
    //Output the check value
    if (number<=3000 && number>=1)      //Input verification
    {
        if (n1000<=3 && n1000>=1)       //Thousands
        {
            one="One Thousand ";
            two="Two Thousand ";
            three="Three Thousand ";
            if (n1000==3)
            {
                cout<<three;
            }
            if (n1000==2)
            {
                cout<<two;
            }
            if (n1000==1)
            {
                cout<<one;
            }
        }
        if (n100<=9 && n100>=1)         //Hundreds
        {
            one="One Hundred ";
            two="Two Hundred ";
            three="Three Hundred ";
            four="Four Hundred ";
            five="Five Hundred ";
            six="Six Hundred ";
            seven="Seven Hundred ";
            eight="Eight Hundred ";
            nine="Nine Hundred ";
            if (n100==9)
            {
                cout<<nine;
            }
            if (n100==8)
            {
                cout<<eight;
            }
            if (n100==7)
            {
                cout<<seven;
            }
            if (n100==6)
            {
                cout<<six;
            }
            if (n100==5)
            {
                cout<<five;
            }
            if (n100==4)
            {
                cout<<four;
            }
            if (n100==3)
            {
                cout<<three;
            }
            if (n100==2)
            {
                cout<<two;
            }
            if (n100==1)
            {
                cout<<one;
            }
        }
        if (n10<=9 && n10>=2)           //Tens excluding teens
        {
            two="Twenty ";
            three="Thirty ";
            four="Forty ";
            five="Fifty ";
            six="Sixty ";
            seven="Seventy ";
            eight="Eighty ";
            nine="Ninety ";
            if (n10==9)
            {
                cout<<nine;
            }
            if (n10==8)
            {
                cout<<eight;
            }
            if (n10==7)
            {
                cout<<seven;
            }
            if (n10==6)
            {
                cout<<six;
            }
            if (n10==5)
            {
                cout<<five;
            }
            if (n10==4)
            {
                cout<<four;
            }
            if (n10==3)
            {
                cout<<three;
            }
            if (n10==2)
            {
                cout<<two;
            }
        }
        if (n10!=1 && n1<=9 && n1>=1)   //Ones if not teens
        {
                one="One ";
                two="Two ";
                three="Three ";
                four="Four ";
                five="Five ";
                six="Six ";
                seven="Seven ";
                eight="Eight ";
                nine="Nine ";
                if (n1==9)
                {
                    cout<<nine;
                }
                if (n1==8)
                {
                    cout<<eight;
                }
                if (n1==7)
                {
                    cout<<seven;
                }
                if (n1==6)
                {
                    cout<<six;
                }
                if (n1==5)
                {
                    cout<<five;
                }
                if (n1==4)
                {
                    cout<<four;
                }
                if (n1==3)
                {
                    cout<<three;
                }
                if (n1==2)
                {
                    cout<<two;
                }
                if (n1==1)
                {
                    cout<<one;
                }
            }
        if (n10==1 && n1<=9 && n1>=0)   //Teens
        {
                    zero="Ten ";
                    one="Eleven ";
                    two="Twelve ";
                    three="Thirteen ";
                    four="Fourteen ";
                    five="Fifteen ";
                    six="Sixteen ";
                    seven="Seventeen ";
                    eight="Eighteen ";
                    nine="Nineteen ";
                    if (n1==9)
                    {
                        cout<<nine;
                    }
                    if (n1==8)
                    {
                        cout<<eight;
                    }
                    if (n1==7)
                    {
                        cout<<seven;
                    }
                    if (n1==6)
                    {
                        cout<<six;
                    }
                    if (n1==5)
                    {
                        cout<<five;
                    }
                    if (n1==4)
                    {
                        cout<<four;
                    }
                    if (n1==3)
                    {
                        cout<<three;
                    }
                    if (n1==2)
                    {
                        cout<<two;
                    }
                    if (n1==1)
                    {
                        cout<<one;
                    }
                    if (n1==0)
                    {
                        cout<<zero;
                    }
            }
        cout<<"and no/100's Dollars"<<endl;
    }
    else                                //If input is not valid
    {
        cout<<"Invalid input, only integers [1-3000] allowed";
    }
}

void problem4(){
    //Global Constants Only, No Global Variables
    //Like PI, e, Gravity, or conversions
    const float A_MONTHLY_CHARGE=16.99,     //Package A monthly charge under 10 hours
                    A_ADDITIONAL_1=0.95,    //Pacakge A additional charge between 10-20 hours
                    A_ADDITIONAL_2=0.85,    //Package A additional charge over 20 hours
                    B_MONTHLY_CHARGE=26.99, //Package B monthly charge under 20 hours
                    B_ADDITIONAL_1=0.74,    //Pacakge B additional charge between 20-30 hours
                    B_ADDITIONAL_2=0.64,    //Package B additional charge over 30 hours
                    C_MONTHLY_CHARGE=36.99; //Package C monthly charge, unlimited hours
    //Declare all Variables Here
    char package;
    unsigned short hours; 
    float lowC, cost, aCost, bCost, cCost;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    lowC=50000;
    //Basic Charges
    //Pacakge A Charges
    if (hours<=10)                                                                  //Package A under 10 hours
    {
        aCost=A_MONTHLY_CHARGE;                                                     //Package A Calculation
    }
    else if (hours>10 && hours<=20)                                                 //Package A between 10-20 hours
    {
        aCost=(A_MONTHLY_CHARGE)+((hours-10)*A_ADDITIONAL_1);                       //Package A Calculation
    }
    else if (hours>20)                                                              //Package A over 20 hours
    {
        aCost=(A_MONTHLY_CHARGE)+(10*A_ADDITIONAL_1)+((hours-20)*A_ADDITIONAL_2);   //Package A Calculation
    }
    if (aCost<lowC)                                                                 //If package A is cheapest
    {
        lowC=aCost;                                                                 //Sets lowest cost to package
    }
    //Package B Charges
    if (hours<=20)                                                                  //Package B under 20 hours
    {
        bCost=B_MONTHLY_CHARGE;                                                     //Package B Calculation
    }
    if (hours>20 && hours<=30)                                                      //Package B between 20-30 hours
    {
        bCost=(B_MONTHLY_CHARGE)+((hours-20)*B_ADDITIONAL_1);                       //Package B Calculation
    }
    if (hours>30)                                                                   //Package B over 30 hours
    {
        bCost=(B_MONTHLY_CHARGE)+(10*B_ADDITIONAL_1)+((hours-30)*B_ADDITIONAL_2);   //Package B Calculation
    }
    if (bCost<lowC)                                                                 //If package B is cheapest
    {
        lowC=bCost;                                                                 //Sets lowest cost to package
    }
    //Package C Charges
    cCost=C_MONTHLY_CHARGE;                                                         //Package C, unlimited hours
    if (cCost<lowC)                                                                 //If package C is cheapest
    {
        lowC=cCost;                                                                 //Sets lowest cost to package
    }
    //Output the Charge
    switch (package)
    {
        //Package A Output
        case 'a':
        case 'A':
            cost=aCost;
            cout<<"$"<<fixed<<setprecision(2)<<aCost;
            break;
        //Package B Output
        case 'b':
        case 'B':
            cost=bCost;
            cout<<"$"<<fixed<<setprecision(2)<<bCost;
            break;
        //Package C Output
        case 'c':
        case 'C':
            cost=cCost;
            cout<<"$"<<fixed<<setprecision(2)<<cCost;
            break;
    }

    //Output the cheapest package and the savings
    if (lowC==aCost)                                                //Calculates and displays if package A is cheapest
    {
        cout<<" A $"<<fixed<<setprecision(2)<<(cost-lowC)<<endl;
    }
    if (lowC==bCost)                                                //Calculates and displays if package B is cheapest
    {
        cout<<" B $"<<fixed<<setprecision(2)<<(cost-lowC)<<endl;
    }
    if (lowC==cCost)                                                //Calculates and displays if package C is cheapest
    {
        cout<<" C $"<<fixed<<setprecision(2)<<(cost-lowC)<<endl;
    }
}

void problem5(){
    //Global Constants Only, No Global Variables
    //Like PI, e, Gravity, or conversions
    const float OVERTIME_PAY=1.5,           //Overtime pay between 20-40 hours
                OVERTIME_DOUBLE_PAY=2.0;    //Overtime pay over 40 hours
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
}

void problem6(){
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
}