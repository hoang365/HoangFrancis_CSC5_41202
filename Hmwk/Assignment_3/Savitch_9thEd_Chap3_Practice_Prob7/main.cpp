/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 6:11 AM
     Purpose: Finding the equivalent temperature of Celsius and Fahrenheit
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
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prac Prob7"<<endl;
    cout<<endl<<"Fahrenheit and Celsius"<<endl<<endl;
            
    //declare and initialize variables
    int celsius = 100, farHeit = (9*celsius)/5 + 32; //celsius, fahrenheit
    
    cout<<"Celsius   Fahrenheit"<<endl;
  
    //find the temperature where celsius and fahrenheit have the same number
    for(int i=100; celsius!=farHeit;i--){
        celsius = i;
        farHeit = (9*celsius)/5 + 32;
        cout<<celsius<<setw(10)<<farHeit<<endl<<endl;
    }
    
    //Exit stage right
    return 0;
}

