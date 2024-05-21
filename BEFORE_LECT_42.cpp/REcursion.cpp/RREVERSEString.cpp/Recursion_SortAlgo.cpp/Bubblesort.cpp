#include <iostream>
using namespace std;

void BUbbleSort(int *arr, int size){

    if (size == 0  || size == 1){
        return ;
    }

    for(int i=0; i<size-1; i++){
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
        BUbbleSort(arr,size-1);

    }
}

int main(){

    int arr[8] = {2,4,6,3,7,9,1,3};
    BUbbleSort(arr,8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}