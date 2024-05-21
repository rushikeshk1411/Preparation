#include <iostream>
using namespace std;

int Calculate_notes (int amount ){

    
    int notes = 0;

switch (1){
    //For calculating requires 500rs notes
    case 1:
        notes = amount / 500;
        cout<<"Your 500 rs notes are : "<<notes<<endl;
        amount = amount % 500;
    

    //For calculating requires 100rs notes
     case 2:
        notes = amount / 100;
        cout<<"Your 100 rs notes are : "<<notes<<endl;
        amount = amount % 100;
    

     case 3 : 
        //For calculating requires 100rs notes
        notes = amount / 50;
        cout<<"Your 500 rs notes are : "<<notes<<endl;
        amount = amount % 50;
    
    
    case 4: 
         //For calculating requires 100rs notes
        notes = amount / 10;
        cout<<"Your 10 rs notes are : "<<notes<<endl;
        amount = amount % 10;
     
    
    //For calculating requires 2rs notes
    case 5: 
        notes = amount / 2;
        cout<<"Your 2 rs notes are : "<<notes<<endl;
        amount = amount % 2;
    

     //For calculating requires 1rs notes
    case 6 :
        notes = amount / 1;
        cout<<"Your 1 rs notes are : "<<notes<<endl;
    }
}


int main(){

    int amount;
    cout <<"Enter The amount : " <<endl;
    cin>>amount;

    Calculate_notes(amount);
    return 0;
}