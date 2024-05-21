#include <iostream>
using namespace std;

bool Sort (int arr[], int n){


    //Base Case
    if (n==0 || n==1){
        return true;
    }
    

    // recusrsion condition and and operation
    if (arr[0] > arr[1])
        return false;
    
    Sort (arr+1,n-1);
   
}

int main(){

    int arr[7] = {1,4,7,3,8,9,2};
    int n = 7;

   cout<<Sort (arr, n);


    return 0;
}

