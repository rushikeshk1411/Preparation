#include <iostream>
using namespace std;

// class Node{

//     public:
//     Node* next = NULL;;
//     int data;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

class Stack {

    public:
    Stack* head;
    Stack* next;
    int data;
    int top = -1;

    Stack(int data){
        this->data = data;
         this->next = NULL;
    }

    void push(Stack* &head, int data){
        Stack* temp = new Stack(data);
        temp->next = head;
        head = temp;
        }

    void pop(){
        if(head == NULL || head->next == NULL){
            return;
        }
        Stack* NOdeToDelete = head->next;;
        delete(NOdeToDelete);
        head = head->next;
    }

    int peek(){
        int n = head->data;
        return n;
    }

    bool IsEmpty(Stack* &head){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack * Rushi = new Stack(11);

    Stack* head = Rushi;

    Rushi->push(head,12);
    Rushi->push(head,14);
    Rushi->push(head,56);

    Rushi->pop();
    Rushi->pop();
    Rushi->pop();
    cout<<Rushi->IsEmpty(head);



    return 0;
}