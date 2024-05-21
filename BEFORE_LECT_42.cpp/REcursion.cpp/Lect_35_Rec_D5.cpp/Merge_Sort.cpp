#include <iostream>
using namespace std;
void Merge(int *arr, int s, int e){

int mid = (s+e)/2;
int len1 = mid - s + 1;
int len2 = e - mid;

int *first = new int [len1];
int *second = new int [len2];

// Coping The values

int MainArrayIndex = s;
for (int i=0; i<len1; i++){
    first[i] = arr[MainArrayIndex++];
}

MainArrayIndex = mid + 1;
for(int i=0; i<len2; i++){
    second [i] = arr[MainArrayIndex++];
}

//Merge Two Sorted Array

int index1 = 0;
int index2 = 0;
MainArrayIndex = s;
while(index1 < len1 && index2 < len2){
    if (first[len1] < second [len2]){
        arr[MainArrayIndex++] = first[len1++];
    }
    else {
        arr[MainArrayIndex++] = second[len2++];
}

while(index1 < len1 ){
    arr[MainArrayIndex++] = first[len1++];
}
while(index2 < len2){
    arr[MainArrayIndex++] = second[len2++];
}
}
    }
void MErgeSort (int *arr, int s, int e){

//Base condition
if (s >= e){
    return;
}

//Operation and the Recursion Relationship

int mid = (s + e)/2;

//Left Side Ko sort Karo

MErgeSort(arr,s,mid);

//Right Side ko Sort karo

MErgeSort(arr,mid+1,e);

Merge(arr,s,e);

}

int main(){
    int arr [8] = {1,3,6,3,1,766,98,24};

    MErgeSort(arr,0,7);
    for(int i=0; i<=7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}