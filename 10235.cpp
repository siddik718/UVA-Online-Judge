#include<bits/stdc++.h>
#define ll long long int
#define N 1000000
using namespace std;
int primes[N+2];
void sieve(){
for(int i = 2;i*i<=N;i++){
    if(!primes[i]){
        for(int j = i*i;j<=N;j+=i)
            primes[j] = 1;
    }
}primes[0] = primes[1] = 1;
}

int reverse_int(int n){
int rem,new_num = 0;
while(n){
    rem = n%10;
    new_num = new_num*10+rem;
    n/=10;
}
return new_num;
}
int main(){
sieve();
ll a,b;
while(cin >> a){
b = reverse_int(a);
if(a == b) {
        if(!primes[a])
        cout << a <<" is prime\n";
        else
        cout << a <<" is not prime\n";
        continue;
        }
if(primes[a])
cout << a << " is not prime\n";
else if(!primes[a] && primes[b])
cout << a << " is prime\n";
else if(!primes[a] && !primes[b])
cout << a << " is emirp\n";
}
return 0;
}

