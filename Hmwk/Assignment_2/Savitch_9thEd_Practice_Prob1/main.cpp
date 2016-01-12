/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 12, 2016, 8:02 AM
     Purpose: Convert from ounces to metric tons
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int TON_TO_OZ = 35273.92; //1 metric ton is 35273.92 oz
//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    float cereal; //cereal in oz
    float cTon;   //cereal in tons
    int nBox;     //number of boxes
    char input; //user input
    //Calculate or map inputs to outputs
    //cout<<fixed<<setprecision(2)<<showpoint;
    do
    {
        cout<<"Please enter the amount of oz in your cereal box: "<<endl;
        cin>>cereal;
        cTon = cereal/TON_TO_OZ;
        nBox = TON_TO_OZ/cereal;
        if(nBox == 0){
            nBox = 1;
        }
        cout<<"The amount of cereal in metric tons is "<<cTon<<endl;
        cout<<"The amount of boxes that would make 1 metric ton is "<<nBox<<endl;
        cout<<"Press y if you would like to make another calculation"<<endl;
        cin>>input;
    } while(input == 'y' | input == 'Y');
    //Output the results
    cout<<"Goodbye"<<endl;
    //Exit stage right
    return 0;
}

