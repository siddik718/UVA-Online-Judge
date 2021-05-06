#include<bits/stdc++.h>

using namespace std;

const int maxN = 1e7+10;
double arr[maxN];
void solve()
{
    arr[0] = 0.0;
    for(int i =1;i<=maxN-10;i++)
    {
        arr[i] = arr[i-1] + log10(i);
    }
}
int main()
{
    solve();

    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int res = arr[n] + 1;
        cout << res << "\n" ;
    }
    return 0;
}

