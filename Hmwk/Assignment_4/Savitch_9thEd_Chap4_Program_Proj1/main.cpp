/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 24, 2016, 12:32 AM
     Purpose: Calculate after-tax cost of a house
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
float mortg(float loan, float intr);
float afTax(float mortg, float tSav);

//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Program Proj1"<<endl;
    cout<<endl<<"Calculating after-tax cost of a new house after one year"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float price;         //price of the house
        float down;          //down payment
        float atCost;        //after tax cost = annual mortgage cost - tax savings
        float amCost;        //annual mortgage cost = .03*initial loan balance + .06*initial loan balance(interest)
        float tSave;         //tax savings = .35* interest payment
        float i;             //interest
        float loan;          //loan balance = price - down payment
        
        //Ask user the price of the house and the down payment
        cout<<"Enter the price of the house:"<<endl;
        cin>>price;
        cout<<"Enter the down payment:"<<endl;
        cin>>down;
        
        loan = price - down;
        i = .06f*loan;
        amCost = mortg(loan, i);
        tSave = .35f*i;
        atCost = afTax(amCost, tSave);
        
        
        //output
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The loan balance is "<<loan<<" dollars."<<endl;
        cout<<"The interest payments is "<<i<<" dollars."<<endl;
        cout<<"The annual mortgage cost is "<<amCost<<" dollars."<<endl;
        cout<<"The tax savings is "<<tSave<<" dollars."<<endl;
        cout<<"After taxes, the cost of the house is "<<atCost<<" dollars."<<endl;
        //repeat?
        cout<<endl<<"Do you want to repeat?"<<endl;
        cin>>qstion;
    }while(toupper(qstion) == 'Y');  
    //Exit stage right
    return 0;
}

float mortg(float loan, float intr){
    
    return .03f*loan + intr;
}

float afTax(float mortg, float tSav){
    return mortg -tSav;
}