/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 13, 2016, 10:50 PM
     Purpose: Paycheck and the money withheld
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
    const float PAYRATE = 16.78;                  //payrate for the first 40 hours
    const float OVERTIM = PAYRATE*1.5;            //overtime payrate
    const float SSTAXR = .06;                      //social security tax rate
    const float FITAXR = .14;                     //federal income tax rate
    const float SITAXR = .05;                     //state income tax rate
    const unsigned int UNION = 10;               //union dues
    const unsigned int HI = 35;                  //health insurance
    float hours;                                  //hours worked
    float oHours;                                 //overtime hours worked
    unsigned int depend;                         //number of dependants
    float iPay;                                   //initial paycheck
    float oPay;                                   //over time payment
    float gPay;                                    //gross pay
    float nPay;                                   //net pay
    float ssTax;                                  //social security tax
    float fiTax;                                  //federal income tax
    float siTax;                                  //state income tax
    float witHeld;                                //total withheld
    char input = 'y';
    //Calculate or map inputs to outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    while(input == 'y' || input =='Y'){
        cout<<"Enter the number of hours worked: ";
        cin>>hours;
        cout<<"Enter the number of dependants: ";
        cin>>depend;
        if(hours > 40){
            oHours = hours - 40;
            iPay= PAYRATE*40;
            oPay = OVERTIM*oHours;
            gPay = iPay + oPay;
            cout<<"The gross pay is $"<<gPay<<endl;
            ssTax = SSTAXR * gPay;
            cout<<"The social security tax is $"<<ssTax<<endl;
            fiTax = FITAXR * gPay;
            cout<<"The federal income tax is $"<<fiTax<<endl;
            siTax = SITAXR * gPay;
            cout<<"The state income tax is $"<<siTax<<endl;
            cout<<"Union dues is $10"<<endl;
            if (depend >= 3){
                cout<<"Health insurance is $35"<<endl;
                witHeld = ssTax+fiTax+siTax+UNION+HI;
                nPay = gPay - witHeld;
                cout<<"The net pay is $"<<nPay<<endl;
            }
            else{
                witHeld = ssTax+fiTax+siTax+UNION;
                nPay = gPay - witHeld;
                cout<<"The net pay is $"<<nPay<<endl;
            }
            
        }
        else{
            iPay= PAYRATE*40;
            gPay = iPay;
            cout<<"The gross pay is $"<<gPay<<endl;
            ssTax = SSTAXR * gPay;
            cout<<"The social security tax is $"<<ssTax<<endl;
            fiTax = FITAXR * gPay;
            cout<<"The federal income tax is $"<<fiTax<<endl;
            siTax = SITAXR * gPay;
            cout<<"The state income tax is $"<<siTax<<endl;
            cout<<"Union dues is $10"<<endl;
            if (depend >= 3){
                cout<<"Health insurance is $35"<<endl;
                witHeld = ssTax+fiTax+siTax+UNION+HI;
                nPay = gPay - witHeld;
                cout<<"The net pay is $"<<nPay<<endl;
            }
            else{
                witHeld = ssTax+fiTax+siTax+UNION;
                nPay = gPay - witHeld;
                cout<<"The net pay is $"<<nPay<<endl;
            }
        }
        
        
        cout<<"Enter y to repeat this, otherwise enter any key."<<endl;
        cin>>input;
    
    
    
    }
    //Output the results
    cout<<"Goodbye"<<endl;
    //Exit stage right
    return 0;
}

