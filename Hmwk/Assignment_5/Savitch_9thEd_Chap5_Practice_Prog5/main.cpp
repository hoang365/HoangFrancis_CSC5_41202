/* 
    File:   main.cpp
    Author: Francis Hoang
    Created on February 4th, 2016, 9:39 AM
    Purpose:  Function to convert pounds and ounces to kilograms and grams
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
        float lb, oz, kg, g;
    //execute function
        input(lb, oz);
        convert(lb, oz, kg, g);
        output(lb, oz ,kg, g);
        
        
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
void input(float& lb, float& oz){
    
    cout<<"Enter the number of pounds:"<<endl;
    cin>>lb;
    cout<<"Enter the number of ounces:"<<endl;
    cin>>oz;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Convert
//
// 

//******************************************************************************
void convert(float lb, float oz, float& kg, float& g){
    lb += oz/16.0f;
    kg = lb/2.2046f;
    g = (kg-static_cast<unsigned int>(kg))*1000.0f;
    kg =static_cast<unsigned int>(kg);

   
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Output



//******************************************************************************
void output(float lb, float oz ,float kg, float g){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<lb<<" pounds and "<<oz<<" ounces is equal to "<<kg<<" kilograms and"
            " "<<g<<" grams"<<endl;
}