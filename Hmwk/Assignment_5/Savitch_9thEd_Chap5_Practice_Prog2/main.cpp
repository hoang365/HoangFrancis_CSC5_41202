/* 
    File:   main.cpp
    Author: Francis Hoang
    Created on February 4th, 2016, 9:39 AM
    Purpose:  Function to calculate average and standard deviation
 *            with a driver program
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input(float&, float&); //input
void convert(float, float, float&, float&); //converts
void output(float, float, float, float);    //output


//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed

    char yes;
    do{
    //Declare variables
        float ft, inches, meter, cm;
    //execute function
        input(ft, inches);
        convert(ft, inches, meter, cm);
        output(meter, cm ,ft, inches);
        
        
    cout<<"Repeat test?"<<endl;
    cin>>yes;
    
    }while(tolower(yes)=='y');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Input

//******************************************************************************
void input(float& ft, float& inches){
    
    cout<<"Enter the number of feet:"<<endl;
    cin>>ft;
    cout<<"Enter the number of inches:"<<endl;
    cin>>inches;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Convert
//Inputs:
//  n1,n2->feet and inches to be converted

//******************************************************************************
void convert(float ft, float inches, float& meter, float& cm){
    ft += inches/12.0f;
    meter = ft*.3048f;
    cout<<meter<<endl;
    cm = (meter-static_cast<unsigned int>(meter))*100.0f;
    meter =static_cast<unsigned int>(meter);

   
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Output



//******************************************************************************
void output(float meter, float cm ,float ft, float inches){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<ft<<" ft and "<<inches<<" inches is equal to "<<meter<<" meters and"
            " "<<cm<<" cm"<<endl;
}