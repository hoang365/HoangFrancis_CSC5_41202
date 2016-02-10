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
void ideal(unsigned short&, unsigned short&,char[], char[]);
void bett(float&, float&);
void output(int, char[]);
void deal(unsigned short&, char[], int, char);
bool ace(char[], int); //checks for an ace
void sort(char[], int);
int cValue(char); //converts face card to int

//Execution begins here

 

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    unsigned short pPoints,dPoints; //player points, dealer points
    unsigned short card;          //card being dealt, dealer's face card
    char pHand[21], dHand[21];          //player and dealer hand
    float wallet,bet,iWallet;                   //wallet and bet amount
    char yes;                           //player input
    bool end, dDraw;   //game is ended, dealer drew a card
    unsigned int win=0,loss=0, draw=0; 
    char player = 'p', dealer = 'd';
    ofstream out;
    //open the file
    out.open("CardGame.dat");
    //Input data
    cout<<"How much money do you have in $?"<<endl;
    cin>>wallet;    
    iWallet=wallet;    //stores the initial wallet value
    do{
        //resets everything to starting game
        pPoints=0;
        dPoints=0;
        end = false;
        dDraw=false;
        bett(bet,wallet); //make your bet       
        ideal(pPoints,dPoints,pHand,dHand); //deals first two cards
        for(int j =2; end == false; j++){
            //outputs player hand and current point value
            
            cout<<"Your hand is ";
            output(j,pHand);
            cout<<endl<<"Dealer's face card is ";
            if (dHand[0]==':'){
                cout<<"10"<<endl;
            }else{
                cout<<dHand[0]<<endl;
            }
            cout<<"Your hand is worth "<<pPoints<<" points."<<endl;
            //check win/lose condition
            if(pPoints >= 21){
                if (pPoints > 21) {
                    cout<<"Your point total is "<<pPoints<<endl;
                    cout<<"You busted!"<<endl;
                    loss++;
                }else{
                    cout<<"Dealer's face card is ";
                    if (dHand[0]==':'){
                        cout<<"10"<<endl;
                    }else{
                        cout<<dHand[0]<<endl;
                    }
                    cout<<"Dealer's hole card is ";
                        if (dHand[1]==':'){
                            cout<<"10"<<endl;
                        }else{
                            cout<<dHand[1]<<endl;
                        }
                        cout<<"Dealer's hand is worth "<<dPoints<<" points."<<endl;
                        for(int k =2;dPoints<17;k++){
                            dDraw=true;
                            deal(dPoints,dHand,k,dealer);

                            cout<<"Dealer's hand is ";
                            output(k+1, dHand);
                            cout<<endl<<"Dealer's hand is worth "<<dPoints
                                    <<" points."<<endl;

                        }

                    if (pPoints == 21 && j==2 && dPoints ==21 && dDraw ==false){
                        cout<<"Draw!"<<endl;
                        cout<<"You received back $"<<bet<<endl;
                        wallet+=bet;
                        draw++;
                    }else if (dPoints == 21 && dDraw==false){
                        cout<<"House has a Blackjack."<<endl;
                        cout<<"You lost!"<<endl;
                        loss++;
                    }else if (pPoints == 21 && j==2){
                        cout<<"BLACKJACK! You won!"<<endl;
                        wallet+=bet+bet*1.5;
                        cout<<"Your payout is $"<<bet+bet*1.5<<endl;
                        win++;
                    }else if(pPoints == 21 && dPoints == 21){                                    
                        cout<<"Draw!"<<endl;
                        wallet+=bet;
                        cout<<"You received back $"<<bet<<endl;
                        draw++;
                    }else{
                        cout<<"You Won!"<<endl;
                        wallet+=bet*2;
                        cout<<"Your payout is $"<<bet*2<<endl;
                        win++;
                    }
                
                }
                    
                
                
                
                end = true;
            }
            
            
            //ask if player wants to change Ace value
            if (ace(pHand, j) && end !=true){
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
                    deal(pPoints, pHand, j, player);
                    

                }else{
                    cout<<"You stand with a point total of "<<pPoints<<endl;
                    cout<<"Dealer's face card is ";
                    if (dHand[0]==':'){
                        cout<<"10"<<endl;
                    }else{
                        cout<<dHand[0]<<endl;
                    }
                    cout<<"Dealer's hole card is ";
                    if (dHand[1]==':'){
                        cout<<"10"<<endl;
                    }else{
                        cout<<dHand[1]<<endl;
                    }
                    cout<<"Dealer's hand is worth "<<dPoints<<" points."<<endl;
                    for(int k =2;dPoints<17||dPoints<pPoints;k++){
                        dDraw=true;
                        card = rand()%13+1;
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
                                dPoints +=1;
                                break;
                            }
                            default:{
                                dHand[k]=card+48;
                                dPoints +=card;
                                cout<<"Dealer drew a "<<card<<endl;
                            }
                        }
                        cout<<"Dealer's hand is ";
                        output(k+1,dHand);
                        cout<<endl<<"Dealer's hand is worth "<<dPoints
                                <<" points."<<endl;
                        
                    }
                    if(dPoints==21 and dDraw==false){
                        cout<<"House has Blackjack"<<endl;
                        cout<<"You lost!"<<endl;
                        loss++;
                    }else if (dPoints > 21){
                        cout<<"Dealer busts! You won!"<<endl;
                        wallet+=bet*2;
                        cout<<"Your payout is $"<<bet*2<<endl;
                        win++;
                    }else if(pPoints > dPoints){
                        cout<<"Dealer stands at "<<dPoints<<endl;
                        cout<<"You won with "<<pPoints<<"!"<<endl;
                        wallet+=bet*2;
                        cout<<"Your payout is $"<<bet*2<<endl;
                        win++;
                    }else if(dPoints > pPoints){
                        cout<<"Dealer stands at "<<dPoints<<endl;
                        cout<<"You lost with "<<pPoints<<"."<<endl;
                        loss++;
                    }else{
                        cout<<"Draw"<<endl;
                        wallet+=bet;
                        cout<<"You received back $"<<bet<<endl;
                        draw++;
                    }
                    end = true;
                }
            }
        
        }        
    cout<<"Do you want to play again?"<<endl;
    cin>>yes;
    if(wallet<=0){
        cout<<"You're broke."<<endl;
    }
    }while(tolower(yes) =='y' && wallet>0);    
   
    //Output the results
    cout<<"You won "<<win<<" times"<<endl;
    cout<<"You lost "<<loss<<" times"<<endl;
    cout<<"You tied "<<draw<<" times"<<endl;
    cout<<"You ultimately earned "<<wallet-iWallet<<endl;
    
    out<<"You won "<<win<<" times"<<endl;
    out<<"You lost "<<loss<<" times"<<endl;
    out<<"You tied "<<draw<<" times"<<endl;
    out<<"You ultimately earned "<<wallet-iWallet<<endl;
    //Exit stage right
    out.close();
    return 0;
}
//bet money
void bett(float& bet, float& wallet){
    cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"You currently have $"<<wallet<<endl;
        cout<<"How much will you bet?"<<endl;
        cin>>bet;
        while(bet>wallet){
            cout<<"That's more money than you have."<<endl;
            cout<<"How much will you bet?"<<endl;
            cin>>bet;
        }
        wallet -= bet;
}

