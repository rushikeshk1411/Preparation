#include <iostream>
using namespace std;

void Print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void Reverse (int arr[], int n){

    int i =0; 
    int j = n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    Print(arr,n);
}


int main(){

int arr [10] = {1,2,3,4,5,6,7,8,9,10};

Reverse(arr,10);

    return 0;
}