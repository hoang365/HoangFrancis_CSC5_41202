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

//Function prototypes

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
        cout<<"Type anything else to exit "<<endl;
        cin>>nSoltn;
    
    //menu to display solution
        
            switch(nSoltn){
                case 1:{
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
                    break;
                }
                case 2:{
                    //Declare and initialize variable for etox
                        //Declare and initialize variable for etox
                        cout<<"Solution to Savitch 8thEd Chap3 Prob11"<<endl;
                        cout<<"e to the power of x"<<endl<<endl;
                        float etox=1,x; //e^x
                        float tol = 1e-6f;
                        float term = 1;
                        unsigned int nTerm; //counter to determine how many terms
                        //input the value x
                        cout<<"Input x of e^x computation"<<endl;
                        cin>>x;

                        //Calculate e^x
                        for(nTerm=1;term > tol;term*=x/nTerm++, etox+=term);


                        //Output the results
                        cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
                        cout<<"The number of terms it took to aprox e^"<<x<<"="<<nTerm<<endl;
                        cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;

                    break;
                }
                case 3:{
                    cout<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
                    cout<<"Aproximating pi"<<endl<<endl;
                        float pi = 4, n, piValue; 
                        //input the value x
                        cout<<"Input n for how many values of pi"<<endl;
                        cin>>n;

                        for(int i = 0; i<=n;i++){
                             piValue += pow(-1,i)/(2*i+1);

                        }
                        //Calculate pi
                        pi *= piValue;


                        //Output the results

                        cout<<"The approximate value of pi calculated to "<<n<<" terms is "<<pi<<endl<<endl;
                    break;
                }
                case 4:{
                    cout<<"Solution to Savitch 9thEd Chap3 Prac Prob2"<<endl;
                    cout<<"Calculating credit payments"<<endl<<endl;
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
                            interst = (balance-1000)*.01 + .015*1000;
                            total = balance+interst;
                            if(total <=10){
                                minPay = total;
                            }else{
                                if(.1*total>10){
                                    minPay = .1*total;
                                }else{
                                    minPay = 10;
                                }

                            }

                        }else{
                            interst = balance*.015;
                            total = balance+interst;
                            if(total <=10){
                                minPay = total;
                            }else{
                                if(.1*total>10){
                                    minPay = .1*total;
                                }else{
                                    minPay = 10;
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
                    break;
                }
                case 5:{
                    cout<<endl<<"Soultion to Savitch 9thEd Chap3 Prac Prob1"<<endl;
                    cout<<endl<<"The Rock-Paper-Scissor Game"<<endl<<endl;


                    //Set the random number seed
                    srand(static_cast<unsigned int>(time(0)));

                    //Loop until player wants to quit
                    char qstion; //Question, does player want to keep playing  
                    do{
                    //Declare and initialize variables
                        char computr;      //The computers play
                        char player;       //The players move

                        //Input the players turn
                        do{
                            cout<<"What is your move P,R,S?"<<endl;
                            cin>>player;
                            player=toupper(player);
                        }while(!(player=='P'||player =='R'||player=='S'));

                        //Computer generated play
                        do{
                            computr=rand()%4+80;
                        }while(computr == 'Q');

                        //Calculate or map inputs to outputs

                        //Output the results
                        cout<<"The Computer played "<<computr<<endl;
                        cout<<"The Player's move was "<<player<<endl;

                        switch(player){
                            case 'P':{
                                if (computr == 'R'){
                                    cout<<"Paper covers rock"<<endl;
                                    cout<<"The player wins"<<endl;
                                }else if(computr == 'S'){
                                    cout<<"Scissors cut paper"<<endl;
                                    cout<<"The computer wins"<<endl;
                                }else{
                                    cout<<"Nobody wins"<<endl;
                                }
                                break;
                            }
                            case 'S':{
                                if (computr == 'P'){
                                    cout<<"Scissors cut paper"<<endl;
                                    cout<<"The player wins"<<endl;
                                }else if(computr == 'R'){
                                    cout<<"Rock breaks scissors"<<endl;
                                    cout<<"The computer wins"<<endl;
                                }else{
                                    cout<<"Nobody wins"<<endl;
                                }
                                break;
                            }
                            case 'R':{
                                if (computr == 'S'){
                                    cout<<"Rock breaks scissors"<<endl;
                                    cout<<"The player wins"<<endl;
                                }else if(computr == 'P'){
                                    cout<<"Paper covers rock"<<endl;
                                    cout<<"The computer wins"<<endl;
                                }else{
                                    cout<<"Nobody wins"<<endl;
                                }
                                break;
                            }
                            }
                    //Keep playing?
                    cout<<endl<<"Do you want to continue playing?"<<endl;
                    cin>>qstion;
                    }while(toupper(qstion) == 'Y');
                    break;
                }
                case 6:{
                    cout<<endl<<"Soultion to Savitch 9thEd Chap3 Prac Prob3"<<endl;
                    cout<<endl<<"Astrology"<<endl<<endl;




                    //Loop until user wants to quit
                    char qstion; //Question to repeat
                    do{
                        //Declare and initialize variables
                        unsigned int month;
                        unsigned int day;

                        cout<<"Enter your birth month (1-12)"<<endl;
                        cin>>month;
                        while(month>12){
                            cout<<"Please enter a valid birth month (1-12)"<<endl;
                            cin>>month;
                        }
                        cout<<"Enter your birthday"<<endl;
                        cin>>day;

                        //Calculate or map inputs to outputs
                        switch(month){
                            case 1:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=19){
                                    if(day == 18 || day == 19){
                                        cout<<"You are a Capricorn."<<endl;
                                        cout<<"You are on the cusp of being a Aquarius."<<endl;
                                    }else{
                                        cout<<"You are a Capricorn."<<endl;
                                    }
                                }else{
                                    if(day==20 || day ==21){
                                        cout<<"You are a Aquarius."<<endl;
                                        cout<<"You are on the cusp of being a Capricorn."<<endl;    
                                    }else{
                                        cout<<"You are a Aquarius."<<endl;
                                    }
                                }
                                break;
                            }
                            case 2:{
                                while(day>29){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=19){
                                    if(day == 18 || day == 19){
                                        cout<<"You are a Aquarius."<<endl;
                                        cout<<"You are on the cusp of being a Pisces."<<endl;
                                    }else{
                                        cout<<"You are a Aquarius."<<endl;
                                    }
                                }else{
                                    if(day==20 || day ==21){
                                        cout<<"You are a Pisces."<<endl;
                                        cout<<"You are on the cusp of being a Aquarius."<<endl;    
                                    }else{
                                        cout<<"You are a Pisces."<<endl;
                                    }
                                }
                                break;
                            }
                            case 3:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=20){
                                    if(day == 19 || day == 20){
                                        cout<<"You are a Pisces."<<endl;
                                        cout<<"You are on the cusp of being a Aries."<<endl;
                                    }else{
                                        cout<<"You are a Pisces."<<endl;
                                    }
                                }else{
                                    if(day==21 || day ==22){
                                        cout<<"You are a Aries."<<endl;
                                        cout<<"You are on the cusp of being a Pisces."<<endl;
                                    }else{
                                        cout<<"You are a Aries."<<endl;
                                    }
                                }
                                break;
                            }
                            case 4:{
                                while(day>30){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=19){
                                    if(day == 18 || day == 19){
                                        cout<<"You are a Aries."<<endl;
                                        cout<<"You are on the cusp of being a Taurus."<<endl;
                                    }else{
                                        cout<<"You are a Aries."<<endl;
                                    }
                                }else{
                                    if(day==20 || day ==21){
                                        cout<<"You are a Taurus."<<endl;
                                        cout<<"You are on the cusp of being a Aries."<<endl;    
                                    }else{
                                        cout<<"You are a Taurus."<<endl;
                                    }
                                }
                                break;
                            }
                            case 5:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=20){
                                    if(day == 19 || day == 20){
                                        cout<<"You are a Taurus."<<endl;
                                        cout<<"You are on the cusp of being a Gemini."<<endl;
                                    }else{
                                        cout<<"You are a Taurus."<<endl;
                                    }
                                }else{
                                    if(day==21 || day ==22){
                                        cout<<"You are a Gemini."<<endl;
                                        cout<<"You are on the cusp of being a Taurus."<<endl;    
                                    }else{
                                        cout<<"You are a Gemini."<<endl;
                                    }
                                }
                                break;
                            }
                            case 6:{
                                while(day>30){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=21){
                                    if(day == 20 || day == 21){
                                        cout<<"You are a Gemini."<<endl;
                                        cout<<"You are on the cusp of being a Cancer."<<endl;
                                    }else{
                                        cout<<"You are a Gemini."<<endl;
                                    }
                                }else{
                                    if(day==22 || day ==23){
                                        cout<<"You are a Cancer."<<endl;
                                        cout<<"You are on the cusp of being a Gemini."<<endl;    
                                    }else{
                                        cout<<"You are a Cancer."<<endl;
                                    }
                                }
                                break;
                            }
                            case 7:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=22){
                                    if(day == 21 || day == 22){
                                        cout<<"You are a Cancer."<<endl;
                                        cout<<"You are on the cusp of being a Leo."<<endl;
                                    }else{
                                        cout<<"You are a Cancer."<<endl;
                                    }
                                }else{
                                    if(day==23 || day ==24){
                                        cout<<"You are a Leo."<<endl;
                                        cout<<"You are on the cusp of being a Cancer."<<endl;    
                                    }else{
                                        cout<<"You are a Leo."<<endl;
                                    }
                                }
                                break;
                            }
                            case 8:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=22){
                                    if(day == 21 || day == 22){
                                        cout<<"You are a Leo."<<endl;
                                        cout<<"You are on the cusp of being a Virgo."<<endl;
                                    }else{
                                        cout<<"You are a Leo."<<endl;
                                    }
                                }else{
                                    if(day==23 || day ==24){
                                        cout<<"You are a Virgo."<<endl;
                                        cout<<"You are on the cusp of being a Leo."<<endl;    
                                    }else{
                                        cout<<"You are a Virgo."<<endl;
                                    }
                                }
                                break;
                            }
                            case 9:{
                                while(day>30){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=22){
                                    if(day == 21 || day == 22){
                                        cout<<"You are a Virgo."<<endl;
                                        cout<<"You are on the cusp of being a Libra."<<endl;
                                    }else{
                                        cout<<"You are a Virgo."<<endl;
                                    }
                                }else{
                                    if(day==23 || day ==24){
                                        cout<<"You are a Libra."<<endl;
                                        cout<<"You are on the cusp of being a Virgo."<<endl;    
                                    }else{
                                        cout<<"You are a Libra."<<endl;
                                    }
                                }
                                break;
                            }
                            case 10:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=22){
                                    if(day == 21 || day == 22){
                                        cout<<"You are a Libra."<<endl;
                                        cout<<"You are on the cusp of being a Scorpio."<<endl;
                                    }else{
                                        cout<<"You are a Libra."<<endl;
                                    }
                                }else{
                                    if(day==23 || day ==24){
                                        cout<<"You are a Scorpio."<<endl;
                                        cout<<"You are on the cusp of being a Libra."<<endl;    
                                    }else{
                                        cout<<"You are a Scorpio."<<endl;
                                    }
                                }
                                break;
                            }
                            case 11:{
                                while(day>30){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=21){
                                    if(day == 20 || day == 21){
                                        cout<<"You are a Scorpio."<<endl;
                                        cout<<"You are on the cusp of being a Sagittarius."<<endl;
                                    }else{
                                        cout<<"You are a Scorpio."<<endl;
                                    }
                                }else{
                                    if(day==22 || day ==23){
                                        cout<<"You are a Sagittarius."<<endl;
                                        cout<<"You are on the cusp of being a Scorpio."<<endl;    
                                    }else{
                                        cout<<"You are a Sagittarius."<<endl;
                                    }
                                }
                                break;
                            }
                            case 12:{
                                while(day>31){
                                    cout<<"Please enter a valid birthday"<<endl;
                                    cin>>day;
                                }
                                if(day<=21){
                                    if(day == 20 || day == 21){
                                        cout<<"You are a Sagittarius."<<endl;
                                        cout<<"You are on the cusp of being a Capricorn."<<endl;
                                    }else{
                                        cout<<"You are a Sagittarius."<<endl;
                                    }
                                }else{
                                    if(day==22 || day ==23){
                                        cout<<"You are a Capricorn."<<endl;
                                        cout<<"You are on the cusp of being a Sagittarius."<<endl;    
                                    }else{
                                        cout<<"You are a Capricorn."<<endl;
                                    }
                                }
                                break;
                            }

                        }
                        //Output the results

                        //Again?
                        cout<<endl<<"Do you want to repeat?"<<endl;
                        cin>>qstion;
                    }while(toupper(qstion) == 'Y');
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

