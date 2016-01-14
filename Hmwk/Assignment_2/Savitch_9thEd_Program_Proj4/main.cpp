/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 13, 2016, 10:50 PM
     Purpose: Discount Installment loan
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const unsigned short MONTHS = 12; //12 months in a year
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float need;           //amount the consumer needs
    float rate;           //interest rate
    unsigned short nMonths; //duration of the loan in months
    float year;           //number of months calculated into year
    float fValue;         //face value need to get the loan
    float payment;        //monthly payments
    char input = 'y';           //user input
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    while(input == 'y' || input =='Y'){
        cout<<"How much money is requested?"<<endl;
        cin>>need;
        cout<<"What is the interest rate?"<<endl;
        cin>>rate;
        cout<<"What is the duration in months?"<<endl;
        cin>>nMonths;
        year = static_cast<float>(nMonths)/MONTHS;
        fValue = need/(1-rate*year);
        cout<<"The face value needed to get the requested amount is $"<<fValue<<endl;
        payment = fValue/nMonths;
        cout<<"The monthly payments are $"<<payment<<endl;
        
        
        
        cout<<"Enter y to repeat this, otherwise enter any key."<<endl;
        cin>>input;
    
    
    
    }
    //Output the results
    cout<<"Goodbye"<<endl;
    //Exit stage right
    return 0;
}

