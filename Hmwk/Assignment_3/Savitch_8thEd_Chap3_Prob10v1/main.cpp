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
    //Initialize the sequence
    fim2=fim1=1;         //start the sequence
    counter=2;           //initialize the counter
    //input the number of terms                    
    cout<<"Input the number of terms in the sequence"<<endl;
    cin>>nTerms;
    //Output or calculate the output required
    if(nTerms==1){
        cout<<"Term "<<nTerms<<" in the sequence = "
        <<fim2<<endl<<endl;
    }else if(nTerms==2){
        cout<<"Term "<<nTerms<<" in the sequence = "
        <<fim2<<endl<<endl;
    }else{
        do{
            fi=fim1+fim2;
            counter++;
            fim2=fim1;
            fim1=fi;
        }while(counter<nTerms);
    cout<<"Term "<<nTerms<<" in the sequence = "<<
    fi<<endl<<endl;
    }        
    
    
    //Input data
    
    
    //menu to display solution
        
            
                
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right
    return 0;
}

