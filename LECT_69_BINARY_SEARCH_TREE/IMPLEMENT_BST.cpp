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

Node* InsertInBST(Node* root, int data){

    if(root == NULL){
        root = new Node(data);
         return root;
    }

    if(data < root->data){
        root->left = InsertInBST(root->left, data);
    }

    if(data > root->data){
        root->right = InsertInBST(root->right, data);
    }

    return root;
}

void LevelOrderTraversal(Node* &root){
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
            cout<<front->data<<" ";
            if(front->left){
            q.push(front->left);
            }
            if(front->right){
            q.push(front->right);
            }    
        }
    }
}

void Preorder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node* root){
    if(root == NULL){
        return;
    }

    if(root->left)
        Inorder(root->left);
    
    cout<<root->data<<" ";

    if(root->right)
        Inorder(root->right);
}

void PostOrder(Node* root){
    if(root == NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void TakeInputs(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = InsertInBST(root, data);
        cin>>data;
    }    
}

Node* MaxVal (Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* MinVal (Node* root){
    Node* temp = root;

    while(temp->left){
        temp = temp->left;
    }
    return temp;
}

// void Inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     if(root->left)
//         Inorder(root->left);
    

//     if(root->right)
//         Inorder(root->right);
// }

Node* deleteInBST (Node* root, int data){

    if(root == NULL){
        return root;
    }

    if(root->data == data){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child

        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
            
        }

        if(root->left == NULL && root->right != NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //2 child
        if(root->left && root->right){
            int mini = MinVal(root->right)->data;
            root->data = mini;
            root->right = deleteInBST(root->right, mini);
            return root;
        }
    }

    else{
        if(root->data > data){
            root->left = deleteInBST(root->left, data);
            return root;
        }
        else{   
            root->right = deleteInBST(root->right, data);
            return root;
        }
    }
}

int main(){

    Node* root = NULL;

    cout<<"Enter the data for creating a BST"<<endl;
    TakeInputs(root);

    cout<<"Printing the BST: "<<endl;
    LevelOrderTraversal(root);

    cout<<"Printing Preorder data is: "<<endl;
    Preorder(root);

    cout<<endl<<"Printing Inorder data is: "<<endl;
    Inorder(root);

    cout<<endl<<"Printing Postorder data is: "<<endl;
    PostOrder(root);

    Node* maxi = MaxVal(root);
    cout<<endl<<"The maximum value is "<<maxi->data;

    Node* mini = MinVal(root);
    cout<<endl<<"The minimum value is: "<<mini->data;

    root = deleteInBST(root, 30);

    cout<<"Printing the BST: "<<endl;
    LevelOrderTraversal(root);

    cout<<"Printing Preorder data is: "<<endl;
    Preorder(root);

    cout<<endl<<"Printing Inorder data is: "<<endl;
    Inorder(root);

    cout<<endl<<"Printing Postorder data is: "<<endl;
    PostOrder(root);

    maxi = MaxVal(root);
    cout<<endl<<"The maximum value is "<<maxi->data;

    mini = MinVal(root);
    cout<<endl<<"The minimum value is: "<<mini->data;

    // cout<<"The predecer is: "<<InorderPedeccer(root, 20)->data<<endl;
    

   
//    cout<<root->data>>endl;
}