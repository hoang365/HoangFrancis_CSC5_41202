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
    const unsigned char nTerms =13;
    float etox=1,x; //e^x
    
    //input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    for(int n=1; n<=nTerms;n++){
        unsigned int factN=1;

      
        //Calculate the factorial
        for(int i=1;i<=n;i++){
            factN*=i;
        }
    //Calculate e^x with the above factorial    
        etox +=pow(x,n)/factN;
    }
    
        
    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
    
    
    //Exit stage right
    return 0;
}

