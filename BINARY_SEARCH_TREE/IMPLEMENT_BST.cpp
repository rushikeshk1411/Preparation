#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->right = NULL;
            this->left = NULL;
        }
};

Node* takeinput(Node* &root,int data){

    //Base Case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data < root->data){
        root->left = takeinput(root->left, data);
    }

    if(data >= root->data){
        root->right = takeinput(root->right, data);
    }

    return root;
}

void Make_BST(Node* &root){
    
    cout<<"Enter the data for BST"<<endl;
    int data;
    cin>>data;
    while(data != -1){
        root = takeinput(root, data);
        cin>>data;
    }
}
void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void Postorder(Node* root){

    if(root == NULL){
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

Node* FindMin(Node* root){

    Node* temp = root;
    while(temp != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* FindMax(Node* root){

    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

void PrintBST(Node* root){

    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        Node* frontNode = q.front();
        q.pop();
        if(frontNode == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<frontNode->data<<" ";

            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }   
    }
}

Node* SearchNode(Node* root, int val){
    if(root== NULL){
        return NULL;
    }

    if(root->data == val)
        return root;
    else{
        if(root->data < val){
            return SearchNode(root->right, val);
        }

        if(root->data > val){
            return SearchNode(root->left, val);
        }

    }
}

Node* DeleteNode(Node* root, int val){
    Node* deletedNode = SearchNode(root, val);

    if(!deletedNode->left && !deletedNode->right){
        Node* temp = deletedNode;
        delete deletedNode;
        return NULL;
    }
    else if(deletedNode->left && !deletedNode->right){
        Node* temp = deletedNode->right;
        delete deletedNode;
        return temp;
    }
    else if(!deletedNode->left && deletedNode->right){
        Node* temp = deletedNode->left;
        delete deletedNode;
        return temp;
    }
    else{
        
    }
}



int main(){

    Node* root = NULL;
    Make_BST(root);

    PrintBST(root);

    cout<<endl<<"Inorder traversal is: ";
    Inorder(root);

    cout<<endl<<"preorder traversal is: ";
    preorder(root);

    cout<<endl<<"Postorder Traversal is: ";
    Postorder(root);

    int min = FindMin(root)->data;
    cout<<"The minimum value is"<<min;
    cout<<"The maximum value is"<<FindMax(root)->data;

    return 0;
}