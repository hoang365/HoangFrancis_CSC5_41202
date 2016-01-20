/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Calculate pi
 */
//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variable for pi
    
    float pi = 4, n, piValue; 
    //input the value x
    cout<<"Input n for how many values of pi"<<endl;
    cin>>n;
    
    for(int i = 0; i<=n;i++){
         piValue += pow(-1,i)/(2*i+1);
        
    }
    //Calculate pi
    pi *= piValue;
    
        
    //Output the results
    
    cout<<"The approximate value of pi calculated to "<<n<<" terms is "<<pi<<endl<<endl;
    
    
    //Exit stage right
    return 0;
}

