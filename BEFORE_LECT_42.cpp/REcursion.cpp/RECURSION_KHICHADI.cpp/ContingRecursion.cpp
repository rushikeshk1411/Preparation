#include <iostream>
using namespace std;

void counting (int n){
    //Base Case 
    if (n==0){
        return ;
    }
    //recursuve funtion
    (counting(n-1));

     cout<<n<<endl;

}
int main(){
    int n;
    cin>>n;
    counting(n);
}