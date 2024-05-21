#include <iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //CONSTRUCTOR
    Node (int data){
        this->data = data;
        this->next = NULL;
    }

    //DESTRUCTOR
    ~Node(){
        int value = this->data;
        // Memory is free
        if (this->next = NULL){
            delete next;
            //this->next = NULL;
        }
        cout<<"HEllo Bhai your memory is free Totally"<<value<<endl;
    }
};

    void InsertAtHead (Node* &head, int d){
        //NEW NODE CREATE KAR LETA HOON 
        Node *temp = new Node(d);
        temp->next = head;
        head =  temp;
    }


    void InsertAtTail(Node* &tail, int d){
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp; 

    }

    void InsertAtPosition (Node* &head,Node* &tail, int Position, int data){

        //Sarting wala case sambhal liya hai bhai;
        if (Position == 1){
            InsertAtHead(head,data);
            return;
        }
        //This is an middle wala case;

        Node* temp = head;
        int count = 1;

        while(count < Position-1){
            temp = temp->next;
            count++;
        }

        // If your entered position is at the last of the linkselist;
        if(temp->next == NULL){
            InsertAtTail(tail,data);
            return;
            }
        
        Node* InsertAtNew = new Node(data);
        InsertAtNew ->next = temp->next ; 
        temp->next = InsertAtNew;
    }

    void DeleteNode(Node* &head, int position){

        // Deleting the first or start Node   
        if (position == 1){
             Node* temp = head;
            head = head->next;
            //FREEUP THE SPACES;
            temp->next = NULL;
            delete temp;
        }
        else {
            //Deleting any middle or last Node;
            Node* curr = head;
            Node* prev = NULL;

            int cnt = 1;

            while(cnt < position){
                prev = curr;
                curr = curr->next;
                cnt++;

            }
             prev->next = curr->next;
             curr->next = NULL;
             delete curr;
            
            }
           
        }

  

    void print (Node* &head){
        Node* temp =  head;
        while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        }
        cout<<endl;
    }

int main(){

    Node* node1 = new Node(12);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    //Heade position tho the node1;
    Node* head = node1;
    Node* tail = node1;

    // print(head);

    //InsertAtHead (head,10);
    InsertAtTail(tail,9);
    InsertAtTail(tail,15);

    // print(head);
    InsertAtPosition(head,tail,2,2);
    print(head);

    //tail->next = head->next;

   // cout<<"Head : "<<head->data<<endl;
    //cout<<"TAil : "<<tail->data<<endl;

     DeleteNode(head,4);
     print(head); 

    return 0;
}