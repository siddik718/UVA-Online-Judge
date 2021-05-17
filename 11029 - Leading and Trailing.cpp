#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll binpow(ll a,ll b)
{
    ll res = 1;
    while(b>0)
    {
        if(b&1)
            res = (res*a)%1000; // 3 trailing number so modulo of 1000.
        a = (a*a)%1000;
        b >>= 1;
    }
    return res;
}
int main()
{
    int t;
    ll n,k;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld %lld",&n,&k);
    long double x = (double)k * log10(n); // leading zero
    long double y = x - floor(x + 1e-9);
    int p = (pow(10,y)) * 100; // 3 leading number so multiple of 100.

    printf("%d...%03d\n",p,binpow(n,k));
    }

    return 0;
}
