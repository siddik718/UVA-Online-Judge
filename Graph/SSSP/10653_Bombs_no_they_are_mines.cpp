#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define rep(i,a,n) for(int i=a;i<=n;i++)
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int r,c,st_i,st_j,en_i,en_j;
int cell[1005][1005],vis[1005][1005],dist[1005][1005];
bool valid(int x,int y){
    return x>=0&&x<r&&y>=0&&y<c&&!vis[x][y]&&cell[x][y]!=1;
}
void bfs(int u,int v){
    queue<pair<int,int>>q;
    q.push({u,v});
    vis[u][v]=1;
    dist[u][v]=0;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        if(x == en_i && y == en_j){
            cout << dist[x][y] << endl;
            return;
        }
        rep(i,0,3){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(valid(nx,ny)){
                q.push({nx,ny});
                vis[nx][ny]=1;
                dist[nx][ny]=dist[x][y]+1;
            }
        }
    }
}
int main(){
    while(cin >> r >> c , !(r == 0 && c == 0)){
        rep(i,0,r){
            rep(j,0,c){
                cell[i][j] = 0;
                vis[i][j] = 0;
                dist[i][j] = 1e9;
            }
        }
        int row;cin >> row;
        rep(i,0,row-1){
            int x,n;
            cin >> x >> n;
            rep(j,0,n-1){
                int y;cin >> y;
                cell[x][y] = 1;
            }
        }
        cin >> st_i >> st_j >> en_i >> en_j;
        bfs(st_i,st_j);
    }
    return 0;
}