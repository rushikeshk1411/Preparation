#include <iostream>
using namespace std;

int FindSquare (int n){

    int s = 1;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<e){
        if (n < mid * mid){
            e = mid - 1;
        }
        else if (n > mid * mid){
            ans = mid;
            s = mid + 1;
        }
        else {
            ans = mid;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int square = 36;
   cout<<"The square root is :  "<<FindSquare(36);
   

    return 0;
}