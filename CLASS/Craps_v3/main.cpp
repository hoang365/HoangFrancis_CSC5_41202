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
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    
    //frequency of our dice throws
    const unsigned int LIMIT=1500;//Table single bet limit = 1500
    unsigned short wins = 0,losses=0,games;
    float wallet,bet;
    char yes; //character to answer if winning
    ofstream out;
    //open the file
    out.open("CardGame.dat");
    //Input data
    cout<<"Enter the number of games:"<<endl;
    cin>>games;
    
    cout<<"How much do you have to gamble?"<<endl;
    cin>>wallet;
    cout<<"How much would you like to bet/game$?"<<endl;
    cin>>bet;
    cout<<"If you win would you like to double your bet(y/n)"<<endl;
    cin>>yes;   
    //Modify the bet based on the table limit
    bet=bet<LIMIT?bet:LIMIT;//Ternary Operator
    //Throw the dice
    for(int game=1;game<=games;game++){
        char die1=rand()%6+1;//number between [1,6]
        char die2=rand()%6+1;//number between [1,6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12){
            losses++;
            wallet-=bet;
        }
        else if(sum==7||sum==11){
            wins++;
            wallet+=bet;
            bet=(yes=='y')?2*bet:bet; //another ternary
            bet=bet<LIMIT?bet:LIMIT;
        }
        else{
            //roll again
            bool kpRln=true;
            do{
                char die1=rand()%6+1;//number between [1,6]
                char die2=rand()%6+1;//number between [1,6]
                char sum2=die1+die2;
                switch(sum2 ==7){
                    case true:{losses++;kpRln=false;wallet-=bet;}
                    default:
                        if (sum==sum2){
                            wins++;kpRln=false;wallet+=bet;}
                        }
            }while(kpRln);
        }
    }
    
    //Output the results
    cout<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<<" times and"<<endl;
    cout<<"You lost "<<losses<<" times"<<endl;
    cout<<"Total games is "<<wins+losses<<endl; 
    cout<<"You won "<<static_cast<float>(wins)/games*100.0f<<"% of games"<<endl;
    cout<<"You lost "<<static_cast<float>(losses)/games*100.0f<<"% of games"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Wallet Contains $"<<wallet<<endl;
    cout<<"My Bets were = $"<<bet<<endl;
    
    out<<"Out of "<<games<<" played"<<endl;
    out<<"You won "<<wins<<" times and"<<endl;
    out<<"You lost "<<losses<<" times"<<endl;
    out<<"Total games is "<<wins+losses<<endl; 
    out<<"You won "<<static_cast<float>(wins)/games*100.0f<<"% of games"<<endl;
    out<<"You lost "<<static_cast<float>(losses)/games*100.0f<<"% of games"<<endl;
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"My Wallet Contains $"<<wallet<<endl;
    out<<"My Bets were = $"<<bet<<endl;
    //Exit stage right
    out.close();
    return 0;
}

