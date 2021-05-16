#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll phi(ll n)
{
    if(n == 1)
        return 0;
    ll ans = n;
    if(n%2==0)
    {
        ans -= ans/2;
        while(n%2==0)
        {
            n/=2;
        }
    }
    for(ll i = 3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            ans-= ans/i;
            while(n%i== 0)
            {
                n /= i;
            }
        }
    }
    if(n>1)
    {
        ans -= ans/n;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;

    while(cin >> n,n)
    {
        cout << phi(n)<< "\n";
    }

    return 0;
}

