/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 8:58 AM
     Purpose: Rock Paper Scissors
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
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
    cout<<endl<<"Display a Temperature Table"<<endl<<endl;
            
    //declare variables
    float slope=5.0f/9;
    char intrcpt=-32;
    unsigned char c1=0,c2=100,f1=32,f2=212; //data pts of freezing and boiling
   
    //Loop to generate the degree Celsius and output the table
    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int f=f1;f<=f2;f++){
        float ceq=slope*(f+intrcpt);
        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
    }
    //Exit stage right
    return 0;
}

