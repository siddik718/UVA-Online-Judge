#include<bits/stdc++.h>
#define ll long long int
#define N 10000
using namespace std;
bool primes[N+2];
void sieve(){
    memset(primes,true,sizeof(primes));
for(int i = 2;i<=sqrt(N);i++){
    if(primes[i])
        for(int j = i*i;j<=N;j+=i)
            primes[j] = false;
}
}
int main(){
sieve();
int t,n;
cin >> t;
while(t--){
cin >> n;
for(int i = (n/2)+1;i<=N;i++){
    if(primes[i]){
        cout << i << endl;
        break;
    }
}
}
return 0;
}

