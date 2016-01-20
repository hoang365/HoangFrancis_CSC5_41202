/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Multiple problems
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    cout<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
    cout<<"The Fibonacci Sequence"<<endl<<endl;
    //declare variables
    unsigned int fi,fim1,fim2; //Designations in the seqeunce
    unsigned short nTerms;//number of terms in the sequence
    unsigned short counter;//current position in the sequence
    const char DREPRO = 5;     //Days to reproduce
    float crudWt;          //Weight of crud;
    unsigned int nDays;    //Number of days to grow Crud
    //Initialize the sequence
    fim2=fim1=1;         //start the sequence
    counter=2;           //initialize the counter
    //input the number of terms                    
    cout<<"Input the initial weight of the crud in lbs"<<endl;
    cin>>crudWt;
    cout<<"How many days will the crud be allowed to grow"<<endl;
    cin>>nDays;
    
    nTerms=nDays/DREPRO+1;
    //Output or calculate the output required
    if(nTerms==1){
        cout<<"Term "<<nTerms<<" in the sequence = "
        <<fim2<<endl<<endl;
        cout<<"After "<<nDays<<" days the crud weighs "<<fim2*crudWt<<"(lbs)"<<endl<<endl;
    }else if(nTerms==2){
        cout<<"Term "<<nTerms<<" in the sequence = "
        <<fim2<<endl<<endl;
        cout<<"After "<<nDays<<" days the crud weighs "<<fim1*crudWt<<"(lbs)"<<endl<<endl;
    }else{
        do{
            fi=fim1+fim2;
            counter++;
            fim2=fim1;
            fim1=fi;
        }while(counter<nTerms);
    cout<<"Term "<<nTerms<<" in the sequence = "<<
    fi<<endl<<endl;
    cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt<<"(lbs)"<<endl<<endl;
    }        
    
    
    //The crud result is
    
    
    //Exit stage right
    return 0;
}

