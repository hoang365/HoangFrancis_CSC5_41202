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
    switch(score)
{
	case 0 ... 59 : cout <<"You got an F"<<endl;
	break;
	case 60 ...  69 : cout <<"You got a D"<<endl;
	break;
	case 70 ... 79 : cout <<"You got a C"<<endl;
	break;
	case 80 ... 89 : cout <<"You got a B"<<endl;
	break;
	case 90 ... 100: cout <<"You got an A"<<endl;
	break;
}
    //Exit stage right
    return 0;
}

