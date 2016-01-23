/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 23, 2016, 12:17 AM
     Purpose: Calculating Stocks
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float value(int price, int num, int denom);
//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 3"<<endl;
    cout<<endl<<"Calculating Stocks"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        unsigned int shares;    //number of shares
        unsigned int wPrice;   //whole dollar portion of the price
        unsigned int num;    //numerator of the fraction portion of the price
        unsigned int denom;   //denominator of the fraction portion of the price
        float total; //value of one's entire holdings
        //Ask user how many shares of stocks they own, and its price value in fractions
        cout<<"How many shares of stock do you own?"<<endl;
        cin>>shares;
        cout<<"What is its whole dollar price value?"<<endl;
        cin>>wPrice;
        cout<<"What is the numberator price value?"<<endl;
        cin>>num;
        cout<<"What is denominator price value?"<<endl;
        cin>>denom;
        total =shares * value(wPrice,num,denom); //calculate total value
        
        //output
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The value of your entire holdings is "<<total<<" dollars."<<endl;  
        //repeat?
        cout<<endl<<"Do you want to repeat?"<<endl;
        cin>>qstion;
    }while(toupper(qstion) == 'Y');  
    //Exit stage right
    return 0;
}

float value(int price, int num, int denom){
    
    return (price + (static_cast<float>(num)/denom));
    
}