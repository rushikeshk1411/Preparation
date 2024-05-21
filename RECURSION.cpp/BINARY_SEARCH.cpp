#include <iostream>
using namespace std;

//BS = Binary Search 

bool BS (int arr[], int s, int e, int K, int size){

// Base Case

if (s>e){
    return false ;
}

int mid = s + (e-s)/2;

// Elemnt Found
 if (arr[mid] == K){
    return true;
}

// Recursion Relation and operation



if (K < arr[mid] ){
    BS(arr,s,mid-1,K,size);
}
else if (K > arr[mid]){
     BS(arr,mid+1,e,K,size);
}


}

int main(){

int arr[10] = {1,2,3,4,5,6,7,8,9,10};

cout<<BS(arr,0,9,99,10);

    return 0;
}