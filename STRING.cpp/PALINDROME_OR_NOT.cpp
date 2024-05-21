#include <iostream>
using namespace std;

bool PalindromeOrNot (string sc){
    int n = sc.length();
    for (int i=0; i<sc.length(); i++){
        int s = 0; 
        int e = n-1;
        while(s<e){
            if (sc[s++] != sc[e--]){
                return false;
            }
            else {
                return true;
            }
        }

    }
}


int main(){

string sc = "abccba";

cout<<PalindromeOrNot(sc)<<endl;

    return 0;
}