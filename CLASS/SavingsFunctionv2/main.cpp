/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 4, 2016, 10:18 AM
     Purpose: Variations on savings theme
 */
//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
#include <cmath>   //Power/Exponential/Log functions
#include <cstdlib> //Rand and Srand functions
#include <ctime>   // Time function
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100; //Convert(decimal to percentage))

//Function prototypes
float save1(float,float,int); //power
float save2(float,float,int); //exponential and log
float save3(float,float,int); //for loops
float save4(float,float,int); //for loops banking with pennies
float save5(float,float,int); //recursion
float save6(float,int,float=0.05f); //defaulted save function
float save7(float,float,int); //for-loops and static variable
float save8(float,float,int,float&);
//Execution begins here

 

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    float pv=rand()%9001+1000;//[1000,10000] $'s
    float intRate=rand()%11+5;//[5,15]        %
    float nComp=rand()%16;//[0,15]           Years
    //output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The interest rate = "<<intRate<<"%"<<endl;
    cout<<"The number of years = "<<static_cast<int>(nComp)<<endl;
    
    //Calculate or map inputs to outputs
    
    //Output the results
    cout<<"The Savings using Power Function                     = $"
            <<save1(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using Exponential and Log Function       = $"
            <<save2(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For-Loops                          = $"
            <<save3(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For-Loops Banking Version          = $"
            <<save4(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using Recursion                          = $"
            <<save5(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using Exponential Defaulting Interest    = $"
            <<save6(pv,nComp,intRate/PERCENT)<<endl;
    cout<<"The Savings using Exponential Defaulting Interest 5% = $"
            <<save6(pv,nComp)<<endl;
    cout<<"The Savings using For Loop with a Static Counter     = $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For Loop with a Static Counter     = $"
            <<save7(pv,intRate/PERCENT,nComp)<<endl;
    float futrVal;
    save8(pv,intRate/PERCENT,nComp,futrVal);
    cout<<"The next function is a pass by reference"<<endl;
    cout<<"The Savings using a future reference                 = $"
            <<futrVal<<endl;
    //Exit stage right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using the power function
float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using the exponential and log function
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using the for loop
float save3(float p,float i,int n){
    for(int years =1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using the banking implementation
float save4(float p,float i,int n){
    int ip=p*100;//place value in pennies
    for(int years =1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip)/PERCENT;
    return p;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using recursion
float save5(float p,float i,int n){
    if(n==0)return p;//base condition
    return save5(p,i,n-1)*(1+i);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using recursion
float save6(float p,int n,float i){
    return p*pow((1+i),n);
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using the for loop
float save7(float p,float i,int n){
    static int nCalls=0;
    for(int years =1;years<=n;years++){
        p*=(1+i);
    }
    nCalls++;
    cout<<"This function save7 contains a static counter = "<<nCalls<<endl;
    return p;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//Input
//p->Present Value $'s
//i->Interest rate %
//n->Number of compounding periods
//Output
//pv->Future Value $'s
//Note: Using the banking implementation loop function with a pass by reference 
//variable
float save8(float p,float i,int n, float &fv){
    int ip=p*100;//place value in pennies
    for(int years =1;years<=n;years++){
        ip*=(1+i);
    }
    fv=static_cast<float>(ip)/PERCENT;
    
}
