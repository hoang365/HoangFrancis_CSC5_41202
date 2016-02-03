/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 4, 2016, 10:18 AM
     Purpose: Game Project
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
    unsigned short pPoints=0,dPoints=0; //player points, dealer points
    unsigned short card, face;          //card being dealt, dealer's face card
    char pHand[21], dHand[21];          //player and dealer hand
    float wallet,bet;                   //wallet and bet amount
    char yes;                           //player input
    bool end = false, hasAce = false;   //game is ended, has the ace
    unsigned int handSz=0;                //handSz
    ofstream out;
    //open the file
    out.open("CardGame.dat");
    //Input data
    
        
    
    //deal out the first batch of cards
    for (int i =0; i<2; i++){
        card = rand()%13+1;
        switch(card){
            case 11:{
                pPoints+=10;
                pHand[i]='J';
                cout<<"You got a Jack"<<endl;
                break;
            }
            case 12:{
                pPoints+=10;
                pHand[i]='Q';
                cout<<"You got a Queen"<<endl;
                break;
            }
            case 13:{
                pPoints+=10;
                pHand[i]='K';
                cout<<"You got a King"<<endl;
                break;
            }
            case 1:{
                hasAce=true;
                pHand[i]='A';
                cout<<"You got an Ace"<<endl;
                cout<<"Do you want the Ace to be 11 (y,n)?"<<endl;
                cin>>yes;
                pPoints += (tolower(yes) =='y')?11:1;
                break;
            }
            default:{
                pHand[i]=card+48;
                pPoints +=card;
                cout<<"You got a "<<card<<endl;
            }
        }
        handSz++;
    }
    do{
        //outputs player hand and current point value
        cout<<"Your hand is ";
        for (int i = 0; i<handSz;i++){
            if(pHand[i]==':'){
                cout<<"10 ";
            }else{
                cout<<pHand[i]<<" ";
            }
        }
        cout<<endl<<"Your hand is worth "<<pPoints<<" points."<<endl;
        
         if(pPoints >= 21 ){
            if(pPoints== 21){
               cout<<"BLACKJACK! You Won!"<<endl; 
            }
            else{
                cout<<"Your point total is "<<pPoints<<endl;
                cout<<"You busted!"<<endl;
            }
            end = true;
        }
        //ask if player wants to change Ace value
        if (hasAce && end !=true){
            cout<<"Do you want to change the value of your Ace(s)?"<<endl;
            cin>>yes;
            if(tolower(yes) =='y'){
                pPoints = 0;
                for(int i = 0; i<handSz;i++){
                    switch(pHand[i]){
                        case'J':{
                        pPoints+=10;
                        break;
                    }
                        case'Q':{
                        pPoints+=10;
                        break;
                    }
                        case'K':{
                        pPoints+=10;
                        break;
                    }
                        case'A':{
                        cout<<"Do you want the Ace to be 11 (y,n)?"<<endl;
                        cin>>yes;
                        pPoints += (tolower(yes) =='y')?11:1;
                        break;
                    }
                        default:{
                        pPoints +=pHand[i]-48;
                    }
                    }
                }
                cout<<endl<<"Your hand is now "<<pPoints<<" points."<<endl;
                end= pPoints >21?true:false;
            }
        }
         //check if player has already won or busted
       
        //Hit me?
        if(end != true){
            cout<<"Hit me?"<<endl;
            cin>>yes;
            if(tolower(yes) =='y'){
                card = rand()%13+1;
                switch(card){
                    case 11:{
                        pPoints+=10;
                        pHand[handSz]='J';
                        cout<<"You got a Jack"<<endl;
                        break;
                    }
                    case 12:{
                        pPoints+=10;
                        pHand[handSz]='Q';
                        cout<<"You got a Queen"<<endl;
                        break;
                    }
                    case 13:{
                        pPoints+=10;
                        pHand[handSz]='K';
                        cout<<"You got a King"<<endl;
                        break;
                    }
                    case 1:{
                        hasAce=true;
                        pHand[handSz]='A';
                        cout<<"You got an Ace"<<endl;
                        cout<<"Do you want the Ace to be 11 (y,n)?"<<endl;
                        cin>>yes;
                        pPoints += (tolower(yes) =='y')?11:1;
                        break;
                    }
                    default:{
                        pHand[handSz]=card+48;
                        pPoints +=card;
                        cout<<"You got a "<<card<<endl;
                    }
                }
                handSz++;
            }else{
                cout<<"You stand with a point total of "<<pPoints<<endl;
                end = true;
            }
        }
       
        
        
    }while (end!= true);
    
    
    
    
    //Output the results
    
    //Exit stage right
    out.close();
    return 0;
}

