#include<bits/stdc++.h>
#define ll unsigned long long int
#define N 48000
using namespace std;
vector<bool> ar(N+1,true);
vector<ll> v;
void sieve(){
for(ll i = 2;i*i<N;i++){
    if(ar[i]){
        for(ll j= i*i;j<N;j +=i){
            ar[j] = false;
        }
    }
}for(ll i = 2;i<N;i++){
if(ar[i])
    v.push_back(i);
}
}
void seg_sieve(ll left,ll right){
vector<ll> segmented;
ll Size = right-left+1;
vector <bool> seg(Size,true);
if(left == 1){
    seg[0] = false;
}
for(ll i = 0;v[i]*v[i]<=right;i++){
    ll start = v[i]*v[i];
    if(start<left){
        start = ((left+v[i]-1)/v[i])*v[i];
    }
    for(ll j = start;j<=right;j+=v[i]){
        seg[j-left] = false;
    }
}
for(ll i = 0;i<=right-left;i++){
    if(seg[i]){
        segmented.push_back(left+i);
    }
}
if(segmented.size() < 2){
    printf("There are no adjacent primes.\n");
}else{
ll mn = segmented[1] - segmented[0],mx =segmented[1] - segmented[0];
ll m = segmented[0],x = segmented[1],n = segmented[0],y = segmented[1];;
for(ll i= 2;i<segmented.size();i++){
    if(mn  > segmented[i] - segmented[i-1]){
        mn = segmented[i] - segmented[i-1];
        n = segmented[i-1];
        y = segmented[i];
    }
    if(mx < segmented[i] - segmented[i-1]){
        mx = segmented[i] - segmented[i-1];
        m = segmented[i-1];
        x = segmented[i];
    }
}
printf("%lld,%lld are closest, %lld,%lld are most distant.\n",n,y,m,x);
}
}
int main(){
sieve();
ll left,right;

while(scanf("%llu %llu",&left,&right) != EOF){
seg_sieve(left,right);
}
return 0;
}
