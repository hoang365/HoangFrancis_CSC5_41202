/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 13, 2016, 8:45 AM
     Purpose: Car loans
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float r;
    unsigned int n;
    unsigned int l;
    float p;
    float totalI;
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount: ";
    cin>>l;
    cout<<"Number of payments: ";
    cin>>n;
    cout<<"Interest rate: ";
    cin>>r;
    
    r /= 12;
    
    p = (r*pow(1+r,n)*l)/(pow(1+r,n)-1);
    totalI = p*n - l;
    //Output the results
    cout<<"Monthly Payment: $"<<p<<endl;
    cout<<"Total interest: $"<<totalI<<endl;
    //Exit stage right
    return 0;
}

