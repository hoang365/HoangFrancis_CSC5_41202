/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 11, 2016, 8:58 AM
     Purpose: Display able and compare swaps
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
    bool x = true;
    bool y = true;
    int a = 2; int b = 3; int temp;
    //Create heading
    cout<< "X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
            
    //first row
    cout<<(x?'T':'F') <<" ";
    cout<<(y?'T':'F') <<"  ";
    cout<<(!x?'T':'F') <<"  ";
    cout<<(!y?'T':'F') <<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"         ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    //second row
    x = true; y = false;
    cout<<(x?'T':'F') <<" ";
    cout<<(y?'T':'F') <<"  ";
    cout<<(!x?'T':'F') <<"  ";
    cout<<(!y?'T':'F') <<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"         ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    //third row
    x=false;y = true;
    cout<<(x?'T':'F') <<" ";
    cout<<(y?'T':'F') <<"  ";
    cout<<(!x?'T':'F') <<"  ";
    cout<<(!y?'T':'F') <<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"         ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
    //fourth row
    x=false;y=false;
    cout<<(x?'T':'F') <<" ";
    cout<<(y?'T':'F') <<"  ";
    cout<<(!x?'T':'F') <<"  ";
    cout<<(!y?'T':'F') <<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"         ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  "<<endl;
   
    //swap using temp  
    cout<<"A is "<<a<<" and B is "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"When swapped, A is now "<<a<<" and B is now "<<b<<endl;
    //swap using exclusive order
    cout<<"A is "<<a<<" and B is "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"When swapped, A is now "<<a<<" and B is now "<<b<<endl;
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right
    return 0;
}

