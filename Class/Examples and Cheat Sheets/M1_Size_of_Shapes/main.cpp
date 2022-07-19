/* 
 * File:   main.cpp
 * Author: Brandon Smith
 * Created on July 14
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
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
    
    //Exit
    return 0;
}