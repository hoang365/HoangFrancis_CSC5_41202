/* 
     
     Author: Francis Hoang
     Created on January 10, 2016, 11:17 PM
     Purpose: Sum and product
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
    int int1, int2, sum, product; 
    
    cout << "Enter the first integer" << endl;
    cin >> int1;                                //input the first integer
    cout << "Enter the second integer" << endl;
    cin >> int2;                                //input the second integer
   
   //calculate the sum and product
    sum = int1 + int2;
    product = int1*int2;
    
    //Output the results
    cout<< "The sum of "<<int1<<" and "<<int2<< " is "<<sum<<endl;
    cout<< "The product of "<<int1<<" and "<<int2<< " is "<<product<<endl;
    
    //Exit stage right
    return 0;
}

