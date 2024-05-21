#include <iostream>
using namespace std;


int Power (int number, int res_to){
    int ans = 1;

    for(int i=1; i<=res_to; i++){
         ans = ans * number ;
    }
    return ans;
}

int main(){

    int res_to;
    int number;
cout<<"Enter the number and res_to"<<endl;
cin>>number>>res_to;
cout<<Power (number, res_to)<<endl;


    return 0;
}