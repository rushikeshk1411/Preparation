#include <iostream>
using namespace std;


void Print (int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


void Merge (int arr [], int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int * first = new int [len1];
    int * second = new int [len2];

    // FOR THE FIRST ARRAY
    int mainArrayIndex =s;
    for (int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    //FOR THE SECOND ARRAY
    mainArrayIndex = mid +1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //Hamane copy kar liya hai bad main hame inko sort bhi karana Padega na

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
            if (first[index1] < second[index2]){
                arr[mainArrayIndex++] = first[index1++];
            }
            else if (first[index1] >= second[index2]){
                arr[mainArrayIndex++] = second[index2++];
            }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    } 
    
}

void Merge_sORT (int arr[],int s, int e, int size){

    //Base case 
    if (s>=e){
        return;
    }

    int mid = s + (e-s)/2;

    //Right part ko sort karo

    Merge_sORT(arr,mid+1,e,size);

    //Left Part ko sort karo bhai

    Merge_sORT(arr,s,mid,size);

    Merge (arr,s,e);
}

int main(){

    int arr[10] = {1,4,8,6,2,3,6,84,11,2};
    Merge_sORT(arr,0,9,10);
    Print(arr,10);
}