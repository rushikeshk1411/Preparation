#include <iostream>
using namespace std;

int Power (int n){

//Base Case For the reccursion is compulsary means the mandatory
    if (n==0)
        return 1;
    
    //Recursive Relationship
return (2 * Power(n-1));

}

/*
int Factorial(int n){

    //Base Case+
    if (n==0){
        return 1;
    }

    return n * Factorial(n-1); 
}
*/
int main(){

    int n;
    cin>>n;
    //int ans = Factorial(n);
    int ans = Power(n);
    cout<<ans<<endl;

    return 0;

}