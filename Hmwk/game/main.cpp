/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 4, 2016, 10:18 AM
     Purpose: Game Project
 */
//System Libraries
#include <iostream> //I/O
#include <cstdlib>   //srand and rand functions
#include <ctime>    //time to set random number seed
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    unsigned short pHand,dHand; //player hand, dealer hand
    unsigned short card;        //card being dealt
    
  
    ofstream out;
    //open the file
    out.open("CardGame.dat");
    //Input data
    pHand = rand()%10+1;
    
    bet=bet<LIMIT?bet:LIMIT;//Ternary Operator
    
    
    
    //Output the results
    
    //Exit stage right
    out.close();
    return 0;
}

