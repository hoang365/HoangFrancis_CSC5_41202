/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 6:11 AM
     Purpose: Calculating Buoyancy of Spheres
 */
//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants
const float PI = 3.1415927f;
//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    cout<<endl<<"Soultion to Savitch 9thEd Chap3 Prac Prob6"<<endl;
    cout<<endl<<"Buoyancy"<<endl<<endl;
            
    //declare and initialize variables
    float weight, radius, volume; //weight in lbs, radius in ft, volume
    const float y=62.4f;  //weight in water
   //input the weight and radius
    cout<<endl<<"Enter the weight in lbs"<<endl;
    cin>>weight;
    cout<<endl<<"Enter the radius in ft"<<endl;
    cin>>radius;
    
    //calculate volume 
    volume = (4.0f*PI*pow(radius,3))/3.0f;
    cout <<"The volume is "<<volume<<" lbs/ft^3"<<endl;
    //check if it'll sink
    if (volume*y>=weight){
        cout<<"It's floating!"<<endl;
    }
    else{
        cout<<"It sank!"<<endl;
    }
    
    
    
    //Exit stage right
    return 0;
}

