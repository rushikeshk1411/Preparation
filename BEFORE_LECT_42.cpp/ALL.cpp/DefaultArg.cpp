#include <iostream>
using  namespace std;

void Print(int arr[] , int b, int start = 0){
    for(int i=start; i<b; i++){
        cout<<arr[i]<<endl;
    }
}

int  main(){

int arr[5] = {1,2,3,4,5};
Print(arr, 5);
}