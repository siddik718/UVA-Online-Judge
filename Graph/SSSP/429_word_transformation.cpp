#include<iostream>
#include<vector>
#include<string>
#include <sstream>
#include<queue>
#include<map>
using namespace std;
#define rep(i,a,n) for(int i=a;i<n;i++)
map <string,vector<string>> adj;
bool OK(string a,string b){
    int n = a.size(),m=b.size();
    if(n!=m)return false;
    int cnt = 0;
    rep(i,0,a.size()){
        if(a[i]!=b[i]){
            cnt++;
        }
    }
    return cnt==1;
}
void bfs(string a,string b){
    queue<string>q;
    map<string,int>dist,vis;
    q.push(a);
    dist[a] = 0;
    while(!q.empty()){
        auto u = q.front();
        q.pop();
        for(auto v:adj[u]){
            if(!vis[v]){
                vis[v] = 1;
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }
    }
    cout << a << " " << b << " " << dist[b] << endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        vector <string> str;
        adj.clear();
        string T;
        while(cin >> T,T != "*"){
            str.push_back(T);
        }
        cin.ignore();
        rep(i,0,str.size()){
            rep(j,0,str.size()){
                if(i!=j && OK(str[i],str[j])){
                    adj[str[i]].push_back(str[j]);
                    adj[str[j]].push_back(str[i]);
                }
            }
        }
        string src,dest,line;
        while(getline(cin,line) , line != ""){
            stringstream ss(line);
            ss >> src >> dest;
            bfs(src,dest);
        }
        if(n)cout << endl;
    }
    return 0;
}