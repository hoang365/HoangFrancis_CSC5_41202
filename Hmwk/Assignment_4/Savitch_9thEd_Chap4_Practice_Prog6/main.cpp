/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 24, 2016, 12:32 AM
     Purpose: Calculating interest on a credit card
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float intrst(float balance, float rate, unsigned int months);  //calculates the total interest due

//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 6"<<endl;
    cout<<endl<<"Calculating interest owed on a credit card"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float balance; //the initial balance
        float rate;    //monthly interest rate
        unsigned int months; //the number of months the interest must be paid
        float due;  //interest to be paid
        //Ask user the initial balance and the months to be paid for
        cout<<"Enter the initial balance:"<<endl;
        cin>>balance;
        cout<<"Enter the monthly interest rate:"<<endl;
        cin>>rate;
        cout<<"Enter the number of months for which interest must be paid:"<<endl;
        cin>>months;
        
        due = intrst(balance, rate, months); //calculate total interest to be paid
        
        //output
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The total interest to be paid for "<<months<<" months is "<<due<<" dollars.";
        
        //repeat?
        cout<<endl<<"Do you want to repeat?"<<endl;
        cin>>qstion;
    }while(toupper(qstion) == 'Y');  
    //Exit stage right
    return 0;
}

float intrst(float balance, float rate, unsigned int months){
    float intrst = balance*rate;
      float total = balance + intrst;
    float tIntrst = intrst; //total interest
   
    for(int i = 1; i < months; i++){
        intrst = total*rate;
        total += intrst;
        tIntrst += intrst;
    }
    return tIntrst;
}