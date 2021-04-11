#include<bits/stdc++.h>
#define ll long long int
#define N 1000005
using namespace std;
int primes[N];
void sieve(){
for(int i = 2;i*i<=N;i++){
    if(!primes[i]){
        for(int j =i*i;j<=N;j += i)
            primes[j] = 1;
    }
}
primes[0] = 1;
}
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    sieve();
int n,a,b,cnt;
while(cin >> n && n){
    cout << n << ":\n";
    cnt = 0;
for(int i = 2;i<=n/2+1;i++){
    if(!primes[i]){
        a = i;
        b = n-a;
        if(!primes[b]){
                cnt++;
    cout << a << "+" << b << "\n";
      break;
        }
    }
}
if(cnt == 0){
    printf("NO WAY!\n");
}
}
return 0;
}

