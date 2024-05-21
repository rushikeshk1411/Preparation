#include <iostream>
using namespace std;

//Taking input in the array

void Input (int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int Sum (int arr[], int n){

    int sum = 0;

    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}


int main(){

int arr[10];
cout<<"Enter the element of the array"<<endl;

Input(arr,10);

int R = Sum(arr,10);

cout<<R<<endl;


    return 0;
}