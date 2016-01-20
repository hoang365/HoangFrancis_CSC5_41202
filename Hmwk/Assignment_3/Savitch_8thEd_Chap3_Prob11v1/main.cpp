/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Multiple problems
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
       unsigned int n;
    unsigned int factN=1;
    
    //Input data
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cout<<"The limit of this calculation is <=13"<<endl;
    cin>>n;
    //Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=i;
    }
    //Output the results
    cout<<n<<"!= "<<factN<<endl;
    
    
    //The crud result is
    
    
    //Exit stage right
    return 0;
}

