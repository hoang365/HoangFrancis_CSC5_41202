/* 
    File:   main.cpp
    Author: Francis Hoang
    Created on February 4th, 2016, 9:39 AM
    Purpose:  Function to calculate average and standard deviation
 *            with a driver program
 */

//System Libraries
#include <iostream> //I/O
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void sDevi(float, float, float, float); //standard deviation
float getAvg(float, float, float, float); //gets the average
float getVar(float, float, float, float, float);    //gets the variance


//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    char yes;
    do{
    //Declare variables
    float s1=rand() % 100 + 1;
    float s2=rand() % 100 + 1;
    float s3=rand() % 100 + 1;
    float s4=rand() % 100 + 1;
    
    //execute function
    sDevi(s1,s2,s3,s4);
    cout<<"Repeat test?"<<endl;
    cin>>yes;
    
    }while(tolower(yes)=='y');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      standard deviation
//Inputs:
//  s1,s2,s3,s4 -> scores
//Outputs:
//  avg-> average
//  sd -> standard deviation
//******************************************************************************
void sDevi(float s1, float s2, float s3, float s4){
    float avg = getAvg(s1,s2,s3,s4);
    float var = getVar(s1,s2,s3,s4 ,avg);
    float sd = sqrt(var);
    cout<<"From the scores of "<<s1<<", "<<s2<<", "<<s3<<", and "<<s4<<":"
            <<endl;
    cout<<"The average is "<<avg<<"."<<endl;
    cout<<"The standard deviation is "<<sd<<"."<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Average
//Inputs:
//  s1,s2,s3,s4->numbers to be calculated

//******************************************************************************
float getAvg(float s1, float s2, float s3, float s4){
    return (s1+s2+s3+s4)/4;
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Fill Array
//Inputs:
//  s1,s2,s3,s4 -> scores


//******************************************************************************
float getVar(float s1, float s2, float s3, float s4, float a){
    return (pow(s1-a,2)+pow(s2-a,2)+pow(s3-a,2)+
            pow(s4-a,2))/4;
}