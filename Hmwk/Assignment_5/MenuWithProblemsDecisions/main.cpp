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
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void tInput(unsigned int&, unsigned int&, unsigned int&);     //input
void timeCon(unsigned int&, char&);                           //convert time 
void tOutput(unsigned int, unsigned int, unsigned int, char); //output
void sDevi(float, float, float, float); //standard deviation
float getAvg(float, float, float, float); //gets the average
float getVar(float, float, float, float, float);    //gets the variance
void input2(float&, float&); //input problem 2
void convert2(float, float, float&, float&); //converts problem 2
void output2(float, float, float, float);    //output problem 2
void input3(float&, float&); //input problem 3
void convert3(float, float, float&, float&); //converts problem 3
void output3(float, float, float, float);    //output problem 3
void triCalc(float, float, float, float&, float&); //area and perimeter
         
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
                    problem1();break;
                }
                case 2:{                    
                    problem2();break;
                }
                case 3:{                    
                    problem3();break;
                }
                case 4:{                    
                    problem4();break;
                }
                case 5:{                    
                    problem5();break;
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

void problem1(){
    cout<<endl<<"Solution to Savitch 9thEd Chap5 Prac Prog 1"<<endl;
    cout<<endl<<"Calculate Standard Deviation"<<endl<<endl;
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    char yes;
    do{
    //Declare variables
        float s1=rand() % 100 + 1;
        float s2=rand() % 100 + 1;
        float s3=rand() % 100 + 1;
        float s4=rand() % 100 + 1;

        //execute function
        sDevi(s1,s2,s3,s4);
        cout<<"Repeat test?"<<endl;
        cin>>yes;
    
    }while(tolower(yes)=='y');
}

void problem2(){
    cout<<endl<<"Solution to Savitch 9thEd Chap5 Prac Prog 2"<<endl;
    cout<<endl<<"Convert ft to meters"<<endl<<endl;

    char yes;
        do{
        //Declare variables
            float ft, inches, meter, cm;
        //execute function
            input2(ft, inches);
            convert2(ft, inches, meter, cm);
            output2(meter, cm ,ft, inches);


        cout<<"Repeat test?"<<endl;
        cin>>yes;

        }while(tolower(yes)=='y');
}
void problem3(){
    cout<<endl<<"Solution to Savitch 9thEd Chap5 Prac Prog 5"<<endl;
    cout<<endl<<"Convert lbs to kg"<<endl<<endl;

    char yes;
        do{
        //Declare variables
            float lb, oz, kg, g;
        //execute function
            input3(lb, oz);
            convert3(lb, oz, kg, g);
            output3(lb,oz,kg, g);


        cout<<"Repeat test?"<<endl;
        cin>>yes;

        }while(tolower(yes)=='y');
}
void problem4(){
    cout<<endl<<"Solution to Savitch 9thEd Chap5 Prac Prog 9"<<endl;
    cout<<endl<<"Calculate area and perimeter of triangle"<<endl<<endl;

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
}
void problem5(){
    cout<<endl<<"Solution to Savitch 9thEd Chap5 Prog Project 1"<<endl;
    cout<<endl<<"Convert time from 24-hour notation to 12-hour notation"<<endl
            <<endl;

    char yes;
    do{
    //Declare variables
        unsigned int oHour,hour; //initial hour, hours
        unsigned int min;        //mins
        char meri;          //AM PM
    //execute function
        tInput(hour, min,oHour); //input time in 24-hour notation
        timeCon(hour, meri);      //converts time
        tOutput(hour, min, oHour,meri); //output time in 12-hour notation
        cout<<"Repeat test?"<<endl;
        cin>>yes;
    }while(tolower(yes)=='y');
    
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//       /               Input Time

//******************************************************************************
void tInput(unsigned int& hour,unsigned int& min,unsigned int& oHour){
    cout<<"Enter the time (HH MM)"<<endl;
    cin>>hour>>min;
    while(hour>23 || min>59){
        cout<<"Please enter a valid time:"<<endl;
        cin>>hour>>min;
    }
    oHour = hour;
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      convert time

//******************************************************************************
void timeCon(unsigned int& hour, char& meri){
    if(hour>=12){
        meri = 'P';
        if(hour > 12){
            hour -= 12;
        }
    }else if(hour ==0){
        meri = 'A';
        hour = 12;
    }else{
        meri = 'A';
    }
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      output time

//******************************************************************************
void tOutput(unsigned int hour, unsigned int min, unsigned int oHour,
        char meri){
    cout<<oHour<<":";
    if(min<10){
        cout<<"0"<<min;
    }else{
        cout<<min; 
    }
    cout<<" is "<<hour<<":";
    if(min<10){
        cout<<"0"<<min;
    }else{
        cout<<min; 
    }
    if(meri == 'A'){
        cout<<" AM"<<endl;
    }
    else{
        cout<<" PM"<<endl;
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      standard deviation
//Inputs:
//  s1,s2,s3,s4 -> scores
//Outputs:
//  avg-> average
//  sd -> standard deviation
//******************************************************************************
void sDevi(float s1, float s2, float s3, float s4){
    float avg = getAvg(s1,s2,s3,s4);
    float var = getVar(s1,s2,s3,s4 ,avg);
    float sd = sqrt(var);
    cout<<"From the scores of "<<s1<<", "<<s2<<", "<<s3<<", and "<<s4<<":"
            <<endl;
    cout<<"The average is "<<avg<<"."<<endl;
    cout<<"The standard deviation is "<<sd<<"."<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Average
//Inputs:
//  s1,s2,s3,s4->numbers to be calculated

//******************************************************************************
float getAvg(float s1, float s2, float s3, float s4){
    return (s1+s2+s3+s4)/4.0f;
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Variance
//Inputs:
//  s1,s2,s3,s4 -> scores


//******************************************************************************
float getVar(float s1, float s2, float s3, float s4, float a){
    return (pow(s1-a,2.0f)+pow(s2-a,2.0f)+pow(s3-a,2.0f)+
            pow(s4-a,2.0f))/4.0f;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Input

//******************************************************************************
void input2(float& ft, float& inches){
    
    cout<<"Enter the number of feet:"<<endl;
    cin>>ft;
    cout<<"Enter the number of inches:"<<endl;
    cin>>inches;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Convert


//******************************************************************************
void convert2(float ft, float inches, float& meter, float& cm){
    ft += inches/12.0f;
    meter = ft*.3048f;
    cm = (meter-static_cast<unsigned int>(meter))*100.0f;
    meter =static_cast<unsigned int>(meter);

   
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Output



//******************************************************************************
void output2(float meter, float cm ,float ft, float inches){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<ft<<" ft and "<<inches<<" inches is equal to "<<meter<<" meters and"
            " "<<cm<<" cm"<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Input

//******************************************************************************
void input3(float& lb, float& oz){
    
    cout<<"Enter the number of pounds:"<<endl;
    cin>>lb;
    cout<<"Enter the number of ounces:"<<endl;
    cin>>oz;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Convert
//
// 

//******************************************************************************
void convert3(float lb, float oz, float& kg, float& g){
    lb += oz/16.0f;
    kg = lb/2.2046f;
    g = (kg-static_cast<unsigned int>(kg))*1000.0f;
    kg =static_cast<unsigned int>(kg);

   
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Output



//******************************************************************************
void output3(float lb, float oz ,float kg, float g){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<lb<<" pounds and "<<oz<<" ounces is equal to "<<kg<<" kilograms and"
            " "<<g<<" grams"<<endl;
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