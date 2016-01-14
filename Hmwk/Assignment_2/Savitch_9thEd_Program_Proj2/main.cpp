/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 13, 2016, 10:50 PM
     Purpose: Pay increase
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
    const float PAYRATE = .076; //pay rate increase
    float oldSal; //old annual salary
    float newSal; //new annual salary
    float retroSa; //retroactive salary due
    float monthSa; //new monthly salary
    char input = 'y'; //user input
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    while(input == 'y' || input =='Y'){
        cout<<"Enter previous annual salary: ";
        cin>>oldSal;
        newSal = oldSal*PAYRATE + oldSal;
        cout<<"New annual salary is $"<<newSal<<endl;
        monthSa = newSal/12;
        cout<<"New monthly salary is $"<<monthSa<<endl;
        retroSa = monthSa*6 - (oldSal/12)*6;
        cout<<"Money owed for the previous six months is $"<<retroSa<<endl;
        cout<<"Enter y to repeat this, otherwise enter any key."<<endl;
        cin>>input;
    
    
    
    }
    //Output the results
    cout<<"Goodbye"<<endl;
    //Exit stage right
    return 0;
}

