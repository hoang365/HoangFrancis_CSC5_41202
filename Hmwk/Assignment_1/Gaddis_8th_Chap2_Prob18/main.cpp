/* 
     
     Author: Francis Hoang
     Created on January 6, 2016, 10:05 AM
     Purpose:Calculate number of energy drinkers
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
    unsigned short cstSrvy=16500;  //Customers surveyed
    unsigned char  peDrnk=15;      //percentage surveyed energy drinkers
    unsigned char  pcDrnk=58;      //percentage surveyed energy citrus drinkers
    unsigned short neDrnk,ncDrnk;  //number of energy drinkers and citrus drinkers  
    //Input data
    
    //Calculate the number of drinkers
    neDrnk=cstSrvy*peDrnk/cnvPerc; 
    ncDrnk=neDrnk*pcDrnk/cnvPerc;
    //Output the results
    cout<<"Number of customers surveyed = "<<cstSrvy<<endl;
    cout<<"Percentage of energy drinkers = "<<static_cast<int>(peDrnk)<<endl;
    cout<<"Percentage of energy citrus drinkers = "<<static_cast<int>(pcDrnk)<<endl;
    cout<<"Number of energy drinkers = "<<neDrnk<<endl;
    cout<<"Number of energy citrus drinkers = "<<ncDrnk<<endl;
    
    //Exit stage right
    return 0;
}

