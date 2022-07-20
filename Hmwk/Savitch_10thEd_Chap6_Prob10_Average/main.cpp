/* 
 * Author: Brandon Smith
 * Created on July 19
 * Purpose: Read 5 scores, drop lowest and average
 */
 
 //System Libraries
 #include <iostream>
 #include <iomanip>
 using namespace std;
 
 //Function Prototypes
 void getScore(int&,int&,int&,int&,int&);   //Function to get all scores
 float calcAvg(int,int,int,int,int);        //Function to calculate average
 int fndLwst(int,int,int,int,int);          //Function to find lowest score
 //Execution
 int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int scr1, scr2, scr3, scr4, scr5;                   //Scores 1-5
    float avg;                                          //Average
    //Output
    cout<<"Find the Average of Test Scores"<<endl<<     //Prompt
          "by removing the lowest value."<<endl;        //Prompt
    getScore(scr1, scr2, scr3, scr4, scr5);             //Calls function
    avg=calcAvg(scr1, scr2, scr3, scr4, scr5);          //Sets average value and calls function
    cout<<"The average test score = "<<                 //Final output prompt
            fixed<<setprecision(1)<<avg;                //Final output
    //Exit
    return 0;
}

//Functions
void getScore(int& scr1,int& scr2,int& scr3,int& scr4,int& scr5)    //Function to get inputs
{
    cout<<"Input the 5 test scores."<<endl;                         //Input prompt
    cin>>scr1>>scr2>>scr3>>scr4>>scr5;                              //Inputs
}

float calcAvg(int scr1,int scr2,int scr3,int scr4,int scr5)         //Function to calculate average
{
    int low;                                                        //Lowest score
    float result;                                                   //Result
    low=fndLwst(scr1, scr2, scr3, scr4, scr5);                      //Sets low value and calls function
    result=(scr1+scr2+scr3+scr4+scr5-low)/4;                        //Calculates result
    return result;                                                  //Returns result
}

int fndLwst(int scr1,int scr2,int scr3,int scr4,int scr5)           //Function to find lowest
{
    int low;                                                        //Lowest score
    low=100;                                                        //Default lowest score
    if (low>scr1){                                                  //If Score 1 is lowest
        low=scr1;}
    if (low>scr2){                                                  //If Score 2 is lowest
        low=scr2;}
    if (low>scr3){                                                  //If Score 3 is lowest
        low=scr3;}
    if (low>scr4){                                                  //If Score 4 is lowest
        low=scr4;}
    if (low>scr5){                                                  //If Score 5 is lowest
        low=scr5;}
    return low;
}