#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
return (a%b==0)?b:gcd(b,a%b);
}

int main(){
int t;
cin >> t;
long long n,m;
for(int i = 1;i<=t;i++){
cin >> m >> n;
cout << "Case " << i << ": ";
cout << ((m+n)/(gcd(m,n))) << endl;

}
return 0;
}

