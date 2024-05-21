#include <iostream>
using namespace std;

int ReturnSum (int *arr, int size){

    //Base Case

    if (size == 0){
        return 0;
    }
    if (size == 1){
        return arr[0];
    }

    ///Recursion Relationship

    int ans = 0;
    ans = arr[0] +  ReturnSum(arr+1, size-1);
    return ans;
}

int main(){
    int arr[5] = {1,2,3,567,5};

int ans = ReturnSum(arr, 5);
cout<<ans<<endl;
    return 0;
}