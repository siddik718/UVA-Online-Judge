/* solving method 
perfect numbers are limited so google for perfect numbers 
link : https://en.wikipedia.org/wiki/List_of_perfect_numbers
*/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int primes[32];
void sieve(){
for(int i = 2;i<=sqrt(32);i++){
    if(!primes[i]){
        for(int j = i*i;j<=32;j+=i)
            primes[j] = 1;
    }
}
}
ll arr[15];
int main(){
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
arr[2] = 6;
arr[3] = 28;
arr[5] = 496;
arr[7] = 8128;
arr[13] = 33550336;
int n;
while((cin >> n),!(n ==0) ){
    if(primes[n]){
cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
    else{
    if(n == 2 || n == 3 ||n == 5 ||n == 7 ||n == 13){
        cout << "Perfect: "<< arr[n]<< "!\n";
    }else if(n == 17){
    cout << "Perfect: 8589869056!\n";
    }else if(n == 19){
    cout << "Perfect: 137438691328!\n";
    }else if(n == 31){
    cout << "Perfect: 2305843008139952128!\n";
    }
    else{
cout << "Given number is prime. But, NO perfect number is available.\n";
    }
    }
}
return 0;
}
