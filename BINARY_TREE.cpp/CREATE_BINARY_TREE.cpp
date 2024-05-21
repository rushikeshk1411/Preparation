#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node* right;
    Node* left;

    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* creating_a_tree ( Node* root){


     cout<<"Enter The data :";
     int data;
     cin>>data;
     root = new Node(data);

    

    if(data == -1){
        return NULL;
    }
    cout<<"Enter The data for left of the : "<<root->data<<endl;

    root->left = creating_a_tree(root->left);


    cout<<"Enter the data for right of the :"<<root->data<<endl;

    root->right = creating_a_tree(root->right);
   
}

void In_Order(Node* root){

    //Base Case
    if(root == NULL){
        return;
    }

    In_Order(root->left);
    cout<<root->data<<" ";
    In_Order(root->right);
}

void Pre_Order(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data;
    Pre_Order(root->left);
    Pre_Order(root->right);
}

void Post_Order(Node* root){

    if(root == NULL){
        return;
    }

    Post_Order(root->left);
    Post_Order(root->right);
    cout<<root->data;
}

/*
void Printing_Tree(Node* root){

    if(root == NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
            cout<<front->data;
            if(front->left){
                q.push(front->left);
            }

            if(front->right){
                q.push(front->right);
            }
        }
    }
}

*/
int main(){

    Node* root = NULL;
    int rootData;
    Node* ans = creating_a_tree(root);

/*
    1
    5 3
    17 11 7
*/
    // Printing_Tree(ans);
    cout<<"The In Order Traversal is : "<<endl;
    In_Order(ans);
    cout<<endl;
    cout<<"The Pre_Order Traversal is : "<<endl;
    Pre_Order(ans);
    cout<<endl;
    cout<<"The Post order Traversal is : "<<endl;
    Post_Order(ans);

    return 0;
}