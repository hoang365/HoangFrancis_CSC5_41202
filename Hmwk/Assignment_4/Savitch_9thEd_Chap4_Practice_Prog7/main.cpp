/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 24, 2016, 12:32 AM
     Purpose: Calculate the gravitation force between two objects
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
const float G = 6.673e-8;
//Function prototypes
float force(float mass1, float mass2, float distnce);  //calculates the gravitational force between two objects

//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 7"<<endl;
    cout<<endl<<"Calculating gravitational force"<<endl<<endl;
    char qstion;  //ask the user to repeat?
    do{            
        //declare and initialize variables
        float mass1;    //the first object's mass
        float mass2;    //the second object's mass
        float d;        //distance between the two objects
        float grav;    //gravitational force
        //Ask user the two objects' mass and distance
        cout<<"Enter the first object's mass:"<<endl;
        cin>>mass1;
        cout<<"Enter the second object's mass:"<<endl;
        cin>>mass2;
        cout<<"Enter the distance between the two objects:"<<endl;
        cin>>d;
        
        grav = force(mass1, mass2, d); //calculate gravitational force
        
        //output
        //cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The gravitational force is "<<grav<<" dynes.";
        
        //repeat?
        cout<<endl<<"Do you want to repeat?"<<endl;
        cin>>qstion;
    }while(toupper(qstion) == 'Y');  
    //Exit stage right
    return 0;
}

float force(float mass1, float mass2, float d){
    float force = (G*mass1*mass2)/(d*d);
    return force;
}