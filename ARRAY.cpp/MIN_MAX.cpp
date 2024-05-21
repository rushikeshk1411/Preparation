#include <iostream>
#include <limits.h>
using namespace std;


int main(){
    
    int arr[10] = {1,4,7,9,44,2,66,76,90,234};
    int n = 10;
    int mini = INT_MAX;
    int maxi = INT_MIN;
for (int i=0; i<n; i++){

    mini = min(mini,arr[i]);
    maxi = max(maxi,arr[i]);
    //cout<<maxi<<" "<<endl;
}
cout<<"minumum element of an Array is : "<< mini << endl;
cout<<"Maximum element of an array is : "<<maxi<<endl;
    return 0;
}
