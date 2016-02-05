/* 
    File:   main.cpp
    Author: Francis Hoang
    Created on February 4th, 2016, 9:39 AM
    Purpose:  Converts from 24 hour notation to 12 hour notation
 */

//System Libraries
#include <iostream> //I/O

using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void tInput(unsigned int&, unsigned int&, unsigned int&);     //input
void timeCon(unsigned int&, char&);                           //convert time 
void tOutput(unsigned int, unsigned int, unsigned int, char); //output 
                                                                                                    



//Execution Begins Here
int main(int argc, char** argv) {
    
    char yes;
    do{
    //Declare variables
        unsigned int oHour,hour,min; //initial hour, hour, minutes
        char meri;          //AM PM
    //execute function
        tInput(hour, min, oHour); //input time in 24-hour notation
        timeCon(hour, meri);      //converts time
        tOutput(hour, min, oHour, meri); //output time in 12-hour notation
        cout<<"Repeat test?"<<endl;
        cin>>yes;
    }while(tolower(yes)=='y');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//       /               Input Time

//******************************************************************************
void tInput(unsigned int& hour,unsigned int& min,unsigned int& oHour){
    cout<<"Enter the time (HH MM)"<<endl;
    cin>>hour>>min;
    while(hour>23 || min>59){
        cout<<"Please enter a valid time:"<<endl;
        cin>>hour>>min;
    }
    oHour = hour;
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      convert time

//******************************************************************************
void timeCon(unsigned int& hour, char& meri){
    if(hour>=12){
        meri = 'P';
        if(hour > 12){
            hour -= 12;
        }
    }else if(hour ==0){
        meri = 'A';
        hour = 12;
    }else{
        meri = 'A';
    }
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      output time

//******************************************************************************
void tOutput(unsigned int hour, unsigned int min, unsigned int oHour,
        char meri){
    cout<<oHour<<":";
    if(min<10){
        cout<<"0"<<min;
    }else{
        cout<<min; 
    }
    cout<<" is "<<hour<<":";
    if(min<10){
        cout<<"0"<<min;
    }else{
        cout<<min; 
    }
    if(meri == 'A'){
        cout<<" AM"<<endl;
    }
    else{
        cout<<" PM"<<endl;
    }
}
    