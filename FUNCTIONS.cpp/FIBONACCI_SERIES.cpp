#include <iostream>
using namespace std;

void Fibonacci_series (int n){

    int first = 0;
    int second =1;
    int next;

    cout<<"The Fibonacci series is : "<<endl;

    for(int i=0; i<n; i++){

    cout<<first<<endl;
    next = first + second;
    first = second;
    second = next;

    }


}


int main(){

int n;
cout<< "Enter the terminating number which you will want"<<endl;
cin>>n;
 Fibonacci_series(n);

    return 0;
}