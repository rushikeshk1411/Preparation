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
};
  
void InsertNode(Node* &tail,int element, int data){
    //Asuming the element is present in the list;

    //If the LL is empty

    if (tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode; 
        newNode->next = newNode;
    }
    else{
    //If the LL is not empty
    //Asuming element are present in the LL

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }
    //Ab element mil gaya hoga;

        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

bool IsCircularOrNot(Node* head){
    if (head == NULL ){
        return true;
    }

    Node* temp = head->next;

    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if (temp == head){
        return true;
    }
    return false;
}

void Print(Node* tail){
    Node* temp = tail;

    if (tail == NULL){
        cout<<"bhau sudhara link list is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    
    }
    while(tail != temp);
    cout<<endl;
}

int main(){

    Node* tail = NULL;

    InsertNode(tail,14,12);
    Print(tail);

    InsertNode(tail,12,14);
    Print(tail);

    InsertNode(tail,14,15);
    Print(tail);

    InsertNode(tail,15,16);
    Print(tail);


    InsertNode(tail,14,11);
    Print(tail);

    
    InsertNode(tail,16,17);
    Print(tail);
    
    if (IsCircularOrNot(tail)){
        cout<<"Yes this is a circular list"<<endl;
    }
    else{
        cout<<"No bhai ye to nahi hai";
    }


    return 0;
}
