#include<bits/stdc++.h>
#define ll long long int
#define N 1299710
using namespace std;
int primes[N];// every index is set to 0.
void sieve(){
for(int i = 2;i<=sqrt(N);i++){
    if(!primes[i]){
        for(int j = i*i;j<=N;j+=i){
          primes[j] = 1;
        }
    }
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
int n,a,b;
while(cin >> n && n){
if(!primes[n]){
    printf("0\n");
}else{
for(int i = n-1;i>=2;i--){// to find the prime number that occur before n
    if(!primes[i]){
        a = i;break;
    }
}
for(int i = n+1;;i++){ // to find the prime number that occur after n
    if(!primes[i]){
        b = i;break;
    }
}
printf("%d\n",(b-a));
}
}
return 0;
}

