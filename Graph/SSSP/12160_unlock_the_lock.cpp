#include<iostream>
#include<queue>
using namespace std;
int l,u,r;
int main(){
    int cs = 1;
    while(cin >> l >> u >> r , !(l == 0 && u == 0 && r == 0)){
        int rv[r+1];
        for(int i = 0;i<r;i++)cin >> rv[i];
        int dist[10000] = {};
        queue<int> q;
        q.push(l);
        dist[l] = 1;
        while(!q.empty()){
            if(dist[u])break;
            l = q.front();q.pop();
            for(int i = 0;i<r;i++){
                int x = l + rv[i];
                if(x >= 10000)x -= 10000;
                if(!dist[x]){
                    dist[x] = dist[l] + 1;
                    q.push(x);
                }
            }
        }
        cout << "Case " << cs++ << ": ";
        if(dist[u])cout << dist[u]-1 << endl;
        else cout << "Permanently Locked" << endl;
    }
    return 0;
}