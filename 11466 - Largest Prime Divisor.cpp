#include<bits/stdc++.h>
#define ll long long
#define llu unsigned long long

using namespace std;

void factor(llu n)
{
vector <llu> v;
    llu m = n;
    for(llu i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            while(n%i == 0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
        v.push_back(n);
    int x = v.size();
    if(m == 1 || x == 1)
    {
        cout << "-1\n";
    }
    else
        cout << v[x-1] << "\n";
}

int main()
{
    ll n;

    while(cin >> n , n)
    {
        if(n<0) n *= -1;
        n = (llu)(n);
        factor(n);
    }

    return 0;
}

