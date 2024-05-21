#include <iostream>
using namespace std;
int factorial (int n){

    //Base Case 
    if (n==0){
        return 1;
    }

    // RETURN RELATION 

    return n * factorial (n-1);
}

int main(){
    int n = 4;
    cout<< factorial (n) << endl;
    return 0;

}