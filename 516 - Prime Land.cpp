#include<bits/stdc++.h>

using namespace std;
void factor(int n)
{
vector <int> v;
int cnt[42767] = {0};
    for(int i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
           v.push_back(i);
            while(n%i == 0)
            {
               cnt[i]++;
                n/=i;
            }
        }
    }
    if(n>1){
        v.push_back(n);
        cnt[n]++;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i = 0;i<v.size();i++)
    {
        if(i == v.size()-1)
            cout << v[i] << " " << cnt[v[i]] << "\n";
        else
            cout << v[i] << " " << cnt[v[i]] << " ";

    }
}
int main()
{
    while(1){
    string s;
    getline(cin,s);
    if(s == "0") break;
    int a[500];
    istringstream  is(s);
    int n = 0,pro = 1;
    while(is>>a[n])n++;

    for(int i = 0;i<n;i+=2)
    {
        pro *= ceil(pow(a[i],a[i+1]));
    }
    pro--;
    factor(pro);
    }

    return 0;
}
