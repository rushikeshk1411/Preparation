#include<iostream>
#include<unordered_map>
#include<list>
//template<typename T>
using namespace std;

class Graph{
    public:
        unordered_map<int, list<int> >adj;
      
        void addEdges(int u, int v, bool direction){

            // 0 represent the undirected graph
            // 1 reprented the directeed graph
            
            //Create an edge between u and v
            
            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void Print(){
            for(auto i:adj){
                cout<<i.first <<" ->";
                for(auto j: i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){

    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>> m;

    Graph g;

    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;      

        //Add kro bhai edge isame
        g.addEdges(u, v, 0);
    }

    g.Print();

    return 0;

    
}