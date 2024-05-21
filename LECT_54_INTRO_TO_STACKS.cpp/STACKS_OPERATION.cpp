#include <iostream>
#include<stack>
using namespace std;

int main(){

//Creation of the stack 

    stack<int>first;

    first.push(3);  
    first.push(6);
    first.push(8); 

    first.pop();
   
   cout<<"The Size of the stack is : "<<first.size()<<endl;
    //cout<<"The top element is : "<<first.top()<<endl;
    
    cout<<"Empty or not : "<<first.empty();
    return 0;
}