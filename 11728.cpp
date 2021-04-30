#include<bits/stdc++.h>
#define ll long long int
#define N 1005
using namespace std;
int sumdiv[N+1];
void solve(){
for(int i = 1;i<=N;i++){
    for(int j = i;j<=N;j+=i){
    sumdiv[j] += i;
}
}
}
int main(){
    solve();
int t,cnt,Case = 1;
while((cin >> t),!(t == 0)){
        cnt = 0;
cout << "Case " << Case++<< ": ";
for(int i = t;i>=1;i--){
    if(sumdiv[i] == t){
            cnt++;
        cout << i << endl;break;
    }
}
if(cnt == 0){
    cout << "-1\n";
}
}
return 0;
}

