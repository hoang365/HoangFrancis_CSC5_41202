/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Multiple problems
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants
const float LTOGAL = .264179f; //one liter is .264179 gallons
const float G = 6.673e-8;  // universal gravitational constant
//Function prototypes
float mileage(float gas,float miles); //calculates the mileage
float value(int price, int num, int denom); //converts the fractional price to a digital number
float rate(float old, float n);  //calculates the rate of inflation
float fRate(float rate, float price);                  //calculates future rate
float intrst(float balance, float rate, unsigned int months);  //calculates the total interest due
float force(float mass1, float mass2, float distnce);  //calculates the gravitational force between two objects
float mortg(float loan, float intr);
float afTax(float mortg, float tSav);
//Execution begins here

 

int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;
    bool reDspl = true;  //exit program when false
    
    //Input data
    do{
        
    
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Problem 1"<<endl;
        cout<<"Type 2 to Display Problem 2"<<endl;
        cout<<"Type 3 to Display Problem 3"<<endl;
        cout<<"Type 4 to Display Problem 4"<<endl;
        cout<<"Type 5 to Display Problem 5"<<endl;
        cout<<"Type 6 to Display Problem 6"<<endl;
        cout<<"Type 7 to Display Problem 7"<<endl;
        cout<<"Type 8 to Display Problem 8"<<endl;
        cout<<"Type 9 to Display Problem 9"<<endl;
        cout<<"Type 10 to Display Problem 10"<<endl;
        cout<<"Type anything else to exit "<<endl;
        cin>>nSoltn;
    
    //menu to display solution
        
            switch(nSoltn){
                case 1:{
                    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
                    cout<<endl<<"Display a Salary Table"<<endl<<endl;

                    //declare variables
                    unsigned int salary = 1; //Salary starting at a penny
                    float totPay = salary;            //Total Pay b summing the salary

                    //Loop to generate the Salary Table and Total Paid
                    cout<<" Day        $Salary         $Total"<<endl;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<setw(4)<<"1"<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                    for(int day=2;day<=31;day++){
                        //salary*=2;
                        salary<<=1; //bit shift right by 1 bit
                        totPay+=salary;
                        cout<<setw(4)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
                    }
                    break;
                }
                case 2:{
                    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
                    cout<<endl<<"Display a Temperature Table"<<endl<<endl;

                    //declare variables
                    float slope=5.0f/9;
                    char intrcpt=-32;
                    unsigned char c1=0,c2=100,f1=32,f2=212; //data pts of freezing and boiling

                    //Loop to generate the degree Celsius and output the table
                    cout<<"Fahrenheit   Celsius   Celsius"<<endl;
                    cout<<fixed<<setprecision(2)<<showpoint;
                    for(int f=f1;f<=f2;f++){
                        float ceq=slope*(f+intrcpt);
                        float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                        cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                    }

                    break;
                }
                case 3:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 1"<<endl;
                    cout<<endl<<"Calculating Mileage"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float gas;    //liters of gas consumed by car
                        float miles;  //miles traveled by car
                        float mpg;    //miles per gallon

                        //Ask user how many liters of gas was consumed, and how many miles
                        cout<<"How much gas in liters was consumed?"<<endl;
                        cin>>gas;
                        cout<<"How many miles were traveled?"<<endl;
                        cin>>miles;

                        //calculate the mileage
                        mpg = mileage(gas,miles);

                        //output
                        cout<<"Your mileage was "<<mpg<<" miles per gallon."<<endl;

                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                case 4:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 2"<<endl;
                    cout<<endl<<"Calculating Mileage and Comparing"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float gas;    //liters of gas consumed by car
                        float miles;  //miles traveled by car
                        float mpg;    //miles per gallon of the first car
                        float mpg2;   //miles per gallon of the second car
                        //Ask user how many liters of gas was consumed, and how many miles
                        cout<<"How much gas in liters was consumed by Car A?"<<endl;
                        cin>>gas;
                        cout<<"How many miles were traveled by the Car A?"<<endl;
                        cin>>miles;
                        mpg = mileage(gas,miles); //calculate mileage of the first car


                        cout<<"How much gas in liters was consumed by the Car B?"<<endl;
                        cin>>gas;
                        cout<<"How many miles were traveled by the Car B?"<<endl;
                        cin>>miles;
                        mpg2 = mileage(gas,miles);  //calculate mileage of the second car


                        //output
                        cout<<"The mileage of car A was "<<mpg<<" miles per gallon."<<endl;
                        cout<<"The mileage of car B was "<<mpg2<<" miles per gallon."<<endl;

                        if(mpg>mpg2){
                            cout<<"Car A has better fuel efficiency."<<endl;
                        }else{
                            cout<<"Car B has better fuel efficiency."<<endl;
                        }

                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                case 5:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 3"<<endl;
                    cout<<endl<<"Calculating Stocks"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        unsigned int shares;    //number of shares
                        unsigned int wPrice;   //whole dollar portion of the price
                        unsigned int num;    //numerator of the fraction portion of the price
                        unsigned int denom;   //denominator of the fraction portion of the price
                        float total; //value of one's entire holdings
                        //Ask user how many shares of stocks they own, and its price value in fractions
                        cout<<"How many shares of stock do you own?"<<endl;
                        cin>>shares;
                        cout<<"What is its whole dollar price value?"<<endl;
                        cin>>wPrice;
                        cout<<"What is the numerator price value?"<<endl;
                        cin>>num;
                        cout<<"What is denominator price value?"<<endl;
                        cin>>denom;
                        total =shares * value(wPrice,num,denom); //calculate total value

                        //output
                        cout<<fixed<<setprecision(2)<<showpoint;
                        cout<<"The value of your entire holdings is "<<total<<" dollars."<<endl;  
                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                case 6:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 4"<<endl;
                    cout<<endl<<"Calculating Rate of Inflation"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float oPrice;    //price from 1 year ago
                        float cPrice;   //current price
                        float roi;    //rate of inflation

                        //Ask user the prices
                        cout<<"Enter the old price:"<<endl;
                        cin>>oPrice;
                        cout<<"Enter the current price:"<<endl;
                        cin>>cPrice;

                        roi = rate(oPrice,cPrice); //calculate rate of inflation

                        //output
                        cout<<fixed<<setprecision(2)<<showpoint;
                        cout<<"The rate of inflation is "<<roi*100.0f<<" percent."<<endl;  
                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                case 7:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 5"<<endl;
                    cout<<endl<<"Calculating Rate of Inflation in 2 years"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float oPrice;    //price from 1 year ago
                        float cPrice;   //current price
                        float roi;    //rate of inflation
                        float fPrice; //future price
                        //Ask user the prices
                        cout<<"Enter the old price:"<<endl;
                        cin>>oPrice;
                        cout<<"Enter the current price:"<<endl;
                        cin>>cPrice;

                        roi = rate(oPrice,cPrice); //calculate rate of interest
                        fPrice = cPrice + fRate (roi,cPrice);
                        //output
                        cout<<fixed<<setprecision(2)<<showpoint;
                        cout<<"The rate of inflation is "<<roi*100.0f<<" percent."<<endl;
                        cout<<"In one year, the price will increase by "<<fRate(roi,cPrice)<<" dollars and be "<<fPrice<<" dollars."<<endl;
                        cout<<"In two years, the price will increase by "<<fRate(roi,fPrice)<<" dollars and be "<<fPrice + fRate(roi,fPrice)<<" dollars."<<endl;

                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                case 8:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 6"<<endl;
                    cout<<endl<<"Calculating interest owed on a credit card"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float balance; //the initial balance
                        float rate;    //monthly interest rate
                        unsigned int months; //the number of months the interest must be paid
                        float due;  //interest to be paid
                        //Ask user the initial balance and the months to be paid for
                        cout<<"Enter the initial balance:"<<endl;
                        cin>>balance;
                        cout<<"Enter the monthly interest rate:"<<endl;
                        cin>>rate;
                        cout<<"Enter the number of months for which interest must be paid:"<<endl;
                        cin>>months;

                        due = intrst(balance, rate, months); //calculate total interest to be paid

                        //output
                        cout<<fixed<<setprecision(2)<<showpoint;
                        cout<<"The total interest to be paid for "<<months<<" months is "<<due<<" dollars.";

                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');
                    break;
                }
                case 9:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Practice Program 7"<<endl;
                    cout<<endl<<"Calculating gravitational force"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float mass1;    //the first object's mass
                        float mass2;    //the second object's mass
                        float d;        //distance between the two objects
                        float grav;    //gravitational force
                        //Ask user the two objects' mass and distance
                        cout<<"Enter the first object's mass:"<<endl;
                        cin>>mass1;
                        cout<<"Enter the second object's mass:"<<endl;
                        cin>>mass2;
                        cout<<"Enter the distance between the two objects:"<<endl;
                        cin>>d;

                        grav = force(mass1, mass2, d); //calculate gravitational force

                        //output
                        cout<<scientific<<setprecision(5)<<showpoint;
                        cout<<"The gravitational force is "<<grav<<" dynes.";

                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                case 10:{
                    cout<<endl<<"Solution to Savitch 9thEd Chap4 Program Proj1"<<endl;
                    cout<<endl<<"Calculating after-tax cost of a new house after one year"<<endl<<endl;
                    char qstion;  //ask the user to repeat?
                    do{            
                        //declare and initialize variables
                        float price;         //price of the house
                        float down;          //down payment
                        float atCost;        //after tax cost = annual mortgage cost - tax savings
                        float amCost;        //annual mortgage cost = .03*initial loan balance + .06*initial loan balance(interest)
                        float tSave;         //tax savings = .35* interest payment
                        float i;             //interest
                        float loan;          //loan balance = price - down payment

                        //Ask user the price of the house and the down payment
                        cout<<"Enter the price of the house:"<<endl;
                        cin>>price;
                        cout<<"Enter the down payment:"<<endl;
                        cin>>down;

                        loan = price - down;
                        i = .06f*loan;
                        amCost = mortg(loan, i);
                        tSave = .35f*i;
                        atCost = afTax(amCost, tSave);


                        //output
                        cout<<fixed<<setprecision(2)<<showpoint;
                        cout<<"The loan balance is "<<loan<<" dollars."<<endl;
                        cout<<"The interest payments is "<<i<<" dollars."<<endl;
                        cout<<"The annual mortgage cost is "<<amCost<<" dollars."<<endl;
                        cout<<"The tax savings is "<<tSave<<" dollars."<<endl;
                        cout<<"After taxes, the cost of the house is "<<atCost<<" dollars."<<endl;
                        //repeat?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');  
                    break;
                }
                default:{
                    cout<<"Exiting the Program"<<endl;
                    reDspl=false;
                }
            }
        
    }while(reDspl);
    
    //Calculate or map inputs to outputs
    
    //Output the results
    
    //Exit stage right
    return 0;
}

float mileage(float gas, float miles){
    
    return miles/(gas*LTOGAL);
    
}

float value(int price, int num, int denom){
    
    return (price + (static_cast<float>(num)/denom));
    
}

float rate(float o, float n){
    
    return (n-o)/o;
    
}
float fRate(float roi, float price){
    return roi*price;
}
float intrst(float balance, float rate, unsigned int months){
    float intrst = balance*rate;
      float total = balance + intrst;
    float tIntrst = intrst; //total interest
   
    for(int i = 1; i < months; i++){
        intrst = total*rate;
        total += intrst;
        tIntrst += intrst;
    }
    return tIntrst;
}
float force(float mass1, float mass2, float d){
    float force = (G*mass1*mass2)/(d*d);
    return force;
}
float mortg(float loan, float intr){
    
    return .03f*loan + intr;
}

float afTax(float mortg, float tSav){
    return mortg -tSav;
}