#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(ll n)
{
    if(n == 1)
    {
        cout << "1\n";
        return;
    }
    ll ans = n;
    if(n%2 == 0)
    {
        ans -= ans/2;
        while(n%2==0)
            n /= 2;
    }

    for(int i = 3;i*i<=n;i+=2)
    {
        if(n%i == 0)
        {
            ans -= ans/i;
            while(n%i == 0)
                n/=i;
        }
    }
    if(n>1)
    {
        ans -= ans/n;
    }
    cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    while(cin >> n,n)
    {
        solve(n);
    }

    return 0;
}

