#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = prev;
    }

    ~Node (){
        if (this->next == NULL){
            delete (this->next);
        }
    }
};


Node* InsertAtHead (Node* &head, Node* &tail, int data){

    Node* temp = head;
    Node* NodeToInsert = new Node(data);
    NodeToInsert->next = temp;
    head = NodeToInsert;
    return head;
}

Node* InsertAtTail (Node* &head, Node* &tail, int data){
    Node* temp = tail;
    Node* NodeToInsert = new Node(data);
    temp->next = NodeToInsert;
    NodeToInsert->next = NULL;
    tail = NodeToInsert;
    return tail;
}

Node* InsertAtPosition (Node* &head, Node* &tail, int position, int data){

    if(position == 1){
        InsertAtHead (head, tail, data);
        return head;
    }
    Node* temp = head;
    

    if (temp->next == NULL){
        InsertAtTail(head, tail, data);
        return head;
    }
    int count = 4;
    while(count < position){
        count++;
        temp = temp->next;
    }

    Node* forward = new Node(data);
    forward = temp->next;
    temp->next = forward->next;
    forward->next->prev = temp;
    forward->next = NULL;
    return head;
}


Node* Delete (Node* head, Node* tail, int position){
    
    Node* temp = head;
    int count = 1;
    
    while(count < position-1){
        count++;
        temp = temp->next;
    }

    Node* forward = temp->next;
    temp->next = forward->next;
    forward->next->prev = temp;
    forward->next = NULL;

    return head;
    
}

void print(Node* head)  {      
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
}


int main(){

    Node* newNode = new Node(3);
    Node* head = NULL;
    Node* tail = NULL;

    if (head == NULL){
         head = newNode;
         tail = newNode;
    }

    InsertAtHead (head ,tail,2);
    print(head);

    InsertAtHead (head ,tail,1);
    print(head);

    InsertAtHead (head ,tail,0);
    print(head);

    InsertAtHead (head ,tail,-1);
    print(head);

    InsertAtTail(head, tail,4);
    print(head);

    InsertAtTail(head, tail,5);
    print(head);

    InsertAtTail(head, tail,6);
    print(head);

    InsertAtTail(head, tail,7);
    print(head);


    InsertAtPosition(head,tail,4,99);
    print(head);

    Delete(head, tail,5);
    print(head);

    return 0;
}