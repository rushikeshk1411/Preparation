#include <iostream>
using namespace std;
void Say_digit (string *arr, int n){

    //Base Case 
    if (n == 0){
        return ;
    }
    
     int digit = n % 10;
     n /= 10;


    Say_digit(arr, n);

    cout<<arr[digit]<< " ";


}

int main(){

    string arr[10] = {"", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT","NINE"};
    Say_digit (arr,445);

return 0;

}