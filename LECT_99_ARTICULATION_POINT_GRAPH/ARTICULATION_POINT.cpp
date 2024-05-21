#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
    if(a < b)
        return a;
    return b;
}


void dfs(int &node, int &parent, int& timer, vector<int>& disc, vector<int>&low, unordered_map<int, bool>& visited,
         unordered_map<int, list<int> >& adjs, vector<int>& ap, int& child){

          visited[node] = true;
          disc[node] = low[node] = timer++;

          for(auto neibour: adjs[node]){

            if(!visited[neibour]){
                dfs(neibour, node, timer, disc, low, visited, adjs, ap, child);
                //while return we simple update the low[node] for 
                low[node] = min(low[node], low[neibour]);

                //Check for articulation point
                if(low[neibour] >= disc[node] && parent != -1){
                    ap[node] = 1;
                }
                child++;
            }
            else
                low[node] = min(disc[node], low[neibour]);

            if(parent == -1 && child >= 2){
                ap[node] = 1;
            }
          }
}

int main(){

    vector<pair<int, int> >edges;
    int n = 5;
    int e = 5;
    //Preapre adjacent List
    // unordered_map<int, list<int> >adjs;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(1, 2));
    edges.push_back(make_pair(0, 1));

    unordered_map<int, list<int> >adjs;

    for(int i=0; i<edges.size() ;i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjs[u].push_back(v);
        adjs[v].push_back(u);
    }

    //Make data structure
    vector<int>disc(n);
    vector<int>low(n);
    unordered_map<int, bool>visited;
    int parent = -1;
    int timer = 0;
    int child = 0;
    vector<int>articulationPoint(n, 0);

    for(int i=0; i<n; i++){
        disc[i] = -1;
        low[i] = -1;
    }

    //Call dfs

    for(int i=0; i<n; i++){
        if(!visited[i])
            dfs(i, parent, timer, disc, low, visited, adjs,articulationPoint, child);
    }


    for(int i=0; i<articulationPoint.size(); i++){
        if(articulationPoint[i] != 0)
            cout<<i<<" ";
    }


}