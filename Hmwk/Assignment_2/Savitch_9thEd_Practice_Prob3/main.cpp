/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 12, 2016, 8:52 AM
     Purpose: Minutes and Seconds per Mile
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int MINUTES = 60; //minutes in an hour
const int SECONDS = 60; //seconds in a minute
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float mph; //miles per hour
    float min;   //minutes per mile
    float sec;   //seconds per mile
    int min0;   //minutes as an integer
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Enter the amount of mph: ";
    cin>>mph;
    min = MINUTES/mph;
    min0 = min;
    sec = (min - min0)*SECONDS; //subtracts the minutes to get the remainder
    
    
    //Output the results
    cout<<"You are going "<<min0<<" minutes and "<<sec<<" seconds per mile"<<endl; 
    //Exit stage right
    return 0;
}

