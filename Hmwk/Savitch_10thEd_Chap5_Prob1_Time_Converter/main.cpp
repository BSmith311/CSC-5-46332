/* 
 * Author: Brandon Smith
 * Created on July 19
 * Purpose: Convert military time to standard
 */
 
 //System Libraries
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 //Function Prototypes
 void input(int&,char,int&);            //Input Function
 void convert(int,char&,int&);          //Conversion Function
 void output(int,int,int,char);         //Output Function
 //Execution
 int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int mHours, mins, sHours;           //Military hours, Military minutes, Standard hours
    char colon, merid, choice;          //Colon, AM/PM, Choice
    
    //Map inputs to outputs
    cout<<"Military Time Converter to Standard Time"<<endl;             //Program Title
    cout<<"Input Military Time hh:mm"<<endl;                            //Initial input prompt, does not repeat
    do {                                                                //Program loop
        input(mHours, colon, mins);                                     //Calls Input Function
        convert(mHours, merid, sHours);                                 //Calls Conversion Function
        output(mHours,mins,sHours,merid);                               //Calls Output Function
        cout<<"Would you like to convert another time (y/n)"<<endl;     //Repeat program prompt
        cin>>choice;                                                    //Choice input
        } while (choice=='Y' or choice=='y');                           //Loops if choice is yes
    
    //Exit
    return 0;
 }
 
 //Void Functions
 void input(int& mHours,char colon, int& mins)                          //Input Function
 {
    cin>>mHours>>colon>>mins;                                           //Inputs
 }
 
 void convert(int mHours,char& merid, int&sHours)                       //Conversion Function
 {
    if (mHours==0){                                                     //If 00/12AM
        merid='A';                                                      //Sets to AM
        sHours=12;}                                                     //Sets to 12
    else if (mHours>0 && mHours<12){                                    //If 01/1AM-11/11AM
        merid='A';                                                      //Sets to AM
        sHours=mHours;}                                                 //Sets standard hours
    else if (mHours==12){                                               //If 12/12PM
        merid='P';                                                      //Sets to PM
        sHours=12;}                                                     //Sets to 12
    else if (mHours>11 && mHours<24){                                   //If 13/1PM-23/11PM
        merid='P';                                                      //Sets to PM
        sHours=(mHours-12);}                                            //Sets standard hours
 }
 
 void output(int mHours,int mins,int sHours,char merid)                 //Output Function
 {
    if (mHours<0 or mHours>23 or mins<0 or mins>60){                    //Invalid input output
    cout<<setw(2)<<std::setfill('0')<<mHours<<":"<<
          setw(2)<<std::setfill('0')<<mins<<
          " is not a valid time"<<endl;}
    else{                                                               //Outputs final results
    cout<<setw(2)<<std::setfill('0')<<mHours<<":"<<                     //Outputs Military hours
          setw(2)<<std::setfill('0')<<mins<<" = "<<                     //Outputs Minutes
          sHours<<":"<<                                                 //Outputs Standard hours
          setw(2)<<std::setfill('0')<<mins;                             //Outputs Minutes
    if (merid=='A'){                                                    //Outputs AM
        cout<<" AM"<<endl;}
    else if (merid=='P'){                                               //Outputs PM
        cout<<" PM"<<endl;}
    }
 }