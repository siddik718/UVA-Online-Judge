#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll gcd (ll a,ll b)
{
    if(b == 0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    ll n[1010];

    while( cin >> n[0],n[0])
    {
        int i = 1;
        while(1)
        {
            cin >> n[i];
            if(n[i] == 0)
                break;
            i++;
        }
        ll ans = 0;

        for(int j = 1;j<i;j++)
        {
            int diff = n[j] - n[j-1];
            ans = gcd(ans,diff);
        }
        if(ans < 0) ans *= -1;
        cout << ans << "\n";
    }

    return 0;
}
