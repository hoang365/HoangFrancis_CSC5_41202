/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 13, 2016, 10:14 AM
     Purpose: Max capacity
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int maxCap; //max capacity of the room
    unsigned int numPeop; //number of people attending the meeting
    unsigned int remain; //remaining people that can attend
    //Calculate or map inputs to outputs
    cout<<"What is the max capacity of the room?"<<endl;
    cin>> maxCap;
    cout<<"How many people are attending?"<<endl;
    cin>>numPeop;
    
    
    
    //Output the results
   if(numPeop <= maxCap){
        cout<<"It is legal to hold the meeting"<<endl;
        remain = maxCap - numPeop;
        if(remain == 1){
            cout<<"1 more person may attend"<<endl;
        }
        else{
        cout<<remain<<" more people may attend"<<endl;
        }
    }
    else{
        cout<<"The meeting cannot be held due to fire regulations"<<endl;
        remain = numPeop - maxCap;
        if(remain == 1){
            cout<<"1 persons must leave in order to meet regulations"<<endl;
        }
        else {
        cout<<remain<<" people must leave in order to meet regulations"<<endl;
        }
    }
    //Exit stage right
    return 0;
}

