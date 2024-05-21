#include<iostream>
using namespace std;

class Stack {

    public:
    //Properties:
    int* arr;
    int top;
    int size;

    //Behaviour:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty "<<endl;
            return -1;
        }

    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

    Stack Rushi(5);

    Rushi.push(5);
    Rushi.push(9);
    Rushi.push(10);
    Rushi.push(14);

    cout<<Rushi.peek()<<endl;

    Rushi.pop();

    cout<<Rushi.peek()<<endl;

    Rushi.pop();

    cout<<Rushi.peek()<<endl;

    Rushi.pop();

    cout<<Rushi.peek()<<endl;
    
    Rushi.pop();

    
    cout<<Rushi.isEmpty()<<endl;

    return 0;
}