#include <iostream>
using namespace std;
bool CheckPalindrome (string &str, int s , int e){
    // Base case
    if (s > e)
        return true;

    if (str[s] != str[e]){
        return false;
    }
    else {
        CheckPalindrome(str, s++, e--);
    }
    
}

int main() {

    string str = "aaabaaa";
    bool abc = CheckPalindrome(str, 0, str.length() - 1);
    cout<<"Your ans is : "<<abc<<endl;
    return 0;
}