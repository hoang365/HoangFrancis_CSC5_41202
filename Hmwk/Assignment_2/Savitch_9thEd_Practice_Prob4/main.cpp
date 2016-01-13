/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 12, 2016, 10:02 AM
     Purpose: Mad Libs
 */
//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    string insName, name, food, adjec, color, animal;
    int number;
    //Calculate or map inputs to outputs
    cout<<"Enter your instructor name: ";
    cin>>insName;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter a food: ";
    cin>>food;
    cout<<"Enter a number between 100 and 120: ";
    cin>>number;
    while(number <100 || number > 120){
        cout<<"Please enter a number between 100 and 120: ";
        cin>>number;
    }
    cout<<"Enter an adjective: ";
    cin>>adjec;
    cout<<"Enter a color: ";
    cin>>color;
    cout<<"Enter an animal: ";
    cin>>animal;
    
   
    
    
    //Output the results
    cout<<"Dear Instructor "<<insName<<","<<endl<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First,"<<endl;
    cout<<"I ate a rotten "<<food<<", which made me turn "<<color<<" and extremely ill. I"<<endl;
    cout<<"came down wih a fever of "<<number<<". Next, my "<<adjec<<" pet"<<endl;
    cout<<animal<<" must have smelled the remains of the "<<food<<" on my homework,"<<endl;
    cout<<"because he ate it. I am currently rewriting my homework and hope you"<<endl;
    cout<<"will accept it late."<<endl<<endl;
    cout<<"Sincerely,"<<endl;
    cout<<name<<endl;
    //Exit stage right
    return 0;
}

