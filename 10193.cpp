#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll GCD(ll a,ll b){
if(b == 0) return a;
return GCD(b,a%b);
}
ll binTodec(string s){
ll n = s.size();
ll sum = 0,d = 1;
for(int i = n-1;i>=0;i--){
    if(s[i] == '1')
        sum += d;
    d *=2;
}
return sum;
}
int main(){
string s,s2;
int t,cnt = 1;
cin >> t;
while(t--){
cin >> s >> s2;
printf("Pair #%d: ",cnt++);
ll a = binTodec(s);
ll b = binTodec(s2);
if(GCD(a,b) != 1){
    cout << "All you need is love!\n";
}else
    cout << "Love is not all you need!\n";
}
return 0;
}

