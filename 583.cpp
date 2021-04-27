#include<bits/stdc++.h>
#define N 1000000
#define ll long long int
using namespace std;

vector <bool> ar(N+2,true);
vector <int> primes;

void sieve(){

    for(int i = 3;i*i<=N;i+=2){
        if(ar[i]){
            for(int j = i*i;j<=N;j+=2*i){
                ar[j] = false;
                }
            }
        }
    primes.push_back(2);
    for(int i = 3;i<=N;i+=2){
        if(ar[i]){
            primes.push_back(i);
        }
    }
}

int main(){
    sieve();
    int n;
    int arr[1000],a;

    while(cin >> n,n){
    a=0;
    cout << n << " = ";

    if(n<0){
    n = n*(-1);
    cout << "-1 x ";
    }

    for(int i = 0;i<=sqrt(n);i++){
            if(n%primes[i] == 0){
                while(n%primes[i] == 0){
                    n/=primes[i];
                    arr[a++] = primes[i];
            }
        }
    }

    if(n>1) arr[a++] = n;

    for(int i = 0;i<a-1;i++){
        cout << arr[i] << " x ";
    }
        cout << arr[a-1] << endl;

    }
    return 0;
}
