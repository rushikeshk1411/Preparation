#include <iostream>
#include <map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node (){
        if (this->next == NULL)
            delete next;
    }
};

void InsertAtTail (Node* &tail, int element, int data){
    
     
    if (tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;
        while(element != curr->data){
            curr = curr->next;
        }  

        Node* NodeToInsert = new Node (data);
         NodeToInsert->next = curr->next;
        curr->next = NodeToInsert;
           // return tail;
        }      
    }

void print (Node* &tail){
    Node* temp = tail;

    if (tail == NULL){
        return;
    }
    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);
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

/*
bool IsCircularOrNot (Node* head){
    Node* curr = head;
    Node* temp = head->next;

    while(temp != head && temp != NULL){
        if (temp->next == head){
            return true;
        }
        else{
            temp = temp->next;
        }
    }
    return false;
}
*/

int main(){


    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail (tail, 5,6);
    InsertAtTail (tail, 6,7);
    InsertAtTail (tail, 7,8); 
    InsertAtTail (tail, 8,9); 
    InsertAtTail (tail,9,10);
    print(tail);

    cout<<"Yes Or No " <<IsCircularOrNot(tail);


    return 0;
}

