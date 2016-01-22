/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 7:51 AM
     Purpose: Calculate paying for a credit account
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
    //Loop it
    char qstion;
    do{
        //Declare and initialize variables
        float interst, total, minPay; //interest, total amount due, minimum payment due
        float balance; //account balance
        //Calculate or map inputs to outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Input the account balance"<<endl;
        cin>>balance;

        if(balance>1000){
            interst = (balance-1000.0f)*.01 + .015f*1000.0f;
            total = balance+interst;
            if(total <=10){
                minPay = total;
            }else{
                if(.1f*total>10){
                    minPay = .1f*total;
                }else{
                    minPay = 10.0f;
                }

            }

        }else{
            interst = balance*.015f;
            total = balance+interst;
            if(total <=10){
                minPay = total;
            }else{
                if(.1f*total>10){
                    minPay = .1f*total;
                }else{
                    minPay = 10.0f;
                }

            }
        }
        //Output the results
        cout<<"Interest due: $"<<interst<<endl;
        cout<<"Total amount due: $"<<total<<endl;
        cout<<"Minimum payment due: $"<<minPay;

        cout<<endl<<"Would you like to repeat the calculation?"<<endl;
        cin>>qstion;
    }while(toupper(qstion)== 'Y');
    //Exit stage right
    return 0;
}

