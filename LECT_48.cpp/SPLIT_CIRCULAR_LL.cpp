#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void INSERTATPOSITION(Node* tail,int data){
    

    //IF THE LINKED LIST IS EMPTY:
    if (tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }

    //THIS CASE IS FOR THE LINKED LIST IS NOT EMPTY;
    else{

        Node* curr = tail;
        Node* prev = curr->next;
        
    }

    
}



int main(){

    Node* tail = NULL;

    INSERTATPOSITION(tail,12);





    return 0;
}