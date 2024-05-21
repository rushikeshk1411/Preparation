#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<list>
#include<utility>

int main(){
    vector<pair<int, int> >graph;

    graph.push_back({0,1});
    graph.push_back({0,3});
    graph.push_back({0,4});
    graph.push_back({3,4});
    graph.push_back({1,2});

    unordered_map<int, list<int> >adjs;

    for(int i=0; i<5; i++){
        int u = graph.first;
        int v = graph.second;
    }

}