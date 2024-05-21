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

Node* builttree(Node* root){

        cout<<"Enter the data"<<endl;
        int data;
        cin>>data;
        root = new Node(data);

        if(data == -1){
            return NULL;
        }

        cout<<"insert in left "<<data<<endl;
        root->left = builttree(root->left);
        cout<<"Insert the data at right "<<data<<endl;
        root->right = builttree(root->right);
        return root;

}

void LevelOrdertransversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        
        else{
            cout<<temp->data<<" ";

            if(temp->right){
                q.push(temp->right);
            }

            if(temp->left){
                q.push(temp->left);
            }
        }
    }
}

void Inorder_Traversal (Node* root){

    //Base Case
    if(root == NULL){
        return;
    }

     Inorder_Traversal(root->left);
     cout<<root->data<<" ";
      Inorder_Traversal(root->right);
}

void PreOrder_Transversal (Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    PreOrder_Transversal(root->left);
    PreOrder_Transversal(root->right);
}

void PostOrder_transversal (Node* root){

    //Base case
    if(root == NULL){
        return;
    }

    PostOrder_transversal(root->left);
    PostOrder_transversal(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(Node* root){
    queue<Node*>qu;
    cout<<"Enter the data for root :"<<endl;
    int rootdata;
    cin>>rootdata;
    root = new Node(rootdata);
    qu.push(root);

    while(!qu.empty()){
    Node* temp = qu.front();
    qu.pop();

    //Left ko dalo bhai
    cout<<"Enter the data for left: "<<temp->data<<endl;
    int Leftdata;
    cin>>Leftdata; 
    if(Leftdata != -1){
        temp->left = new Node(Leftdata);
        qu.push(temp->left);
    }     

    cout<<"Enter the data for Right of "<<temp->data<<endl;
    int RightData;
    cin>>RightData;

    if(RightData != -1){
    temp->right = new Node(RightData);
    qu.push(temp->right);
    }
    }
}

int main(){


    Node* root = NULL;


    //Creating a tree
    root = builttree(root);

    cout<<"Printing the level order data"<<endl;
    //Creating the node 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    LevelOrdertransversal(root);

    cout<<"Inorder traveral  (LNR) is: "<<endl;
     Inorder_Traversal(root);
    cout<<endl;

     cout<<"Preorder Traversal (NLR) is : "<<endl;
    PreOrder_Transversal(root);
    cout<<endl;
    
    cout<<"Post Order transeversal (LRN) is : "<<endl;
    PostOrder_transversal(root);
    cout<<endl;


    cout<<"Buid the tree from Level Order Transversal :" <<endl;
    buildFromLevelOrder(root);

    LevelOrdertransversal(root);
    return 0;
}