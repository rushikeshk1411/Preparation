#include <iostream>
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


int main(){


    Node* head = NULL;
    Node* tail = NULL;

    InsertAtTail (tail, 5,6);
    InsertAtTail (tail, 6,7);
    InsertAtTail (tail, 7,8); 
    InsertAtTail (tail, 8,9); 
    InsertAtTail (tail,9,10);
    print(tail);


    return 0;
}