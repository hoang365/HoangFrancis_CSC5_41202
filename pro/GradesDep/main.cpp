/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 12, 2016, 8:52 AM
     Purpose: Minutes and Seconds per Mile
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    int score;
    //Calculate or map inputs to outputs
   
    cout<<"Input your score:"<<endl;
    cin>>score;
    
    //Output the results
    if (score >= 90)
    {
        cout << "You got an A" << endl;
    }
    else if (score >= 80)
        cout << "You got a B" << endl;
    else if (score >= 70)
        cout << "You got a C" << endl;
    else if (score >= 60)
        cout << "You got a D" << endl;
    else 
        cout << "You got an F" << endl;

    //Exit stage right
    return 0;
}