//initial deal of cards
void ideal(unsigned short& p,unsigned short& d, char pHand[], char dHand[]){
    char yes;
    for (int i =0; i<2; i++){
        unsigned short card = rand()%13+1;
        switch(card){
            case 11:{
                p+=10;
                pHand[i]='J';
                cout<<"You got a Jack"<<endl;
                break;
            }
            case 12:{
                p+=10;
                pHand[i]='Q';
                cout<<"You got a Queen"<<endl;
                break;
            }
            case 13:{
                p+=10;
                pHand[i]='K';
                cout<<"You got a King"<<endl;
                break;
            }
            case 1:{
                pHand[i]='A';
                cout<<"You got an Ace"<<endl;
                cout<<"Do you want the Ace to be 11 (y,n)?"<<endl;
                cin>>yes;
                p += (tolower(yes) =='y')?11:1;
                break;
            }
            default:{
                pHand[i]=card+48;
                p +=card;
                cout<<"You got a "<<card<<endl;
            }
        }
        card = rand()%13+1;
        switch(card){
            case 11:{
                d+=10;
                dHand[i]='J';
                if(i==0){
                    cout<<"Dealer got a Jack"<<endl;    
                }

                break;
            }
            case 12:{
                d+=10;
                dHand[i]='Q';
                if(i==0){
                    cout<<"Dealer got a Queen"<<endl;    
                }
                break;
            }
            case 13:{
                d+=10;
                dHand[i]='K';
                if(i==0){
                    cout<<"Dealer got a King"<<endl;    
                }
                break;
            }
            case 1:{                    
                dHand[i]='A';                    
                d += (d==10)?11:1;
                if(i==0){
                    cout<<"Dealer got an Ace"<<endl;    
                }
                break;
            }
            default:{
                dHand[i]=card+48;
                d +=card;
                if(i==0){
                    cout<<"Dealer got a "<<card<<endl;   
                }
            }
        }
    }
}
//outputs hand
void output(int j, char hand[]){
    sort(hand, j);
    for (int i = 0; i<j;i++){
        if(hand[i]==':'){
            cout<<"10 ";
        }else{
            cout<<hand[i]<<" ";
        }
    }
}
//deals a card
void deal(unsigned short& p, char hand[], int i, char who){
    char yes;
    unsigned short card = rand()%13+1;
    switch(card){
        case 11:{
            p+=10;
            hand[i]='J';
            if (who == 'd'){
                cout<<"Dealer ";
            }
            else{
                cout<<"You ";
            }
            cout<<" drew a Jack"<<endl;
            break;
        }
        case 12:{
            p+=10;
            hand[i]='Q';
            if (who == 'd'){
                cout<<"Dealer ";
            }
            else{
                cout<<"You ";
            }
            cout<<"drew a Queen"<<endl;
            break;
        }
        case 13:{
            p+=10;
            hand[i]='K';
            if (who == 'd'){
                cout<<"Dealer ";
            }
            else{
                cout<<"You ";
            }
            cout<<"drew a King"<<endl;
            break;
        }
        case 1:{
            hand[i]='A';
            if (who == 'd'){
                cout<<"Dealer ";
            }
            else{
                cout<<"You ";
            }
            cout<<"drew an Ace"<<endl;
            if (who == 'p'){
                cout<<"Do you want the Ace to be 11 (y,n)?"<<endl;
                cin>>yes;
                p += (tolower(yes) =='y')?11:1;
            }
            else{
                p +=1;
            }

            break;
        }
        default:{
            hand[i]=card+48;
            p +=card;
            if (who == 'd'){
                cout<<"Dealer ";
            }
            else{
                cout<<"You ";
            }
            cout<<"drew a "<<card<<endl;
        }
    }
}
//checks for an ace
bool ace(char hand[], int j){
    for (int i = 0; i<j;i++){
        if (hand[i]== 'A'){
            return true;
            break;
        }
        else{
            return false;
        }
    }
}

void sort(char hand[], int size){

    for(int i = 0; i < size; i++){
       for(int j = 0; j < size-1; j++){
           if(cValue(hand[j])>cValue(hand[j+1])){
               char temp = hand[j];
               hand[j] = hand[j+1];
               hand[j+1] = temp;
           }
       } 
        
    }
}

int cValue(char c){
    if (c == 'A'){
        return 1;
    }
    else if (c == 'J'){
        return 11;
    }
    else if (c == 'Q'){
        return 12;
    }
    else if (c == 'K'){
        return 13;
    }
    else{
        return c-48;
    }
}