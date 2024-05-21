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

    ~Node(){
        int value = this->data;
        if (this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Your memory is freed: "<<value<<endl;

    }
};

void InsertNode(Node* &tail , int element, int data){
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
/*
void DeleteNode(Node* tail, int position){
    Node* curr = tail;
    Node* pre = NULL;

    int count = 0;

    while(count < position){
        count++;
        pre = curr;
        curr = curr->next;
    }
    pre->next = curr->next;
    curr->next = NULL;
    delete curr;
} */

void DeleteNode (Node* &tail, int value){

    //If the LL is empty
    if (tail == NULL){
        cout<<"Are Bhai kya kr raha hai ye list to empty hai"<<endl;
        return;
    }
    else{
        //Non empty case
        //Assuming the "value is present in the Linked list";
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //This is for one node link list
        if (prev == curr){
            tail = NULL;
        }
        // >= 2 wali linklist
        if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;


    }
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
    

    DeleteNode(tail,12);
    Print(tail);




    return 0;
}