#include<bits/stdc++.h>
#define ll long long int
#define N 10000010
using namespace std;
int primes[N];
void sieve(){
for(int i = 2;i<=sqrt(N);i++){
    if(!primes[i]){
        for(int j = i*i;j<=N;j+= i)
            primes[j] = 1;
    }
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
int t,cnt = 0;
while((cin >> t) && t){
        cnt = 0;
for(int i = 2;i<=t/2;i++)// n/2 times loop for prime number
    if(!primes[i]){ // checks if i is a prime number
        if(!primes[t-i]) // if i is prime then checks (n-i) is also prime
            cnt++; // then count
    }
cout << cnt << endl;
}
return 0;
}

