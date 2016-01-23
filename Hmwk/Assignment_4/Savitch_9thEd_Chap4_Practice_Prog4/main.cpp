/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 23, 2016, 12:17 AM
     Purpose: Calculating Rate of Inflation
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float rate(float old, float n);  //calculates the rate of inflation
//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 4"<<endl;
    cout<<endl<<"Calculating Rate of Inflation"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float oPrice;    //price from 1 year ago
        float cPrice;   //current price
        float roi;    //rate of inflation
        
        //Ask user the prices
        cout<<"Enter the old price:"<<endl;
        cin>>oPrice;
        cout<<"Enter the current price:"<<endl;
        cin>>cPrice;
        
        roi = rate(oPrice,cPrice); //calculate total value
        
        //output
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The rate of inflation is "<<roi*100.0f<<" percent."<<endl;  
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