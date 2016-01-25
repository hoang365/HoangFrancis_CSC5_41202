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
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned short GAMES=36000; //Max number of throws
    //frequency of our dice throws
    unsigned short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0,frq7=0,frq8=0;
    unsigned short frq9=0,frq10=0,frq11=0,frq12=0;
    unsigned short wins = 0,losses=0;
    //Input data
    
    //Throw the dice
    for(int game=1;game<=GAMES;game++){
        char die1=rand()%6+1;//number between [1,6]
        char die2=rand()%6+1;//number between [1,6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            //roll again
            bool kpRln=true;
            do{
                char die1=rand()%6+1;//number between [1,6]
                char die2=rand()%6+1;//number between [1,6]
                char sum2=die1+die2;
                if(sum==sum2){
                    wins++;kpRln=false;
                }
                else if(sum2==7){
                    losses++;kpRln=false;
                }
            }while(kpRln);
        }
    }
    
    //Output the results
    cout<<"Out of "<<GAMES<<" played"<<endl;
    cout<<"You won "<<wins<<" times and"<<endl;
    cout<<"You lost "<<losses<<" times"<<endl;
    cout<<"Total games is "<<wins+losses<<endl; 
    cout<<"You won "<<static_cast<float>(wins)/GAMES*100.0f<<"% of games"<<endl;
    cout<<"You lost "<<static_cast<float>(losses)/GAMES*100.0f<<"% of games"<<endl;
    //Exit stage right
    return 0;
}

