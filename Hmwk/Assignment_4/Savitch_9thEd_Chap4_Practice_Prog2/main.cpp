/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 23, 2016, 12:17 AM
     Purpose: Calculating Mileage and Comparing
 */
//System Libraries
#include <iostream>


using namespace std;

//User Libraries

//Global Constants
const float LTOGAL = .264179f; //one liter is .264179 gallons
//Function prototypes
float mileage(float gas,float miles); //converts liters to gallons
//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 2"<<endl;
    cout<<endl<<"Calculating Mileage and Comparing"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float gas;    //liters of gas consumed by car
        float miles;  //miles traveled by car
        float mpg;    //miles per gallon of the first car
        float mpg2;   //miles per gallon of the second car
        //Ask user how many liters of gas was consumed, and how many miles
        cout<<"How much gas in liters was consumed by Car A?"<<endl;
        cin>>gas;
        cout<<"How many miles were traveled by the Car A?"<<endl;
        cin>>miles;
        mpg = mileage(gas,miles); //calculate mileage of the first car
        
        
        cout<<"How much gas in liters was consumed by the Car B?"<<endl;
        cin>>gas;
        cout<<"How many miles were traveled by the Car B?"<<endl;
        cin>>miles;
        mpg2 = mileage(gas,miles);  //calculate mileage of the second car
        
    
        //output
        cout<<"The mileage of car A was "<<mpg<<" miles per gallon."<<endl;
        cout<<"The mileage of car B was "<<mpg2<<" miles per gallon."<<endl;
        
        if(mpg>mpg2){
            cout<<"Car A has better fuel efficiency."<<endl;
        }else{
            cout<<"Car B has better fuel efficiency."<<endl;
        }
    
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