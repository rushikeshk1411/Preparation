#include <iostream>
using namespace std;

bool IsSort (int *arr, int size){
    
// Base Case

if (size == 0 || size == 1)
return true;

//Recursion relatopnship and processing
if (arr[0] > arr[1]){
    return false;
}

else {
    bool NextStatement = IsSort(arr+1 , size -1);
    return NextStatement;
}
}

int main (){

int arr[5] = {1,22,3,9,77};
bool ans = IsSort(arr,5); 
if(ans){
    cout<<"OKk brother the array is sort";
}
else{
    cout<<"Array is not sorted";
}
return 0 ;
}