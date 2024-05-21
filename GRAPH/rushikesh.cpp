#include<iostream>
using namespace std;
#include<vector>

int findParent(vector<int>& parent, int node){
  
  if(parent[node] == node){
    return node;
  }
  cout<<" node is: "<<node<<" parentNode: "<<parent[node];
  return parent[node] = findParent(parent, parent[node]);
}

int main(){

    vector<int>parent(5);

    parent[0] = 5;
    parent[1] = 0;
    parent[2] = 3;
    parent[3] = 3;
    parent[4] = 2;

    for(int i=0; i<5; i++){
        cout<<parent[i]<<" ";
    }
    cout<<endl;
    cout<<findParent(parent, 1);
    
}