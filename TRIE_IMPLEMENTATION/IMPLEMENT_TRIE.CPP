#include<iostream>
using namespace std;

class TrieNode{

    public:
    char data;
    TrieNode* Children[26];
    bool isTerminal;

    TrieNode(char data){
        this->data = data;
        for(int i=0; i<26; i++){
            Children[i] = NULL;
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
    void InsertUtil(TrieNode* root, string word){
        
        //Base Case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //Present
        if(root->Children[index] != NULL){
            child = root->Children[index];
        }

        //Absent
        else{
            child = new TrieNode(word[0]);
            root->Children[index] = child;
        }

        //calling To the function
        InsertUtil(child, word.substr(1));
    }

    void InsertWord(string ch){
        InsertUtil(root, ch);
    }

    bool SearchUtil(TrieNode* root, string word){

         //Base Case
        if(word.length() == 0){
           return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root->Children[index] != NULL){
            child = root->Children[index];
        }
        else
            return false;

        return SearchUtil(child, word.substr(1));
  
    }
    bool SearchWord(string word){

        return SearchUtil(root, word);
    }

    void RemoveUtil(TrieNode* root, string word){
        
        //base Case
        if(word.length() == 0){
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root->Children[index] != NULL){
            child = root->Children[index]; 
        }

        RemoveUtil(child, word.substr(1));
    }
    void RemoveWord(string word){
        RemoveUtil(root, word);
    }

};


int main(){

    Trie* t = new Trie();
    t->InsertWord("ARM");
    t->InsertWord("DO");
    t->InsertWord("TIME");

    cout<<"Is word present " << t->SearchWord("RUSHIKESH")<<endl;
    cout<<"IS word present " << t->SearchWord("ARM")<<endl;

    t->RemoveWord("ARM");

    cout<<"IS word present " << t->SearchWord("ARM");    

}