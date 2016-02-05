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
void problem3();
void problem4();
void problem5();
void tInput(unsigned int&, unsigned int&, unsigned int&);     //input
void timeCon(unsigned int&, char&);                           //convert time 
void tOutput(unsigned int, unsigned int, unsigned int, char); //output
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
                case 3:{                    
                    problem3();break;
                }
                case 4:{                    
                    problem4();break;
                }
                case 5:{                    
                    problem5();break;
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
void problem3(){
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
void problem4(){
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
void problem5(){
                    cout<<endl<<"Solution to Savitch 9thEd Chap5 Prog Project 1"
                            <<endl;
                    cout<<endl<<"Convert time from 24-hour notation to 12-hour "
                            "notation"<<endl<<endl;

                    char yes;
                    do{
                    //Declare variables
                        unsigned int oHour,hour; //initial hour, hours
                        unsigned int min;        //mins
                        char meri;          //AM PM
                    //execute function
                        tInput(hour, min, 
                                oHour); //input time in 24-hour notation
                        timeCon(hour, meri);      //converts time
                        tOutput(hour, min, oHour, 
                                meri); //output time in 12-hour notation
                        cout<<"Repeat test?"<<endl;
                        cin>>yes;
                    }while(tolower(yes)=='y');
    
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//       /               Input Time

//******************************************************************************
void tInput(unsigned int& hour,unsigned int& min,unsigned int& oHour){
    cout<<"Enter the time (HH MM)"<<endl;
    cin>>hour>>min;
    while(hour>23 || min>59){
        cout<<"Please enter a valid time:"<<endl;
        cin>>hour>>min;
    }
    oHour = hour;
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      convert time

//******************************************************************************
void timeCon(unsigned int& hour, char& meri){
    if(hour>=12){
        meri = 'P';
        if(hour > 12){
            hour -= 12;
        }
    }else if(hour ==0){
        meri = 'A';
        hour = 12;
    }else{
        meri = 'A';
    }
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      output time

//******************************************************************************
void tOutput(unsigned int hour, unsigned int min, unsigned int oHour,
        char meri){
    cout<<oHour<<":";
    if(min<10){
        cout<<"0"<<min;
    }else{
        cout<<min; 
    }
    cout<<" is "<<hour<<":";
    if(min<10){
        cout<<"0"<<min;
    }else{
        cout<<min; 
    }
    if(meri == 'A'){
        cout<<" AM"<<endl;
    }
    else{
        cout<<" PM"<<endl;
    }
}