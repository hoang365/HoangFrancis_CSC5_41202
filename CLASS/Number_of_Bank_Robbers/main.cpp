/* 
     
     Author: Francis Hoang
     Created on January 6, 2016, 10:44 AM
     Purpose:How many does it take
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const char  wtBill=1; // weight in grams
const float cnvLbs=1.0f/453.5f; // conversion from grams to pounds

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
   
    unsigned int    amtStl;        //amount to steal
    unsigned short  denom;         //bill denomination
    unsigned char   wtPers=80;     //weight person can carry
    unsigned char   nPerps;        //number of perpetrators
   
    //Input the target amount of cash to steal
    cout<<"How much money would you like to acquire?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination desired?"<<endl;
    cin>>denom;
    
    //Calculate the number of fellow perpetrators
    nPerps = cnvLbs*amtStl*wtBill/denom/wtPers+1;
    //Output the results
    cout<<"Amout desired = $"<<amtStl<<endl;
    cout<<"Denomination desired = "<<denom<<endl;
    cout<<"Number of individuals required = "<< static_cast<int>(nPerps)<<endl;
    //Exit stage right
    return 0;
}

