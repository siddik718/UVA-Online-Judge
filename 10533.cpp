#include<bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;
bool primes[N+2];
void sieve(){
memset(primes,true,sizeof(primes));
for(int i = 2;i<=sqrt(N);i++){
    if(primes[i]){
        for(int j = i*i;j<=N;j+=i){
            primes[j] = false;
        }
    }
}primes[0] = primes[1]= false;
}
int digitsum(int n){
int sum = 0;
while(n){
    int rem = n%10;
    sum += rem;
    n /= 10;
}
return sum;
}

bool digitPrimes[N+2];
void solve(){
    memset(digitPrimes,false,sizeof(digitPrimes));
digitPrimes[2]=true;
for(int i = 3;i<=N;i++){
        if(primes[i]){
        int x = digitsum(i);
    if(primes[x])
        digitPrimes[i] = true;
}
}
}
int sum[N+2];
void cummalative_sum(){
    sum[2] = 1;
for(int i = 3;i<=N;i++){
    if(primes[i] && digitPrimes[i]){
        sum[i] = sum[i-1]+1;
    }
    else{
    sum[i] = sum[i-1];
    }
}
}
int main(){
    sieve();
solve();
cummalative_sum();
int t,n,m,cnt;
scanf("%d",&t);
while(t--){
scanf("%d %d",&n,&m);
printf("%d\n",sum[m]-sum[n-1]);
}
return 0;
}

