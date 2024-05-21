#include <iostream>
using namespace std;

string ReverseString (string &str, int s, int n){
   // cout<<str<<endl;
   int e =  n-s-1;
    //Base Case
    if (s > e){
        return str;
    }

    //Oppeation and recursion relationshio

    swap(str[s], str[e]);
    s++;
    n--;

    //Recursive call
    ReverseString (str, s,n);
    // return str;
}

int main(){
    string str = "Rushikesh";
    int s = 0;
    int n = str.length();
     ReverseString(str,s,n);
    cout<<str<<endl;
    //"The answer is :  "<< str << endl;
    return 0;
}