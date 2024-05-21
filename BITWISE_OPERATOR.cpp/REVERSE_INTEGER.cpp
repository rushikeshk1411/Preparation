#include <iostream>
using namespace std;

    void reverse(int x) {
        int n = 0, r = 0;
        while(x!=0){
            r = x%10;
            
            // if((INT_MIN/10) >n||n > (INT_MAX/10)){
            //     return 0;
            // }
             cout<<n;
            n = r + (10*n);
            x = x/10;
           // cout<<n<<endl;
        }
        
    }

int main(){

int n;
n = 234;
reverse(n);
//cout<<q<<endl;
return 0;
}