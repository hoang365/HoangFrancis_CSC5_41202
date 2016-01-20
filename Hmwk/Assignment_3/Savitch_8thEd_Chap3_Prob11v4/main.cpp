/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Multiple problems
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
    //Declare and initialize variable for etox
    
    float etox=1,x; //e^x
    float tol = 1e-6f;
    float term = 1;
    unsigned int nTerm; //counter to determine how many terms
    //input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(nTerm=1;term > tol;term*=x/nTerm++, etox+=term);
    
        
    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The number of terms it took to aprox e^"<<x<<"="<<nTerm<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
    
    
    //Exit stage right
    return 0;
}

