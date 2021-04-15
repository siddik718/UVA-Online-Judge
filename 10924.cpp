#include<bits/stdc++.h>
#define ll long long int
#define N 20000
using namespace std;
int primes[N+2];
void sieve(){
for(int i = 2;i<=sqrt(N);i++){
    if(!primes[i]){
        for(int j = i*i;j<=N;j+=i)
            primes[j] = 1;
    }
}
primes[0] = 1;
}
int main(){
    sieve();
string s;
int sum;
while(cin >> s){
 sum = 0;
for(int i = 0;i<s.size();i++){
    if(s[i]>='A' && s[i] <= 'Z'){
        sum += (s[i]-38);
    }else if(s[i]>= 'a' && s[i] <= 'z'){
    sum += s[i]-96;
    }
}
if(!primes[sum]){
    cout << "It is a prime word.\n";
}else{
 cout << "It is not a prime word.\n";
}
}
return 0;
}

