#include <iostream>
using namespace std;

int POwer(int a, int b){

    //Base Case
    if (b== 0){
        return 1;
    }
    if (b==1){
        return a;
    }

    int ans = POwer(a,b/2);;
    //Operation Relation 
    //When even case is happened
    if (b%2==0){
     ans = ans * ans;
    return ans;
}
    else {
        ans = a * ans * ans;
        return ans;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans = POwer(a,b);
    cout<<ans <<endl;

}