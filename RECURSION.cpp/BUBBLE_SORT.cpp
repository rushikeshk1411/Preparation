#include <iostream>
using namespace std;

void Print (int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

void Bubble_Sort (int arr[], int size){

    // Base condition
    if (size == 0 || size == 1){
        return;
    }

    //Recusursion and operator 
    for(int i=0; i<size; i++){
    if (arr[0] > arr[1]){
        swap(arr[0], arr[1]);
    }
    else {
        Bubble_Sort(arr+1,size-1);
    }
}
}

int main(){

int arr[7] = {1,8,1,5,9,3,5};
Bubble_Sort(arr,7);
Print(arr,7);

    return 0;
}