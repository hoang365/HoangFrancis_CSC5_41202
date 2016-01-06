/* 
     
     Author: Francis Hoang
     Created on January 6, 2016, 10:44 AM
     Purpose:Quarters, Nickels, Dimes
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char cnvQrt=25; // cents per quarter
const char cnvDim=10; // cents per dime
const char cnvNic=5;  // cents per nickel
const char cnvPnDl=100; //conversion from pennies to dollars
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
   
    unsigned short  nQrts,nNic,nDim;      //number of quarters, dimes, and nickels
    unsigned short  total;      //total
   
    //Input the number of coins
    cout<<"How many quarters do you have?"<<endl;
    cin>>nQrts;
    cout<<"How many dimes do you have?"<<endl;
    cin>>nDim;
    cout<<"How many nickels do you have?"<<endl;
    cin>>nNic;
    //Calculate the total
    total = nQrts*cnvQrt+nDim*cnvDim+nNic*cnvNic;
    //Output the results
    cout<<"Number of quarters input = "<<static_cast<int>(nQrts)<<endl;
    cout<<"Number of dimes input = "<<static_cast<int>(nDim)<<endl;
    cout<<"Number of nickels input = "<<static_cast<int>(nNic)<<endl;
    cout<<"the dollar amount = $"<< 1.0f*total/cnvPnDl<<endl;
    //Exit stage right
    return 0;
}

