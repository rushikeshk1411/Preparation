#include <iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* prev;
    Node* next;

    Node (int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if (next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free of hte node for the data is: "<<value<<endl;
    }
};

int Getlenght(Node* &Head){
    Node* temp = Head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void Print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
cout<<endl; 
}

void InsertAtHead (Node* &head,Node* &tail, int data){

    //IF the link list had null
    if (head == NULL){
    Node* temp = new Node(data);
    head = temp;
    tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
   // Node* temp = head;
    }
}

void InsertAtTail(Node* &tail,Node* &head, int data){
      if (tail == NULL){
    Node* temp = new Node(data);
    tail = temp;
    head = temp;
    }
    else{
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
}

    void InsertAtPosition (Node* &head,Node* &tail, int Position, int data){

        //Sarting wala case sambhal liya hai bhai;
        if (Position == 1){
            InsertAtHead(head,tail,data);
            return;
        }
        //This is an middle wala case;

        Node* temp = head;
        int count = 1;

        while(count<Position-1){
            temp = temp->next;
            count++;
        }

        // If your entered position is at the last of the linkselist;
        if(temp->next == NULL){
            InsertAtTail(tail,head,data);
            return;
            }
        

        Node* InsertAtNew = new Node(data);
        InsertAtNew->next = temp->next;
        temp->next->prev = InsertAtNew;
        temp->next = InsertAtNew;
        InsertAtNew->prev = temp;
    }


    void DeleteTheNode (Node* &head, Node* &tail, int position){
        if (position == 1){
            Node* & temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            Node* curr = head;
            Node* pre = NULL;

            int count = 1;
            while(count< position){
                pre = curr;
                curr = curr->next;
                count++;
            }

            curr->prev = NULL;
            pre->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }

int main(){

    Node* node1 = new Node(12);
    Node* head = node1;
    Node* tail = node1;

    Print(head);
    cout<<"Length of the LL is: "<<Getlenght(head)<<endl;
    InsertAtHead(head,tail,18);
    InsertAtHead(head,tail,19);
    InsertAtHead(head,tail,21);
    Print(head);

    InsertAtTail(tail,head,25);
    Print(head);

    InsertAtPosition(head,tail,4,100);
    Print(head);
    InsertAtPosition(head,tail,1,101);
    Print(head);
    InsertAtPosition(head,tail,8,109);
    Print(head);

    DeleteTheNode(head,tail,4);
    Print(head);
}