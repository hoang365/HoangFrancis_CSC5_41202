/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 4, 2016, 10:18 AM
     Purpose: Check out IDE
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

int pow(const int &,const int &);

int main(int argc, char** argv) {
    //Declare and initialize variables
    int x; //Base of the problem
    int y; //Exponent of the problem
    int z; //The result of a^b
    
    //timing variables
    int begi,endi,begd,endd,loop=100000000; //beginning and ending of the integer vs. double function
    //Input data
    cout<<"Input a and b i.e. for a^b?"<<endl;
    cin>>x>>y;
    //Calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    //Output the results
    cout<<"Our result:"<<endl;
    cout<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"The total time taken = "<<endi-begi<<"(secs)"<<endl;
    //compare our function with cmath
    double dx = x; // copy into a double
    double dy = y; //copy into a double
    double dz;
    
    //call math library function
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    //output the results
    cout<<"Their result:"<<endl;
    cout<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"The total time taken = "<<endd-begd<<"(secs)"<<endl;
    
    //Exit stage right
    return 0;
}
//******************************************************************************

int pow( int a, int b){
    if(b<=0) return 1;
    if(b==1) return a;
    int abd2 = pow(a,b/2);
    if(b%2)return abd2*abd2*a;//if even
    return abd2*abd2;     //else odd
        
    
}