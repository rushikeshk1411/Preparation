#include <iostream>
using namespace std;

string RString(string &str,int size,int s,int e){
    
    // base case 
    if(s>=e){
        return str;
    }

    swap(str[s], str[e]);
    s++;
    e--;
    RString (str,size,s,e);
    return str;
}

int main(){


    string str = "Rushikesh";
    RString (str, 9,0,8);
    cout<<str<<endl;
          
    return 0;
}