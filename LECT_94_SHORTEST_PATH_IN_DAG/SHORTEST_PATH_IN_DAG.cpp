#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<stack>
#include<vector>
#include<limits.h>
using namespace std;

class Graph{
    public:
    unordered_map<int, list< pair<int, int> > >adjs;

    void addEdge(int u, int v, int weight){
        pair<int, int>p = make_pair(v, weight);
        adjs[u].push_back(p);
    }

    void printadj(){
        for(auto i: adjs){
            cout<<i.first<<"-> ";
            for(auto j: i.second){
                cout<<"( "<<j.first<<", "<<j.second<<" )";
            }cout<<endl;
        }
    }

    void DFS(int node, unordered_map<int, bool>&visited, stack<int>&topo){
        visited[node] = true;

        for(auto i: adjs[node]){
            if(!visited[i.first]){
            DFS(i.first, visited, topo);
            }
        }
        topo.push(node);
    }

    void Shortestpath(int src, vector<int>& dist, unordered_map<int, bool>& visited, stack<int>& topo){
        dist[src] = 0;

        while(!topo.empty()){

            int top = topo.top();
            topo.pop();

            if(dist[top] != INT_MAX){
                for(auto neibour: adjs[top]){
                    if(dist[top] + neibour.second < dist[neibour.first])
                        dist[neibour.first] =  dist[top] + neibour.second;
                }
            }
        }


    }

};

int main(){

    Graph g;
    g.addEdge(5, 5, -2);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(4, 4, -1);
    g.addEdge(0, 1, 5);

    g.printadj();

    //Topoloical Sort

    unordered_map<int, bool>visited;
    stack<int>s;
    int n = 6;

    for(int i=0; i<n; i++){
        if(!visited[i]){
            g.DFS(i, visited, s);
        }
    }


    //NOw THe real work started
    int src = 1;
    vector<int>dist(n);

    for(int i=0; i<n; i++)
        dist[i] = INT_MAX;
    
    g.Shortestpath(src, dist, visited, s);

    cout<<"Answer is: "<<endl;

    for(int i=0; i<dist.size(); i++){
        cout<<dist[i]<<" ";
    }

}