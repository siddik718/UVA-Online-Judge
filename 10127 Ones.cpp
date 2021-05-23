#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int ans = 0,cnt = 0;

        do
        {
            ans = (ans*10+1)%n;
            cnt++;
        }while(ans != 0);

        cout << cnt << "\n";
    }

    return 0;
}
