/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 12, 2016, 8:32 AM
     Purpose: Babylonian square root
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
    float guess; //the initial guess
    float r;   //square root
    unsigned int n;     //number
    unsigned int count = 0; //number of times ran
    //Calculate or map inputs to outputs
    //cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Enter the number to find the square root of: ";
    cin>>n;
    guess = n/2;
    
    while (count != 100)
    {
        count+=1;
        r = n/guess;
        guess = (guess+r)/2;
    }
    //Output the results
    cout<<"The Babylonians believe the square root to be "<<guess<<endl;
    //Exit stage right
    return 0;
}

