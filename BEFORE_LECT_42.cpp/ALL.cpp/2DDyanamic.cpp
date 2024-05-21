#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Creating the 2D Dyanmic array

    int **arr = new int *[n];
    for(int i=0; i<n; i++){
        arr[i] = new int [n];

    }
    //Taking Input 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //Taking output of an array

    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j];" ";
        }
        
    }
}