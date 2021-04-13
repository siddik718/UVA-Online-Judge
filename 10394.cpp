#include<bits/stdc++.h>
#define ll long long int
#define N 20000000
using namespace std;
int primes[N+2];
void sieve(){
    memset(primes,1,sizeof(primes));
for(int i = 2;i<=sqrt(N);i++){
    if(primes[i]){
        for(int j = i*i;j<=N;j+=i)
            primes[j] = 0;
    }
}
}
ll a[N+2],b[N+2];
void solve(){
    sieve();
    ll x = 1,y = 1;
for(ll i = 3;i<=N;i++){
    if(primes[i]){
        if(primes[i+2]){
            a[x++] = i;
            b[y++] = i+2;
        }
    }
}
}
int main(){
    solve();
ll t;
while(cin >> t && t){
  printf("(%lld, %lld)\n",a[t],b[t]);
}
return 0;
}
