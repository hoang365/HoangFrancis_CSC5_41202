/* 
    File:   main.cpp
    Author: Francis Hoang
    Created on February 4th, 2016, 9:39 AM
    Purpose:  Function to find the area and perimeter of a triangle
 */

//System Libraries
#include <iostream> //I/O
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void triCalc(float, float,float, float&, float&); //calculate area and 
                                                   //perimeter



//Execution Begins Here
int main(int argc, char** argv) {
    
    char yes;
    do{
    //Declare variables
        float a, b, c, area, pmeter; //3 sides, area, perimeter
    //execute function
        cout<<"What is the length of the first side?"<<endl;
        cin>>a;
        while(a<=0){
            cout<<"Invalid input. Enter again:"<<endl;
            cin>>a;
        }
        cout<<"What is the length of the second side?"<<endl;
        cin>>b;
        while(b<=0){
            cout<<"Invalid input. Enter again:"<<endl;
            cin>>b;
        }
        cout<<"What is the length of the third side?"<<endl;
        cin>>c;
        while(c<=0){
            cout<<"Invalid input. Enter again:"<<endl;
            cin>>c;
        }
        triCalc(a,b,c,area,pmeter);
        
        if(isnan(area)){
            cout<<"Triangle cannot exist."<<endl;
        }else{
            cout<<"The area of the triangle is "<<area<<
                    " and the perimeter is "<<pmeter<<endl;
        }
        
        
        cout<<"Repeat test?"<<endl;
        cin>>yes;
    }while(tolower(yes)=='y');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Calculate area and perimeter

//******************************************************************************
void triCalc(float a, float b, float c, float& area, float& pmeter){
    pmeter = a+b+c;
    float s =(a+b+c)/2.0f;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    
    
}

