#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjs;

    void insert(int u, int v, bool directed)
    {
        adjs[u].push_back(v);
        if (directed == false)
            adjs[v].push_back(u);
    }

    void print()
    {
        for (auto i: adjs)
        {
            cout << i.first << "->>> ";
            for(auto j : adjs[i.first]){
                cout << j << " ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;

    unordered_map<int, list<int>> adjs;
    g.insert(0, 1, false);
    g.insert(0, 4, false);
    g.insert(1, 4, false);
    g.insert(1, 2, false);
    g.insert(2, 3, false);
    g.insert(3, 4, false);

    g.print();
}