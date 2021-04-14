#include<bits/stdc++.h>
#define ll long long int
#define N 10000000
using namespace std;
int primes[N+2];
void sieve(){
memset(primes,1,sizeof(primes));

for(int i = 2;i<=sqrt(N);i++){
    if(primes[i]){
        for(int j = i*i;j<=N;j+=i)
            primes[j] = 0;
    }
}
primes[0] = primes[1] = 0;
}
int main(){
    sieve();
int n,a,b,x;
while(cin >> n){
        if(n<8){cout << "Impossible\n";continue;}
        if(n%2==0){
        printf("%d %d ",2,2);
        x = n-4;
        }else{
        printf("%d %d ",2,3);
        x = n - 5;
        }
    for(int i = 2;i<=x;i++){
        if(primes[i]){
            a = i;
            b = x-a;
            if(primes[b]){
                printf("%d %d\n",a,b);break;
            }
        }
    }
}
return 0;
}
