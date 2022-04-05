#include<bits/stdc++.h>
#define rep(i,a,n) for(int i = (a) ; i <= n ; i++)
using namespace std;
int test,N,E,T;
vector <pair<int,int>> adj[1005];
void dijkstra(int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    vector <int> dist(N+1,INT_MAX),vis(N+1,0);
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
    int cnt = 0;
    rep(i,1,N){
        cnt += (dist[i] <= T);
    }
    cout << cnt << endl;
}
int main(){
    cin >> test;
    while(test--){
        cin >> N >> E >> T;
        int M;cin >> M;
        rep(i,1,M){
            int u,v,w;
            cin >> u >> v >> w;
            adj[v].push_back({u,w});
        }
        dijkstra(E);
        if(test) {
            cout << endl;
            rep(i,0,N) adj[i].clear();
        }
    }
    return 0;
}