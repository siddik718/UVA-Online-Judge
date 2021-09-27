#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long int P,C,x,Case = 1;
    while(cin >> P >> C,P && C)
    {
        cout << "Case " << Case++ << ":\n";
        deque <long int> q;
        for(int i = 1;i<=min(P,C);i++)
        {
            q.push_back(i);
        }
        char ch;
        while(C--)
        {
            cin >> ch;
            if(ch == 'E')
            {
                cin >> x;
                //cout << x << '\n';
                deque<long int> q2;
                for(auto p : q)
                {
                    if(x != p)
                    q2.push_back(p);
                }
                q2.push_front(x);
                q = q2;
            }
            else
            {
                cout << q.front() << '\n';
                long int tmp = q.front();
                q.pop_front();
                q.push_back(tmp);
            }
        }
    }
    return 0;
}
