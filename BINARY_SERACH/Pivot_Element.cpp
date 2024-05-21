#include<iostream>
using namespace std;

int PivotElement (int *arr, int size){

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<e){
    

        if (arr[0] <= arr[mid]){
            s = mid + 1;
        }
        else if (arr[0] > arr[mid]){
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;

}


int main(){

    int arr[] = {3,4,1,2};
    int size = 5;

    cout<<"Pivot of the array is : " <<PivotElement(arr,size);

}