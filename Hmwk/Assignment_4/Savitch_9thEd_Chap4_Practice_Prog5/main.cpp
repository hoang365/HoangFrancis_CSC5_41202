/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 24, 2016, 12:32 AM
     Purpose: Calculating Rate of Inflation in the future
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float rate(float old, float n);  //calculates the rate of inflation
float fRate(float rate, float price);                  //calculates future rate
//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 5"<<endl;
    cout<<endl<<"Calculating Rate of Inflation in 2 years"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float oPrice;    //price from 1 year ago
        float cPrice;   //current price
        float roi;    //rate of inflation
        float fPrice; //future price
        //Ask user the prices
        cout<<"Enter the old price:"<<endl;
        cin>>oPrice;
        cout<<"Enter the current price:"<<endl;
        cin>>cPrice;
        
        roi = rate(oPrice,cPrice); //calculate rate of interest
        fPrice = cPrice + fRate (roi,cPrice);
        //output
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The rate of inflation is "<<roi*100.0f<<" percent."<<endl;
        cout<<"In one year, the price will increase by "<<fRate(roi,cPrice)<<" dollars and be "<<fPrice<<" dollars."<<endl;
        cout<<"In two years, the price will increase by "<<fRate(roi,fPrice)<<" dollars and be "<<fPrice + fRate(roi,fPrice)<<" dollars."<<endl;
        
        //repeat?
        cout<<endl<<"Do you want to repeat?"<<endl;
        cin>>qstion;
    }while(toupper(qstion) == 'Y');  
    //Exit stage right
    return 0;
}

float rate(float o, float n){
    
    return (n-o)/o;
    
}

float fRate(float roi, float price){
    return roi*price;
}