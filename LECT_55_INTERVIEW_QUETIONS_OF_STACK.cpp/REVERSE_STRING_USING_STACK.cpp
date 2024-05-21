#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str = "Rushi";

    stack<char>name;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        name.push(ch);
    }

    string ans = "";

    while(!name.empty()){
        char ch = name.top();
        ans.push_back(ch);
        name.pop();
    }


    cout<<"Ans is : "<<ans<<endl;
    

    return 0;
}