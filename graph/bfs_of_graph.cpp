#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    queue<int> que;
    vector<bool> vis(V);
    vector<int> res;
    vis[0] = true;
    que.push(0);
    while(!que.empty()) {
        int temp = que.front();
        res.push_back(temp);
        que.pop();
        
        for(auto i:adj[temp]) {
            if (!vis[i]){
                vis[i] = true;
                que.push(i);
            }
        }
    }
    return res;
}

int main() {
    int v;
    cin >> v;
    int n;
    cin >> n;

    vector<int> edge[v];
    while(n--) {
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
    }

    vector<int> ans = bfsOfGraph(v,edge);
    for (auto i:ans) {
        cout << i << " ";
    }

    return 0;
}