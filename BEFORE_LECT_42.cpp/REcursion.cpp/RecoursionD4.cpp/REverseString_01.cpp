#include <iostream>
using namespace std;

void REverseString (string &str, int s, int e){
    cout<<str<<endl;
    //Base Case
    if (s>e){
        return ;
    }
    swap(str[s++], str[e--]);
    REverseString(str,s,e);
    }

int main (){

string str = "Rushikseh";
REverseString(str, 0 , str.length() - 1);
cout<<str<<endl;

    return 0;
}