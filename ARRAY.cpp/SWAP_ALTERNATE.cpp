#include <iostream>
using namespace std;

void Print (int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void Swap_alternate (int arr[], int n){
    for(int i=0; i<n; i+=2){
        swap(arr[i], arr[i+1]);
    }
    
}

int main (){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    Swap_alternate (arr, n);
    Print(arr,n);

}