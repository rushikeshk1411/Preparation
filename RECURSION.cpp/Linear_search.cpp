#include <iostream>
using namespace std;

bool LSearch (int arr[], int size, int K){

    //Base Condition 
    if (size == 0){
        return false;
    }

    if (arr[0] == K){
        return true;
    }
   LSearch(arr+1, size-1,K); 
}

int main(){

int arr[9] = {3,4,6,8,9,1,4,78,8};

cout<<LSearch (arr, 9,2);

    return 0;
}