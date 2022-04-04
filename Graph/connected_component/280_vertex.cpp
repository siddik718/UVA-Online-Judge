#include<iostream>
#include<vector>
#define rep(i,a,n) for(int i=(a);i<=(n);i++)
std::vector <int> vis;
std::vector <int> adj[105];
void dfs(int src){
    for(auto it : adj[src]){
        if(!vis[it]){
            vis[it] = 1;
            dfs(it);
        }
    }
}
int main(){
    int n;
    while(std::cin >> n){
        if(n == 0)break;
        rep(i,0,n)adj[i].clear();
        int a,b;
        while(std::cin >> a,a){
            if(a == 0)break;
            while(std::cin >> b,b){
                if(b == 0)break;
                adj[a].push_back(b);
            }
        }
        int sz;
        std::cin >> sz;
        std::vector <int> v(sz);
        rep(i,0,sz-1) std::cin >> v[i];
        rep(i,0,sz-1){
            vis.assign(n+1,0);
            dfs(v[i]);
            int cnt = 0;
            rep(i,1,n)cnt += (vis[i] == 0);
            if(cnt == 0){
                std::cout << cnt << std::endl;
            }else{
                std::cout << cnt << " ";
            }
            if(cnt>0){
                rep(i,1,n){
                    if(vis[i] == 0){
                        std::cout << i;
                        cnt--;
                        if(cnt == 0){
                            std::cout << std::endl;
                        }else{
                            std::cout << " ";
                        }
                    }
                }
            }
        }
    }
    return 0;
}