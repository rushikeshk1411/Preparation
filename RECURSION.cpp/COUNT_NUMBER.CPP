#include <iostream>
using namespace std;

void COUN_RETURN (int n){

// Base case 
if (n==0){
    return ;
}

//REcursive relation;
cout<<n<<endl;

COUN_RETURN(n-1);


}

int main(){

int n = 4;
    COUN_RETURN(n);
    
    return 0;

}