/* 
     
     Author: Francis Hoang
     Created on January 7, 2016, 10:54 AM
     Purpose: How far does it drop
 */
//System Libraries
#include <iostream> //I/O library
#include <cstdlib>  //random function library
#include <cmath>    //math functions
#include <ctime>    //time to set random seed
#include <iomanip>  //format library
#include <fstream>  //reading/wriing to a file
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=32.174f; // Sea level Earth Acceleration Constant ft/sec^2

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    ofstream out; //declared a file stream object called out
    float  drpTime,dstance;        //time in sec and distance in ft
    
    //input time with random number
    
    drpTime = rand()%11+10; // [10,20] seconds
    const int SIZE=21;
    char fileNam[SIZE]="Drop Distance.dat";
    out.open(fileNam);
    
    //calculate distance
    dstance = 0.5f*GRAVITY*drpTime*drpTime;
    //Output the results
    cout<<"Drop Time = "<<drpTime<<" sec"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint; //format to 3 decimal places
    cout<<"Free Fall Distance x2 = "<<setw(9)<<dstance<<" ft"<<endl;
    
    dstance = 0.5f*GRAVITY*pow(drpTime,2);
     
    cout<<"Free Fall Distance pow= "<<setw(9)<<dstance<<" ft"<<endl;
     
    dstance = 0.5f*GRAVITY*exp (2*log(drpTime));
     
    cout<<"Free Fall Distance exp(log)= "<<setw(10)<<dstance<<" ft"<<endl;
     
    //output results to a file
    out<<fixed<<setprecision(3)<<showpoint;
    out<<"Free Fall Distance = "<<setw(10)<<dstance<<" ft"<<endl;
    //Exit stage right
    out.close();
    return 0;
}

