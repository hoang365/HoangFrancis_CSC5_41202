/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 23, 2016, 12:17 AM
     Purpose: Calculating Mileage
 */
//System Libraries
#include <iostream>


using namespace std;

//User Libraries

//Global Constants
const float LTOGAL = .264179f; //one liter is .264179 gallons
//Function prototypes
float mileage(float gas,float miles); //calculates the mileage
//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 1"<<endl;
    cout<<endl<<"Calculating Mileage"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float gas;    //liters of gas consumed by car
        float miles;  //miles traveled by car
        float mpg;    //miles per gallon
       
        //Ask user how many liters of gas was consumed, and how many miles
        cout<<"How much gas in liters was consumed?"<<endl;
        cin>>gas;
        cout<<"How many miles were traveled?"<<endl;
        cin>>miles;
    
        //calculate the mileage
        mpg = mileage(gas,miles);
    
        //output
        cout<<"Your mileage was "<<mpg<<" miles per gallon."<<endl;
    
        //repeat?
        cout<<endl<<"Do you want to repeat?"<<endl;
        cin>>qstion;
    }while(toupper(qstion) == 'Y');  
    //Exit stage right
    return 0;
}

float mileage(float gas, float miles){
    
    return miles/(gas*LTOGAL);
    
}