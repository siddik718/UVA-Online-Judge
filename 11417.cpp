#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int i,long long int j){
    if(j == 0)
    return i;
    return (gcd(j,i%j));
}
long long int calculate(long long int n){
  long long i,j,G=0;
for(i=1;i<n;i++)
for(j=i+1;j<=n;j++)
{
G+=gcd(i,j);
}
return G;
}
int main(){
long long int n;
while(scanf("%lld",&n) ,!(n==0)){
printf("%lld\n",calculate(n));
}
    return 0;
}
