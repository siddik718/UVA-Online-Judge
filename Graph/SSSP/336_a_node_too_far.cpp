#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
#define rep(i,a,n) for(int i=a;i<=n;i++)
map<int,vector<int>>adj;
int bfs(int src,int ttl){
    queue <int> q;
    map <int,int> dist;
    int cnt = 1;
    q.push(src);
    dist[src] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v:adj[u]){
            if(dist.find(v)==dist.end()){
                dist[v] = dist[u]+1;
                if(dist[v]<=ttl){
                    q.push(v);
                    cnt++;
                }
            }
        }
    }
    return adj.size()-cnt;
}
int main(){
    int nc,i = 1;
    while(cin >> nc, !(nc == 0)){
        adj.clear();
        rep(i,0,nc-1){
            int a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int src,ttl;
        while(cin >> src >> ttl , !(src == 0 && ttl == 0)){
            int ans = bfs(src,ttl);
            cout << "Case " << i++ << ": " << ans << " nodes not reachable from node " << src << " with TTL = " << ttl << ".\n";
        }
    }
    return 0;
}