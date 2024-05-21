#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int>q;

q.push(12);

cout<<q.front()<<endl;

q.push(15);

q.push(17);

q.pop();

cout<<q.front()<<endl;

cout<<q.empty()<<endl;

cout<<q.size()<<endl;

q.pop();
q.pop();

cout<<q.empty()<<endl;

cout<<"The front element is :"<<q.front()<<endl;
    
return 0;
}