#include<iostream>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;
     
    TrieNode(char ch){
        data = ch;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void Insertutil(TrieNode* root, string word){
        //Base Case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //Assumption word CAPITAL main hain
        int index = word[0] - 'A';
        TrieNode* child;

        // Present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //Absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //Recursion
        Insertutil(child, word.substr(1));
    }

    void Inserword(string word){
        Insertutil(root, word);
    }

    bool SearchUtil(TrieNode* root, string word){
        //Base Case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //Present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else
            return false;

        return SearchUtil(child, word.substr(1));
    }

    bool Searchword(string word){
        return SearchUtil(root, word);
    }
};

int main(){

    cout<<"Rushikesh Bhausaheb Khaire"<<endl;

    Trie *t = new Trie();

    // cout<<t->Searchword("Rushikesh")<<endl;

    t->Inserword("Rushikesh"); 

    cout<<t->Searchword("Rushikesh")<<endl;

    cout<<"hey this is me"<<endl;
    
}