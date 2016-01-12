/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 11, 2016, 11:11 AM
     Purpose: Calculate the jackpot amount after taxes
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float jackPot;
    float lumpSum;
    float aftcTax;
    float married;    
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"What is the jackpot amount?"<<endl;
    cin>>jackPot;
    lumpSum = jackPot*.62;
    aftcTax = lumpSum*.52;
    married = aftcTax*.5;
    //Output the results
    cout<<"The jackpot amount is "<<jackPot<<endl;
    cout<<"Your lump sum is "<<lumpSum<<endl;
    cout<<"The money you're getting after taxes is "<<aftcTax<<endl;
    cout<<"The money you're getting after marriage is "<<married<<endl;
    //Exit stage right
    return 0;
}

