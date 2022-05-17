#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <map>
using namespace std;


class Graph
{
    public:
    map<int, bool> visited;
    map<int ,list<int>> adj;

    void addEdge(int v,int w)
    {
        adj[v].push_back(w);
    }

    void DFS(int v){
        visited[v]=true;
        cout<< v<<" ";

        list<int> :: iterator i;
        for(i=adj[v].begin(); i!=adj[v].end();i++)
        {
            if(!visited[*i])
            {
                DFS(*i);
            }
        }
    }

};

int main()
{
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);

    g.DFS(0);
    return 0;
}