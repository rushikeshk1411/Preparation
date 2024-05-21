#include <iostream>
using namespace std;


int Returnans (int a, int b){

return((a>b) ? a : b );

}
int main () {
    /*
    int PI = 3.14;
    int r = 4;
    int area = 0;
    area = PI * r * r;
    cout<<area<<endl;
    */
   int a = 17;
   int b = 12;

    int ans = Returnans(a,b);
    cout<<ans;
    a++;
    b = b + 12;
    ans = Returnans(a,b);
    cout<<ans<<endl;
    return 0;
}  

