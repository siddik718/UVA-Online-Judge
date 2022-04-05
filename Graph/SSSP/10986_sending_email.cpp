#include<bits/stdc++.h>
#define rep(i,a,n) for(int i = (a) ; i <= (n) ; i++)
using namespace std;
vector<pair<int,int>> adj[20005];
void dijkstra(int src,int dest){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    vector <int> dist(20005,INT_MAX),vis(20005,0);
    dist[src] = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        if(vis[u]) continue;
        vis[u] = 1;
        for(auto v : adj[u]){
            if(dist[v.first] > dist[u] + v.second){
                dist[v.first] = dist[u] + v.second;
                pq.push({dist[v.first],v.first});
            }
        }
    }
    if(dist[dest] == INT_MAX){
        cout << "unreachable\n";
    }else{
        cout << dist[dest] << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin >> t;
    rep(cs,1,t){
        int n,m,s,d;
        cin >> n >> m >> s >> d;
        rep(i,0,n) adj[i].clear();
        rep(i,1,m){
            int u,v,w;
            cin >> u >> v >> w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        cout << "Case #" << cs << ": ";
        dijkstra(s,d);
    }
    return 0;
}