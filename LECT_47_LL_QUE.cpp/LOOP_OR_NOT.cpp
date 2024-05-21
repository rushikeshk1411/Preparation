#include <iostream>
#include<map>
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

bool DetectLoop(Node* head){
    if (head == NULL){
        return false;
    }

    map<Node*, bool>visited;

    Node* temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
        cout<<"Element is: "<<temp->data<<endl; 
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floiddetectLoop(Node* head){
    if (head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;       
        if (fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    
    if(slow == fast){
        cout<<"The elemnt is: "<<slow->data<<endl;
        return slow;
    }

    return NULL;
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
    Node* head = NULL;

    InsertNode(head,14,12);
    Print(head);

    InsertNode(head,12,14);
    Print(head);

    InsertNode(head,14,15);
    Print(head);

    InsertNode(head,15,16);
    Print(head);


    InsertNode(head,14,11);
    Print(head);

    
    InsertNode(head,16,17);
    Print(head);

    //tail->next = head->next;

    
    if (floiddetectLoop(head) != NULL){
        cout<<"yes yeh to loop hai"<<endl;
    }
    else{
        cout<<"This is not a loop";
    }
    return 0;
}
