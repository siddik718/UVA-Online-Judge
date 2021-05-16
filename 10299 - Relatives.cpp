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



// another way.


#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(ll n)
{
    if(n == 1)
    {
        cout << "0\n";
        return;
    }
    vector <ll> p;
    map<ll ,ll> k;
    if(n%2 == 0)
    {
        p.push_back(2);
        while(n%2 == 0)
        {
            k[2]++;
            n /= 2;
        }
    }
    for(ll i = 3;i*i<=n;i+=2)
    {
        if(n%i == 0)
        {
            p.push_back(i);
            while(n%i==0)
            {
                k[i]++;
                n /= i;
            }
        }
    }
    if(n > 1)
    {
        p.push_back(n);
        k[n]++;
    }
    ll ans = 1;
    for(auto i : p)
    {
        ans *= (pow(i,k[i])) - pow(i,(k[i]-1)); // Φ(p^k) = p^k - p^k-1;
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

