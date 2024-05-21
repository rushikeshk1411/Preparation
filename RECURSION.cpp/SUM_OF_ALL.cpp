#include <iostream>
using namespace std;

int SUM_OF_THE_ARRAY (int *arr, int size){

    //Base case
    if (size == 0){
        return 0;
    }

    if (size == 1){
        return arr[0];
    }

    //Recursive relationship

    int sum  = SUM_OF_THE_ARRAY(arr+1, size-1);
    int ans = arr[0] + sum ;

    

    }



int main(){

int arr[10] = {2,5,3,6,9,1,5,77,6,4};

cout<<"The Sum of the array is : "<<SUM_OF_THE_ARRAY(arr,10);

    return 0;

}
