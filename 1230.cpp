#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
long long binpow(ll a,ll b,ll m){
if(b == 0)return 1;
ll res = binpow(a,b/2,m);
if(b%2==0)
    return (res%m*res%m)%m;
else
    return (res%m*res%m*a%m)%m;
}
int main(){
ll b,p,m,n,k;
cin >> n;
while(n--){
cin >> b >> p >> m;
cout << binpow(b,p,m) << endl;
if(n == 0)scanf("%d",&k);
}

return 0;
}

