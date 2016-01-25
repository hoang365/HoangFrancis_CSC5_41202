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
    
    //frequency of our dice throws
    
    unsigned short wins = 0,losses=0,games;
    //Input data
    cout<<"Input number of games:"<<endl;
    cin>>games;
    //Throw the dice
    for(int game=1;game<=games;game++){
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
                switch(sum2 ==7){
                    case true:{losses++;kpRln=false;}
                    default:
                        if (sum==sum2){
                            wins++;kpRln=false;}
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
    //Exit stage right
    return 0;
}

