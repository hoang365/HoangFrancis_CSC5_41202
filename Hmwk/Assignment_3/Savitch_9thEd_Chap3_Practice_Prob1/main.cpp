/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 8:58 AM
     Purpose: Rock Paper Scissors
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
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
    //Exit stage right
    return 0;
}

