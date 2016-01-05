/* 
     Author: Francis Hoang
     Created on January 5, 2016, 9:30 AM
     Purpose: Calculate Paycheck, Straight Time
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
    unsigned char hrsWrkd = 40; //hours worked (hrs)
    float payRate = 1e1f;  // Pay Rate in $
    
    //Input data
    
    //Calculate or map inputs to outputs
    float payChk = payRate*hrsWrkd;
    //Output the results
    cout<<"Pay Rate     = $"<<payRate<<"'s/hr"<<endl;
    cout<<"Hours Worked = "<<static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check    = $"<<payChk <<endl;
    
    //Exit stage right
    return 0;
}

