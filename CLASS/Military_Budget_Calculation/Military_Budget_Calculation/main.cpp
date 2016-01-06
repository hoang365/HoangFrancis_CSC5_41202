/* 
     
     Author: Francis Hoang
     Created on January 6, 2016, 8:13 AM
     Purpose: Calculated Military Budget
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char cnvPerc=100;
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float milBdgt=6e11f;
    float fedBdgt=3.8e12f;
    float percMil;
         
    //Input data
    
    //Calculate or map inputs to outputs
    percMil=milBdgt/fedBdgt*cnvPerc;
    //Output the results
    cout<<"The Military budget = $"<<milBdgt<<endl;
    cout<<"The Federal budget = "<<fedBdgt<<endl;
    cout<<"The percentage of the Federal Budget attributed to the Military = ";
    cout<<percMil<<"%"<<endl;
    //Exit stage right
    return 0;
}

