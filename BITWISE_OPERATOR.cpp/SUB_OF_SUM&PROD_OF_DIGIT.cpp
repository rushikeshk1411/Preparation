#include<iostream>
using namespace std;

int Sub (int &n){
    
int sub = 0;
int sum = 0;
int prod = 1;
    while(n != 0){
        int digit = n % 10;
        sum = digit + sum ;
        prod = prod * digit;
        n  = n/10;
    }
    sub = prod - sum;
    
}

int main(){

int n;
cin>>n;

Sub(n);

//cout<<s<<endl;

    return 0;
}