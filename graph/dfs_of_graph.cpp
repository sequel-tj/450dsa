#include <bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> graph[], vector<bool>& vis) {
    if (vis[i]) return;
    vis[i] = true;
    
    cout << i << " ";
    
    for(auto j:graph[i]) {
        dfs(j,graph,vis);
    }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    vector<bool> visited(V);
    for(int i=0; i<V; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
        }
    }
}

int main() {
    int v;
    cin >> v;
    int e;
    cin >> e;

    vector<int> edge[v];
    while(e--) {
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
    }

    dfsOfGraph(v,edge);
    return 0;
}