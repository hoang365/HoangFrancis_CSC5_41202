/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 21, 2016, 11:37 AM
     Purpose: Savings
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
    cout<<endl<<"Fun look at savings and rule of 72"<<endl;
    cout<<endl<<"savings"<<endl<<endl;
            
    //declare and initialize variables
    float balance = 100.0f; //initial balance $'s
    float intRate=0.05f;    //interest rate/year
    float rule72=0.72f/intRate;           //rule of 72, future value = 2*present value
    float intErnd;
    
    //output of table heading
    cout<<"The interest rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this interest Principle should double every ";
    cout<<rule72<<" Years"<<endl;
    cout<<"Year Year Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    
    //calculate the savings
    
    for(int y =0,year =2016;y<=50;y++,year++){
        intErnd=balance*intRate;
        cout<<setw(4)<<y<<" "<<year<<setw(8)<<balance
            <<setw(9)<<intErnd<<endl;
        balance *=(1+intRate);   
    }
    
        
        
    
   
    //Exit stage right
    return 0;
}

