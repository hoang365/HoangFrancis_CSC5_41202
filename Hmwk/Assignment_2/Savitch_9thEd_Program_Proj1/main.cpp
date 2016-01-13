/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 13, 2016, 7:54 AM
     Purpose: Avoiding death by Soda pop
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int KMOUSE = 5; //5 grams of artificial sweetener needed to kill mouse
const int MMASS = 35; //mouse is 35 grams
const int DIETER = 45400; //weight of 100 lb person in grams
const int SODA = 350; //single can of soda in grams
const float ASWEET = .001; //amount of artificial sweetener in soda
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float weight; //weigh to stop diet at
    char input; //user's input to stop the program
    float kill; //amount of sweetener that will kill you
    float sSweet = SODA*ASWEET; //amount of sweetener in one can of soda
    unsigned int nSoda;   //amount of soda that'll kill you
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    do{
    cout<<"What weight in grams do you want stop your diet at?"<<endl;
    cin>>weight;
    kill = weight*KMOUSE/MMASS;
    cout<<kill<<" grams of artificial sweetener will kill you"<<endl;
    cout<<"There is "<<sSweet<<" grams of artificial sweetener in one can of soda."<<endl;
    nSoda = kill/sSweet;
    cout<<"Drinking "<<nSoda<<" cans of soda will kill you"<<endl;
    
    cout<<"Enter y if you would like to repeat this, otherwise enter any key"<<endl;
    cin>>input;
          
    }while(input == 'y' || input =='Y');
   
    
    
    //Output the results
    cout<<
    //Exit stage right
    return 0;
}

