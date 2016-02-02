/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 4, 2016, 10:18 AM
     Purpose: Check out IDE
 */
//System Libraries
#include <iostream> //I/O
#include <cstdlib>   //srand and rand functions
#include <ctime>    //time to set random number seed
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void lstSmal(int [],int,int);
void swap(int &,int &);
void markSrt(int [],int);
//Execution begins here

 

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const int SIZE=100;
    int array[SIZE];
    
    
    //fill the array with random 2 digit numbers
    fillAry(array,SIZE);
    
    //print the array
    prntAry(array,SIZE,10);
    
    //test smallest element in list
    
    markSrt(array,SIZE);
    
    //print the array
    prntAry(array,SIZE,10);
    
    
    
    //Exit stage right
    
    return 0;
}

void markSrt(int a[],int n){
    for (int i = 0; i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
            }
        }    
    }
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// a->array or List
// n->size of list
// pos->To place smallest in list that follows
//Outputs:
// a[pos]-> smallest element in [a[pos],a[n-1]]
//******************************************************************************
void lstSmal(int a[],int n,int pos){
    //loop and compare
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}
//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// a->List
// n->Size of the array
//perLine->How many list elements will output
//Outputs:
// a->LIst initialized with random 2 digit numbers
//******************************************************************************
void prntAry(int a[], int n, int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;    
}

//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                           Swap Variables
// Inputs:
//a->First Variable
// b->Second Variable
//Outputs:
// a->First variable with value of b
// b->second variable with value of a
//******************************************************************************
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

//000000011111111111222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
// a->List
// n->Size of the array
//Outputs:
// a->LIst initialized with random 2 digit numbers
//******************************************************************************
void fillAry(int a[], int n){
    //loop and fill the array of numbers
    for(int i = 0;i<n;i++){
        a[i]=rand()%90+10; //[10,99]
    }
}