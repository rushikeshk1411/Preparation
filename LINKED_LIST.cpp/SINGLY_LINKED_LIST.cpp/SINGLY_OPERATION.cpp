#include <iostream>
#include<map>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // ~Node(int  data){
    //     this->data = data;

    //     this->next = next;
    // }

};

Node* InsertAtHead (Node* &head,Node* &tail, int data){
    Node* curr = head;
    Node* temp = new Node (data);
    temp->next = curr;
    head = temp;
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return head;
}

Node* InsertAtTail(Node* &head,Node * &tail, int data){
    Node* curr = tail;
    Node* temp = new Node (data);
    curr->next = temp;
    tail = temp;
    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;
    return head;
}

Node* InsertAtPosition(Node* &head, Node* &tail, int position, int data){

    //If position is 1

    if (position == 1){
        InsertAtHead(head,tail,data);
        return head;
    }

    //Count karun ghrshil an tithe takun deshil okk
    int count = 1;
    Node* temp = head;

    if (temp->next == NULL){
        InsertAtTail(head, tail,data);
        return head;
    }
    while(position - 1 > count){
        temp = temp->next;
        count++;
    }

    //Node* prev = NULL;
    Node* forward = temp->next;
    Node* InsertNode = new Node(data);

    InsertNode->next = forward;
    temp->next = InsertNode;
    return head;
}

Node* DeleteNode (Node* &head, Node* &tail, int position){

    int count = 1;
    Node* temp = head;
    Node* forward = temp->next;

    while(position-1 > count){
        temp = temp->next;
        count++;
    }

    temp->next = forward->next;
    forward->next = NULL;
    delete (forward);
    return head;
}

void Print (Node* &head){
    
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool IsCircularOrNot (Node *head){
    map<Node*, bool>visited;

    Node* curr = head;
    while(curr != NULL ){
        if (visited[curr] != true){
            visited[curr] = true;
            curr = curr->next; 
        }
        else{
            return true;
        }

    }
    return false;
}


int main(){

    Node* newNode = new Node(5);
    Node* head = NULL;
    Node* tail = NULL;

    if (head == NULL){
    head = newNode;
    tail = newNode;
    }

    Print (head);

    //TO ADD AT HEAD
    InsertAtHead (head,tail, 4);
    Print (head);

    InsertAtHead (head,tail, 3);
    Print (head);

    InsertAtHead (head,tail, 2);
    Print (head);

    //TO ADD AT TAIL

    InsertAtTail (head,tail, 6);
    Print(head);

    InsertAtTail (head,tail, 7);
    Print(head);

    InsertAtTail (head,tail, 8);
    Print(head);

    //THIS IS FOR POSITION

    InsertAtPosition(head,tail, 1, 9);
    Print(head);


    // DeleteNode(head,tail,4);
    // Print(head);

    cout<<IsCircularOrNot(head)<<endl;


}