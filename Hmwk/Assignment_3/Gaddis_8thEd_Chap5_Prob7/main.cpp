/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 8:58 AM
     Purpose: Salary Table
 *          Double is required bcause number of significant digits
 * Anything larger than $99,999.99 requires a double
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
    cout<<endl<<"Display a Salary Table"<<endl<<endl;
            
    //declare variables
    unsigned int salary = 1; //Salary starting at a penny
    float totPay = salary;            //Total Pay b summing the salary
   
    //Loop to generate the Salary Table and Total Paid
    cout<<" Day        $Salary         $Total"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(4)<<"1"<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
    for(int day=2;day<=31;day++){
        //salary*=2;
        salary<<=1; //bit shift right by 1 bit
        totPay+=salary;
        cout<<setw(4)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
    }
    //Exit stage right
    return 0;
}

