#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"HII WRITE THE N"<<endl;
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;

    while(n != 0){
        int bits = n&1;

        ans = bits * pow(i,10) + ans;
        i++;
    }
    cout<<ans<<endl;


        return 0;
}