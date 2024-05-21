#include <iostream>
using namespace std;

void FIBONACCI (int n){

    //Base case
    if (n==0 && n== 1){
        return ;
    }
    cout<<"0 1 1";
    cout<<n<<" ";

    //REcursive Relation or 
    FIBONACCI(n) = FIBONACCI((n-1) + (n-2));
    
}

int main(){
    int n = 5;
    FIBONACCI(5);
    return 0;


}