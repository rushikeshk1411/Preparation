#include <iostream>
using namespace std;

bool Search(int arr[], int size, int key){

    //Base Case
    if (size == 0){
        return false;
    }

    // Wring other procces and the Recursion Relation

    if (arr[0] == key){
        return true;
    }
    else{
       bool ans = Search(arr+1,size-1, key);
       return ans;
    }
}

int main(){
    int arr [5] = {1,2,3,4,5};
    int size = 5;
    int key = 900;

bool ans = Search (arr, size , key);
if (ans){
    cout<<"OKK BHAI mil gaya";
}
else {
    cout<<"Nahi mila bhai dusara dal de";
}
    return 0;
}