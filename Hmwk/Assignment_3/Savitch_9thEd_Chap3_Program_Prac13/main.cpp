/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 6:11 AM
     Purpose: Batman Riddle
 */
//System Libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prog Prac13"<<endl;
    cout<<endl<<"Solving a Riddler riddle"<<endl<<endl;
            
    //declare and initialize variables
    unsigned short ones; //has to be odd
    unsigned short tens; //all four digits are different
    unsigned short hundrds;//sum of digits is 27
    unsigned short thsnds;//3*tens
    unsigned short sum; //checks the sum
    //solving the riddle
    cout<<"The Riddler's address is:"<<endl;
    cout<<"A: All 4 digits are different."<<endl;
    cout<<"B: The digit in the thousands place is three times the digit in the tens place."<<endl;
    cout<<"C: The number is odd."<<endl;
    cout<<"D: The sum of the digits is 27."<<endl;
    
    do{
        do{
           ones = rand() % 10; 
        }while(ones%2 == 0);
        
        do{
            tens=rand()%10;
            hundrds = tens*3;
        }    while(tens == ones || hundrds > 9);
        do{
            thsnds =rand()%9 +1;
        }while (thsnds == ones || thsnds == tens || thsnds ==hundrds);
       
        
        sum = ones+tens+hundrds+thsnds; 
        
    
    }while(sum != 27);
    
    
    
    cout<<"The Riddler's address is "<<thsnds<<hundrds<<tens<<ones<<" Pennsylvania Avenue."<<endl;    
    
        
    
    
    //Exit stage right
    return 0;
}

