/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Multiple problems
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;
    bool reDspl = true;  //exit program when false
    
    //Input data
    do{
        
    
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Problem 1"<<endl;
        cout<<"Type 2 to Display Problem 2"<<endl;
        cout<<"Type 3 to Display Problem 3"<<endl;
        cout<<"Type 4 to Display Problem 4"<<endl;
        cout<<"Type 5 to Display Problem 5"<<endl;
        cout<<"Type 6 to Display Problem 6"<<endl;
        cout<<"Type 7 to Display Problem 7"<<endl;
        cout<<"Type 8 to Display Problem 8"<<endl;
        cout<<"Type 9 to Display Problem 9"<<endl;
        cout<<"Type 10 to Display Problem 10"<<endl;
        cout<<"Type anything else to exit "<<endl;
        cin>>nSoltn;
    
    //menu to display solution
        
            switch(nSoltn){
                case 1:{
                    problem1();break;
                }
                case 2:{
                    
                    problem2();break;
                }
                
                
                
                default:{
                    cout<<"Exiting the Program"<<endl;
                    reDspl=false;
                }
            }
        
    }while(reDspl);
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right
    return 0;
}

void problem1(){
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
}

void problem2(){
                    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
                    cout<<endl<<"Display a Temperature Table"<<endl<<endl;

                    //declare variables
                    float slope=5.0f/9;
                    char intrcpt=-32;
                    unsigned char c1=0,c2=100,f1=32,f2=212; //data pts of freezing and boiling

                    //Loop to generate the degree Celsius and output the table
                    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    for(int f=f1;f<=f2;f++){
                        float ceq=slope*(f+intrcpt);
                        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                    }
}