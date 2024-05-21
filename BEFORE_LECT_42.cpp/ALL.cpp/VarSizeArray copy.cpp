#include <iostream>
using namespace std;

int Getsum (int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){

int n;
cin>>n;
int* brr = new int [n];

//Taking output in an array

for(int i=0; i<n; i++){
    cin>>brr[i];
}
Getsum (brr, n);


}