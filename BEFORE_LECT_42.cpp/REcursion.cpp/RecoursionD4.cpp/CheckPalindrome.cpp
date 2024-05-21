#include <iostream>
using namespace std;

bool IsPalindrome (string str, int s, int e){

    //Base case 
    if (s>e){
        return true;
    }

    //Operation
    if (str[s] != str[e]){
        return false;
    }
    else {
        s++;
        e--;
        IsPalindrome(str,s,e);
    }
}

int main(){
string str = "aaaaab";
cout<<"Hello world";
if ( IsPalindrome(str,0,str.length()-1)){
    cout<<"Yes bro I am a Palindrom";
}
else {
    cout<<"NO brother I am not a palindrome";
}
    return 0;
}