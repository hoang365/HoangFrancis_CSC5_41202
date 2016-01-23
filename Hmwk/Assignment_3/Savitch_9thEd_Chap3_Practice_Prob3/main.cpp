/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 20, 2016, 10:00 AM
     Purpose: Astrology
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution begins here

 

int main(int argc, char** argv) {
    cout<<endl<<"Solution to Savitch 9thEd Chap3 Prac Prob3"<<endl;
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
    //Exit stage right
    return 0;
}

