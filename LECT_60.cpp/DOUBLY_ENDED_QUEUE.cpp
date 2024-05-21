#include<iostream>
#include<queue>
using namespace std;

int main(){

    deque<int>q;

    q.push_front(12);

    

    q.push_front(2);

    q.push_front(23);

    q.pop_front();
    q.pop_front();
    q.pop_front();

    if(q.empty()){
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"Bhai abi to hum zinda hai";
    }

    

    q.push_back(234);

     if(q.empty()){
        cout<<"The queue is empty"<<endl;
    }
    else{
        cout<<"Bhai abi to hum zinda hai"<<endl;
    }

    cout<<q.front()<<endl;

    cout<<q.back()<<endl;
    return 0;
}
