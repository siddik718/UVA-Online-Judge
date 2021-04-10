#include<bits/stdc++.h>
#define N 1000005
using namespace std;
int primes[N];
void sieve(){
for(int i = 2;i<=sqrt(N);i++){
    if(!primes[i]){
        for(int j = i*i;j<=N;j+=i){
          primes[j] = 1;
        }
    }
}
    primes[2] = 1;
}
int main(){
sieve();
int n;
while(scanf("%d",&n) ,!(n==0)){
for(int a = 3;a<n;a++){
    if(!primes[a]){
        int b = n-a;
        if(!primes[b]){
         printf("%d = %d + %d\n",n,a,b);break;
        }
    }
}
}
return 0;
}
