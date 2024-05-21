#include <iostream>
using namespace std;

int findUnique(int *arr, int size){

    int unique =  0 ;
    for(int i=0; i<size; i++){
       unique =  arr[i] ^ unique;
      // cout<<unique<<" ";
    }
    return unique;
}



int main(){

int arr[9] = {1,2,3,1,2,3,4,6,6};
int Unique = findUnique(arr,9);
cout<<Unique<<endl;
return 0;
}