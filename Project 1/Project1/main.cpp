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
    unsigned short pPoints,dPoints; //player points, dealer points
    unsigned short card;          //card being dealt, dealer's face card
    char pHand[21], dHand[21];          //player and dealer hand
    float wallet,bet;                   //wallet and bet amount
    char yes;                           //player input
    bool end, hasAce = false;   //game is ended, has the ace
   
    ofstream out;
    //open the file
    out.open("CardGame.dat");
    //Input data
    //cout<<"How much money do you have?"<<endl;
    //cin>>wallet;
        
    do{
        //deal out the first batch of cards
        pPoints=0;
        dPoints=0;
        end = false;
        hasAce=false;
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
            card = rand()%13+1;
            switch(card){
                case 11:{
                    dPoints+=10;
                    dHand[i]='J';
                    if(i==1){
                        cout<<"Dealer got a Jack"<<endl;    
                    }
                    
                    break;
                }
                case 12:{
                    dPoints+=10;
                    dHand[i]='Q';
                    if(i==1){
                        cout<<"Dealer got a Queen"<<endl;    
                    }
                    break;
                }
                case 13:{
                    dPoints+=10;
                    dHand[i]='K';
                    if(i==1){
                        cout<<"Dealer got a King"<<endl;    
                    }
                    break;
                }
                case 1:{                    
                    dHand[i]='A';                    
                    dPoints += (dPoints ==10)?11:1;
                    if(i==1){
                        cout<<"Dealer got an Ace"<<endl;    
                    }
                    break;
                }
                default:{
                    dHand[i]=card+48;
                    dPoints +=card;
                    if(i==1){
                        cout<<"Dealer got a "<<card<<endl;   
                    }
                    
                }
            }

        }

        for(int j =2; end == false; j++){
            //outputs player hand and current point value
            cout<<"Your hand is ";
            for (int i = 0; i<j;i++){
                if(pHand[i]==':'){
                    cout<<"10 ";
                }else{
                    cout<<pHand[i]<<" ";
                }
            }
            cout<<endl<<"Dealer's face card is ";
            if (dHand[0]==':'){
                cout<<"10"<<endl;
            }else{
                cout<<dHand[0]<<endl;
            }
            
            cout<<"Your hand is worth "<<pPoints<<" points."<<endl;
            //check win/lose condition
            if(pPoints >= 21){
                cout<<"Dealer's hole card is ";
                    if (dHand[1]==':'){
                        cout<<"10"<<endl;
                    }else{
                        cout<<dHand[1]<<endl;
                    }
                    cout<<"Dealer's hand is worth "<<dPoints<<" points."<<endl;
                    for(int k =2;dPoints<17;k++){                        
                        switch(card){
                            case 11:{
                                dPoints+=10;
                                dHand[k]='J';
                                cout<<"Dealer drew a Jack"<<endl;
                                break;
                            }
                            case 12:{
                                dPoints+=10;
                                dHand[k]='Q';
                                cout<<"Dealer drew a Queen"<<endl;
                                break;
                            }
                            case 13:{
                                dPoints+=10;
                                dHand[k]='K';
                                cout<<"Dealer drew a King"<<endl;
                                break;
                            }
                            case 1:{
                                dHand[k]='A';
                                cout<<"Dealer drew an Ace"<<endl;
                                pPoints +=1;
                                break;
                            }
                            default:{
                                dHand[k]=card+48;
                                dPoints +=card;
                                cout<<"Dealer drew a "<<card<<endl;
                            }
                        }
                        cout<<"Dealer's hand is ";
                        for (int l = 0; l<=k;l++){
                            if(dHand[l]==':'){
                                cout<<"10 ";
                            }else{
                                cout<<dHand[l]<<" ";
                            }
                        }
                        cout<<endl<<"Dealer's hand is worth "<<dPoints
                                <<" points."<<endl;
                        
                    }
                if(pPoints == 21 && dPoints == 21){                                    
                    cout<<"Draw!"<<endl; 
                }
                else if(pPoints == 21){
                    cout<<"You Won!"<<endl;
                }
                else {
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
                    for(int i = 0; i<j;i++){
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
                    end= pPoints >=21?true:false;
                }
            }
            

            //Hit me?
            if(end != true){
                cout<<"Hit me?"<<endl;
                cin>>yes;
                if(tolower(yes) =='y'){
                    card = rand()%13+1;
                    switch(card){
                        case 11:{
                            pPoints+=10;
                            pHand[j]='J';
                            cout<<"You got a Jack"<<endl;
                            break;
                        }
                        case 12:{
                            pPoints+=10;
                            pHand[j]='Q';
                            cout<<"You got a Queen"<<endl;
                            break;
                        }
                        case 13:{
                            pPoints+=10;
                            pHand[j]='K';
                            cout<<"You got a King"<<endl;
                            break;
                        }
                        case 1:{
                            hasAce=true;
                            pHand[j]='A';
                            cout<<"You got an Ace"<<endl;
                            cout<<"Do you want the Ace to be 11 (y,n)?"<<endl;
                            cin>>yes;
                            pPoints += (tolower(yes) =='y')?11:1;
                            break;
                        }
                        default:{
                            pHand[j]=card+48;
                            pPoints +=card;
                            cout<<"You got a "<<card<<endl;
                        }
                    }

                }else{
                    cout<<"You stand with a point total of "<<pPoints<<endl;
                    cout<<"Dealer's hole card is ";
                    if (dHand[1]==':'){
                        cout<<"10"<<endl;
                    }else{
                        cout<<dHand[1]<<endl;
                    }
                    cout<<"Dealer's hand is worth "<<dPoints<<" points."<<endl;
                    for(int k =2;dPoints<17;k++){                        
                        switch(card){
                            case 11:{
                                dPoints+=10;
                                dHand[k]='J';
                                cout<<"Dealer drew a Jack"<<endl;
                                break;
                            }
                            case 12:{
                                dPoints+=10;
                                dHand[k]='Q';
                                cout<<"Dealer drew a Queen"<<endl;
                                break;
                            }
                            case 13:{
                                dPoints+=10;
                                dHand[k]='K';
                                cout<<"Dealer drew a King"<<endl;
                                break;
                            }
                            case 1:{
                                dHand[k]='A';
                                cout<<"Dealer drew an Ace"<<endl;
                                pPoints +=1;
                                break;
                            }
                            default:{
                                dHand[k]=card+48;
                                dPoints +=card;
                                cout<<"Dealer drew a "<<card<<endl;
                            }
                        }
                        cout<<"Dealer's hand is ";
                        for (int l = 0; l<=k;l++){
                            if(dHand[l]==':'){
                                cout<<"10 ";
                            }else{
                                cout<<dHand[l]<<" ";
                            }
                        }
                        cout<<endl<<"Dealer's hand is worth "<<dPoints
                                <<" points."<<endl;
                        
                    }
                    if (dPoints > 21){
                            cout<<"Dealer busts! You won!"<<endl;
                        }else if(pPoints > dPoints){
                            cout<<"Dealer stands at "<<dPoints<<endl;
                            cout<<"You won with "<<pPoints<<"!"<<endl;
                        }else if(dPoints > pPoints){
                            cout<<"Dealer stands at "<<dPoints<<endl;
                            cout<<"You lost with "<<pPoints<<"."<<endl;
                        }else{
                            cout<<"Draw"<<endl;
                        }
                    end = true;
                }
            }
        }    
    cout<<"Do you want to play again?"<<endl;
    cin>>yes;
    }while(tolower(yes) =='y');    
        
    //}while (end!= true);
    
    
    
    
    //Output the results
    
    //Exit stage right
    out.close();
    return 0;
}

