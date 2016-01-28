/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 28, 2016, 9:46 AM
     Purpose: mvc model view genesis
 */
//System Libraries
#include <iostream>
#include <iomanip>


using namespace std;

//User Libraries

//Global Constants
const char PERCENT = 100;
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float pv=100.0; //present value in Dollars $'s
    int iRate=6;  //interest rate in percent 
    int nComp=12; //number of compounding periods in years
    float fv=pv;  //future value
    
    //output heading
    cout<<endl<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        int ifv=(fv+0.005)*PERCENT;
        fv=static_cast<float>(ifv)/PERCENT;
        cout<<setw(4)<<year<<setw(7)<<fv<<endl;
        fv*=(1+static_cast<float>(iRate)/PERCENT);
    }
    
    //the MVC concept seperates the view from the model
    //Declare array and initialize
    float balance[nComp+1];
    balance[0]=pv;
    
    //Calculate the array
    for(int year=0;year<nComp;year++){
        int ifv=(balance[year]+ 0.005)*PERCENT;
        balance[year] = static_cast<float>(ifv)/PERCENT;
        balance[year+1]=balance[year]*(1+static_cast<float>(iRate)/PERCENT);
        
    }
    
    //Display or view of the model
    cout<<endl<<"Year Savings"<<endl;
    for(int year=0;year<=nComp;year++){
        
        cout<<setw(4)<<year<<setw(7)<<balance[year]<<endl;
     
    }
    //Exit stage right
    return 0;
}

