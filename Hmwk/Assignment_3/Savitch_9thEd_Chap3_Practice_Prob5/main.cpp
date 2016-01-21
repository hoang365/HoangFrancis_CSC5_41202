/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 6:11 AM
     Purpose: Prime Numbers
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    cout<<endl<<"Soultion to Savitch 9thEd Chap3 Prac Prob5"<<endl;
    cout<<endl<<"Calculating Prime Numbers for 3 to 100"<<endl<<endl;
            
    //declare and initialize variables
    unsigned int prime = 3; //prime number
    unsigned int n = 2;     
    //print out prime numbers from 3 to 100
    while (prime <=100){
        for ( int i = 2; i <= prime; i++){
            n = i;
            if(n == prime ){
                cout<<prime<<endl;
            }
            else if(prime%n==0){
                i += prime;  //end the loop and check the next number
            }
           
            
        }
        prime++;
    }
   
    
    
    
    //Exit stage right
    return 0;
}

