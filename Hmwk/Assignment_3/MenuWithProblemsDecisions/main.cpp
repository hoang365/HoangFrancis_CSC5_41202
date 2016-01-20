/* 
     File:   main.cpp
     Author: Francis Hoang
     Created on January 19, 2016, 9:18 AM
     Purpose: Multiple problems
 */
//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function prototypes

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
        cout<<"Type anything else to exit "<<endl;
        cin>>nSoltn;
    
    //menu to display solution
        
            switch(nSoltn){
                case 1:{
                    cout<<"Solution to Savitch 8thEd Chap3 Prob10"<<endl;
                    cout<<"The Fibonacci Sequence"<<endl<<endl;
                            //declare variables
                            unsigned int fi,fim1,fim2; //Designations in the seqeunce
                            unsigned short nTerms;//number of terms in the sequence
                            unsigned short counter;//current position in the sequence
                            const char DREPRO = 5;     //Days to reproduce
                            float crudWt;          //Weight of crud;
                            unsigned int nDays;    //Number of days to grow Crud
                            //Initialize the sequence
                            fim2=fim1=1;         //start the sequence
                            counter=2;           //initialize the counter
                            //input the number of terms                    
                            cout<<"Input the initial weight of the crud in lbs"<<endl;
                            cin>>crudWt;
                            cout<<"How many days will the crud be allowed to grow"<<endl;
                            cin>>nDays;

                            nTerms=nDays/DREPRO+1;
                            //Output or calculate the output required
                            if(nTerms==1){
                                cout<<"Term "<<nTerms<<" in the sequence = "
                                <<fim2<<endl<<endl;
                                cout<<"After "<<nDays<<" days the crud weighs "<<fim2*crudWt<<"(lbs)"<<endl<<endl;
                            }else if(nTerms==2){
                                cout<<"Term "<<nTerms<<" in the sequence = "
                                <<fim2<<endl<<endl;
                                cout<<"After "<<nDays<<" days the crud weighs "<<fim1*crudWt<<"(lbs)"<<endl<<endl;
                            }else{
                                do{
                                    fi=fim1+fim2;
                                    counter++;
                                    fim2=fim1;
                                    fim1=fi;
                                }while(counter<nTerms);
                            cout<<"Term "<<nTerms<<" in the sequence = "<<
                            fi<<endl<<endl;
                            cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt<<"(lbs)"<<endl<<endl;
                            }        
                    break;
                }
                case 2:{
                    //Declare and initialize variable for etox
                        //Declare and initialize variable for etox
                        cout<<"Solution to Savitch 8thEd Chap3 Prob11"<<endl;
                        cout<<"e to the power of x"<<endl<<endl;
                        float etox=1,x; //e^x
                        float tol = 1e-6f;
                        float term = 1;
                        unsigned int nTerm; //counter to determine how many terms
                        //input the value x
                        cout<<"Input x of e^x computation"<<endl;
                        cin>>x;

                        //Calculate e^x
                        for(nTerm=1;term > tol;term*=x/nTerm++, etox+=term);


                        //Output the results
                        cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
                        cout<<"The number of terms it took to aprox e^"<<x<<"="<<nTerm<<endl;
                        cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;

                    break;
                }
                case 3:{
                    cout<<"Solution to Savitch 8thEd Chap3 Prob12"<<endl;
                    cout<<"Aproximating pi"<<endl<<endl;
                        float pi = 4, n, piValue; 
                        //input the value x
                        cout<<"Input n for how many values of pi"<<endl;
                        cin>>n;

                        for(int i = 0; i<=n;i++){
                             piValue += pow(-1,i)/(2*i+1);

                        }
                        //Calculate pi
                        pi *= piValue;


                        //Output the results

                        cout<<"The approximate value of pi calculated to "<<n<<" terms is "<<pi<<endl<<endl;
                    break;
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

